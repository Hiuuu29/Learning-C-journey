#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
// in ra sv co diem cao nhat

struct node{
    char *id;
    char *ten;
    double gpa;
    struct node *next;
};
typedef struct node node;


double max_gpa = -1e9;
/*-------------------------------------------------ham tao mot node moi-------------------------------------------------------*/
node* makenode()
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->id = (char*)malloc(100);
	newnode->ten = (char*)malloc(100);
	getchar();
	gets(newnode->id);
	gets(newnode->ten);
	scanf("%lf", &(newnode->gpa));
	max_gpa = fmax(max_gpa, newnode->gpa);
	newnode->next = NULL;

	return newnode;
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

int main(){
	node *head = NULL;
	int n; scanf("%d", &n);
	while(n--)
	{
		pushback(&head);
	}
	while(head != NULL)
	{
		if(head->gpa == max_gpa) printf("%s %s %.2lf\n", head->id, head->ten, head->gpa);
		head = head->next;
	}
	
	return 0;
}
