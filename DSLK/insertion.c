#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// dslk don co mssv chuoi ko qua 20 ki tu, ho va ten ko qua 50 ki tu diem gpa
// code 3 thao tac them sv vao dau, cuoi, vi tri k
// in ra dslk sau khi thuc hien
/* dong dau tien n la so thao tac thuc hien
dong 1 loai thao tac(1,2,3)
mssv
ho va ten
gpa
*/

struct node
{
	char mssv[20];
	char ten[50];
	double gpa;
	struct node *next;
};
typedef struct node node;

node *makenode()
{
	node *newnode = (node*)malloc(sizeof(node));
	getchar();
	gets(newnode->mssv);
	gets(newnode->ten);
	scanf("%lf", &(newnode->gpa));
	newnode->next = NULL;

	return newnode;
}

int size(node *head)
{
	int cnt = 0;
	while(head != NULL)
	{
		++cnt;
		head = head->next;
	}
	return cnt;
}

void pushfront(node **head)
{
	node *newnode = makenode();
	newnode->next = (*head);
	*head = newnode;
}

void pushback(node **head)
{
	node *newnode = makenode();
	if (*head == NULL) // neu dslk rong thi cho head tro toi new node xong return
	{
		*head = newnode;
		return;
	}
	node *tmp = *head;
	while(tmp->next != NULL)
	{
		tmp = tmp->next; // di chuyen den node cuoi cung
	}
	tmp->next = newnode;
}

void insert(node **head, int k)
{
	int n = size(*head);
	if (k < 1 || k > n + 1) return;
	else if (k == 1) pushfront(head);
	else if (k == n + 1) pushback(head);
	else
	{
		node *newnode = makenode();
		node *tmp = *head;
		for(int i = 1; i < k-1; ++i)
		{
			tmp = tmp->next; // di chuyen den vi tri k - 1
		}
		newnode->next = tmp->next; //  cho newnode lien ket voi node o vi tri k
		tmp->next = newnode; // cho node k-1 lien ket voi new node
	}
}

void duyet(node *head)
{
	while(head != NULL)
	{
		printf("%s %s %.2lf\n", head->mssv, head->ten, head->gpa);
		head = head->next;
	}
}



int main()
{
	node *head = NULL;
	int n;
	scanf("%d",&n); // so thao tac tuc hien
	while(n--)
	{
		int tt;
		scanf("%d", &tt);
		if(tt == 1)
		{
			pushfront(&head);
		}
		else if(tt == 2)
		{
			pushback(&head);
		}
		else
		{
			int k;
			scanf("%d",&k);
			insert(&head,k);
		}
	}
	duyet(head);
	return 0;
}
