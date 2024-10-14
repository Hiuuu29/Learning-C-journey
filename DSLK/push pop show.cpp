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
	while(head != NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
}

void pop(node **head)
{
	// neu DSLK rong thi khong lam gi ca
	if(*head == NULL) return;
	node *tmp = (*head);
	// neu DSLK co 1 ptu thi head nay dang tro cao NULL
	(*head) = tmp->next;
	free(tmp);
}

void pushfront(node **head)
{
	node *newnode = makenode();
	newnode->next = (*head);
	(*head) = newnode;

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
			pop(&head);
		}
		else if(strcmp(lc,"push") == 0)
		{
			pushfront(&head);
		}
		else if(strcmp(lc,"show") == 0)
		{
			duyet(head);
		}
	}
	
	return 0;
}
