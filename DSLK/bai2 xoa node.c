#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// xoa tat ca cac node co gtri x trong dslk

struct node
{
	unsigned int data;
	struct node *next;
};
typedef struct node node;

node *makenode(int a)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = a;
	newnode->next = NULL;

	return newnode;
}

void pushback(node **head, int x)
{
	node *newnode = makenode(x);
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

void duyet (node *head)
{
	if(head == NULL) printf("EMPTY");
	while(head != NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
}


void xoanode(node **head, int x)
{
	while(*head != NULL && (*head)->data == x)// chung nao dslk con ptu va ptu dau tien cua no bang x
	{
		node *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	node *tmp = *head;
	node *prev = tmp;
	while(tmp != NULL)
	{
		if(tmp->data == x)
		{
			prev->next = tmp->next;
			free(tmp);
			tmp = prev;
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}

int main()
{
	node *head = NULL;
	int n, x;
	scanf("%d%d",&n, &x); // so thao tac tuc hien (so luong node cua dslk), va gtri so can xoa trong dslk
	while(n--)
	{
		int a; scanf("%d", &a);
		pushback(&head, a);
	}
	// xay dung xong dslk
	xoanode(&head, x);
	duyet(head);

	return 0;
}
