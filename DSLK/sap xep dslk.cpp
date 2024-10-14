#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// xoa tat ca cac node co gtri x trong dslk

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

node *makenode()
{
	node *newnode = (node*)malloc(sizeof(node));
	scanf("%d", &(newnode->data));
	newnode->next = NULL;

	return newnode;
}

void pushback (node **head)
{
	node *newnode = makenode();
	node *tmp = (*head);
	// ktra neu dslk rong thi chi can makenode
	if(tmp == NULL)
	{
		*head = newnode; return;
	}
	// cho bien tmp di chuyen den node cuoi cung
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
}

void sort1(node **head)
{
	for(node *i = (*head); i != NULL; i = i->next)
	{
		node *min = i;
		for(node *j = i->next; j != NULL; j = j->next)
		{
			// sap xep tu nho den lon tim gia tri nho nhat
			if(min->data > j->data) min = j;
		}
		// hoan vi vi tri nho nhat do voi gia tri dau tien (head)
		int tmp = min->data;
		min->data = i->data;
		i->data = tmp;
	}
}

void sort2(node **head)
{
	for(node *i = (*head); i != NULL; i = i->next)
	{
		node *max = i;
		for(node *j = i->next; j != NULL; j = j->next)
		{
			// sap xep tu lon den nho tim gia tri lon nhat
			if(max->data < j->data) max = j;
		}
		// hoan vi vi tri lon nhat do voi gia tri dau tien (head)
		int tmp = max->data;
		max->data = i->data;
		i->data = tmp;
	}
}

/*------------------------------------------------- ham duyet qua DSLK -------------------------------------------------------*/
void duyet(node *head)
{
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
}

int main()
{
	node *head = NULL;
	int n; scanf("%d",&n);
	while(n--)
	{
		pushback(&head);
	}
	sort1(&head);
	duyet(head);
	sort2(&head);
	printf("\n");
	duyet(head);
	return 0;
}

