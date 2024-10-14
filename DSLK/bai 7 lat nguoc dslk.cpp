#include <stdio.h>
#include <stdlib.h>

// khoi tao dslk doi
struct node
{
	int data;
	struct node *next;
	struct node *previous;
};
typedef struct node node;

/*-------------------------------------------------ham tao mot node moi-------------------------------------------------------*/
node* makenode(int x)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = x;
	newnode->next = NULL;
	newnode->previous = NULL;

	return newnode;
}
/*------------------------------------------------- ham duyet qua DSLK -------------------------------------------------------*/
void duyet (node *head)
{
	// neu danh sach rong ko lam gi ca
	if(head == NULL) return;
	// duyet tu dau den cuoi
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
}
//========================================================================================================================
// them node vao cuoi----------------------------------------------------
void pushback (node **head, int x)
{
	node *newnode = makenode(x); // tao 1 node moi
	// neu danh sach rong
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}
	// neu danh sach co it nhat 1 ptu
	node *tmp = (*head);
	while (tmp->next != NULL) // di chuyen den node cuoi cung
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	newnode->previous = tmp;
}
//========================================================================================================================
int size (node *head)
{
	int cnt = 0;
	while(head != NULL)
	{
		++cnt;
		head = head->next;
	}
	return cnt;
}
//========================================================================================================================
void latnguoc(node **head)
{
	if((*head)== NULL) return;
	int n = size(*head);
	node *tmp1 = *head; // tmp1 dang tro den node dau tien
	node *tmp2 = *head; // tmp2 dang o vi tri node dau tien
	while(tmp2->next != NULL)
	{
		tmp2 = tmp2->next; // tmp 2 di chuyen den node cuoi cung
	}
	for(int i = 1; i <= n/2; ++i)
	{
		int tmp = tmp1->data;
		tmp1->data = tmp2->data;
		tmp2->data = tmp;
		
		tmp1 = tmp1->next;
		tmp2 = tmp2->previous;
	}
}
//========================================================================================================================
int main()
{
	node *head = NULL;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x; scanf("%d",&x);
		pushback(&head, x);
	}
	latnguoc(&head);
	duyet(head);
	
	return 0;
}
