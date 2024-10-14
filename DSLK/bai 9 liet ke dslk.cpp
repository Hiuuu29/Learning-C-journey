#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main()
{
	node *head = NULL;
	int n; scanf("%d",&n);
	while(n--)
	{
		int x; scanf("%d", &x);
		pushback(&head, x);
	}
	node *tmp = head;
	while (tmp != NULL)
	{	
		int check = 1;
		node *p = tmp->previous;
		while(p != NULL)
		{
			if(tmp->data == p->data)
			{
				check = 0; break;
			}
			p = p->previous;
		}
		
		if(check) printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	
	
	return 0;
}

