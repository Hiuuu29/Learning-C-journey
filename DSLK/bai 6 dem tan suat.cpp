#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* trong dslk luu cac tu va tan suat xuat hien cua no
*/

struct node{
	char data[20];
	int tansuat;
	struct node *next;
};
typedef struct node node;
/*-------------------------------------------------ham tao mot node moi-------------------------------------------------------*/
node* makenode(char c[])
{
	node *newnode = (node*)malloc(sizeof(node));
	strcpy(newnode->data, c);
	newnode->tansuat = 1;
	newnode->next = NULL;

	return newnode;
}
//-------- neu dslk da co tu do thi + tan suat len 1, neu ko co thi them no vao dslk
void update (node **head, char c[])
{
	// neu dslk dang rong
	if((*head) == NULL)
	{
		node *newnode = makenode(c);
		*head = newnode;
		return;
	}
	// neu dslk da co ptu
	node *tmp = *head;
	node *prev = tmp;
	while(tmp != NULL) // duyet den NULL
	{
		if( strcmp(tmp->data, c) == 0 ) // neu no co data giong nhau (data da xuat hien roi)
		{
			tmp->tansuat += 1; return; // ket thuc ham khi da co du lieu trong dslk
		}
		// neu da duyet qua dslk ma chua thay no lan nao 
		prev = tmp; //  cho bien prev chay sau bien tmp 
		tmp = tmp->next;  // cap nhat bien tmp
	}
	// o dong while tren bien tmp da tro den NULL, nhung bien prec moi tro den node cuoi cung nen ta se dung bien prev
	// th da duyet qua het dslk nhung ko co data trung khop, them node moi vao cuoi
	node *newnode = makenode(c);
	prev->next = newnode;
}

void duyet (node *head)
{
	while(head != NULL)
	{
		printf("%s %d\n", head->data, head->tansuat);
		head = head->next;
	}
}

int main()
{
	node *head = NULL;
	char c[30];
	while( scanf("%s",c) != -1 )
	{
		update(&head,c);
	}
	duyet(head);
	
	return 0;
}

