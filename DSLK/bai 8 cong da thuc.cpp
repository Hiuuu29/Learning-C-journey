#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int mu;
    int heso;
    struct node *next;
};
typedef struct node node;

/*-------------------------------------------------ham tao mot node moi-------------------------------------------------------*/
node* makenode(int heso, int mu)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->mu = mu;
	newnode->heso = heso;
	newnode->next = NULL;

	return newnode;
}
//========================================================================================================================
void update (node **head, int heso, int mu)
{
	// neu dslk chua co gi
	if(*head == NULL)
	{
		node *newnode = makenode(heso, mu);
		*head = newnode;
		return;
	}
	// neu dslk da co
	node *tmp = *head;
	node *prev = tmp;
	// ktra xem so mu da xuat hien hay chua
	while(tmp != NULL)
	{
		if(tmp->mu == mu)
		{
			tmp->heso = tmp->heso + heso; return;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	node *newnode = makenode(heso, mu);
	prev->next = newnode;
}
//========================================================================================================================
void sapxepgiam (node **head)
{
	for (node *i = *head; i != NULL; i = i->next)
	{
		node *max = i;
		for (node *j = i->next; j != NULL; j = j->next)
		{
			if(j->mu > max->mu) max = j;
		}
		int tmp = max->mu;
		max->mu = i->mu;
		i->mu = tmp;
		
		tmp = max->heso;
		max->heso = i->heso;
		i->heso = tmp;
	}
}
//========================================================================================================================

int main(){
	node *head = NULL;
	char c[1000];
	while (scanf("%s", c) != -1)
	{
		if(strcmp(c,"+") != 0) // neu chuoi doc dc ko phai la dau +
		{
			int heso = 0; int mu = 0;
			char *token = strtok(c, "^x");
			heso = atoi(token);
			token = strtok(NULL, "^x");
			mu = atoi(token);
			update(&head, heso, mu);
		}
	}
	sapxepgiam(&head);
	while (head != NULL)
	{
		printf("%dx^%d", head->heso, head->mu);
		head = head->next;
		if(head != NULL) printf(" + ");
	}
	
	return 0;
}


