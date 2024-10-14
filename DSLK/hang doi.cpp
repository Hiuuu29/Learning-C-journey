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

node *makenode()
{
	node *newnode = (node*)malloc(sizeof(node));
	scanf("%d",&(newnode->data));
	newnode->next = NULL;

	return newnode;
}
void duyet(node *head)
{
	if(head == NULL) printf("EMPTY\n");
	while(head->next != NULL)
	{
		head = head->next;
	}
	printf("%d",head->data);
}

void popfront(node **head)
{
	// neu DSLK rong thi khong lam gi ca
	if(*head == NULL) return;
	node *tmp = (*head);
	// neu DSLK co 1 ptu thi head nay dang tro cao NULL
	(*head) = (*head)->next;
	free(tmp);
}

void pushback (node **head)
{
	node *newnode = makenode();
	node *tmp = (*head);
	// ktra neu dslk rong thi chi can makenode
	if(*head == NULL)
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

int main()
{
	node *head = NULL;
	int n; scanf("%d",&n);
	while(n--)
	{
		char lc[6]; scanf("%s", lc);
		if (strcmp(lc,"pop") == 0)
		{
			popfront(&head);
		}
		else if(strcmp(lc,"push") == 0)
		{
			pushback(&head);
		}
		else if(strcmp(lc,"front") == 0)
		{
			if(head == NULL) printf("EMPTY\n");
			else{
				printf("%d\n", head->data);
			}
		}
	}
	
	return 0;
}
