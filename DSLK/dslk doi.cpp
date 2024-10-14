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
/*-------------------------------------------------do lon cua DSLK-------------------------------------------------------*/
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
/*----------------------------------------------------ADD - THEM NODE -------------------------------------------------------*/
// them node vao dau----------------------------------------------------
void pushfront(node **head, int x)
{
	node *newnode = makenode(x); // tao 1 node moi
	newnode->next = (*head); // cho node moi tao tro vao ptu dau
	// neu danh sach khong rong
	if(*head != NULL)
	{
		(*head)->previous = newnode; // cho prev tro vao node moi
	}
	*head = newnode; // cho head tro vao node moi
}
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
// them node vao giua----------------------------------------------------
void insert (node **head, int k, int x)
{
	int n = size(*head);
	if (k < 1 || k > n+1) {printf("vi tri chen ko hop le"); return;}
	if (k == 1) pushfront(head,x);
	else if (k == n+1) pushback(head,x);
	/*-------------*/
	else
	{
		node *tmp = *head;
		node *newnode = makenode(x);
		for (int i = 1; i < k - 1; ++i)
		{
			tmp = tmp->next; // di chuyen den vi tri k - 1
		}
		newnode->next = tmp->next;
		newnode->previous = tmp;
		tmp->next = newnode; // tro vao newnode
		tmp->next->previous = newnode;	
	}
}
/*----------------------------------------------------XOA - XOA NODE -------------------------------------------------------*/
// xoa node dau----------------------------------------------------
void popfront (node **head)
{
	// ktra dslk co rong hay ko
	if (*head == NULL) return;
	// neu dslk co it nhat 1 ptu
	node *tmp = (*head);
	*head = tmp->next; // di chuyen head den node tiep theo
	if(*head == NULL) // neu TH dslk chi co 1 node, thi head di chuyen den node thu 2 la NULL ma da la NULL thi ko can lam gi
		(*head)->previous = NULL; // neu node thu 2 khac NULL thi moi tro prev ve NULL thoi

	free(tmp);
}
// xoa node cuoi----------------------------------------------------
void popback (node **head)
{
	// neu dslk rong ko lam gi ca
	 if(*head == NULL) return;
	 node *tmp = *head;
	 // neu dslk chi co 1 node
	 if (tmp->next == NULL)
	 {
	 	*head = NULL;
	 	free(tmp);
	 	return;
	 }
	 while(tmp->next != NULL)
	 {
	 	tmp = tmp->next; // di chuyen den vi tri node cuoi
	 }
	 tmp->previous->next = NULL; //cho node ke cuoi tro vao NULL
	 free(tmp);
}
// xoa node o vi tri k----------------------------------------------------
void pop (node **head, int k)
{
	int n = size(*head);
	if(k < 1 || k > n){ printf("vi tri xoa ko hop le"); return; }
	if (k == 1) popfront(head);
	else if (k == n) popback(head);
	else
	{
		node *tmp = (*head);
		for (int i = 1; i <= k - 1; ++i) // di chuyen den node can xoa
		{
			tmp = tmp->next;
		}
		tmp->previous->next = tmp->next;
		tmp->next->previous = tmp->previous;
		free(tmp);
	}
}
/*----------------------------------------------------SAP XEP DSLK DOI -------------------------------------------------------*/
void sort (node **head)
{
	for(node *i = *head; i != NULL; i = i->next)
	{
		node *min = i;
		for (node *j = i->next; j != NULL ; j = j->next)
		{
			if(min->data > j->data)
				min = j;
		}
		int tmp = min->data;
		min->data = i->data;
		i->data = tmp;
	}
}
/*----------------------------------------------------LAT NGUOC DCLK DOI KO DUNG STACK -------------------------------------------------------*/
void reverse(node **head)
{
	node *tmp1 = (*head);
	node *tmp2 = tmp1->next;

	tmp1->next = NULL;
	tmp1->previous = tmp2;

	while (tmp2 != NULL)
	{
		tmp2->previous = tmp2->next;
		tmp2->next = tmp1;
		tmp1 = tmp2;
		tmp2 = tmp2->previous;
	}
	*head = tmp1;
}


int main()
{
	node *head = NULL;
	while(1)
	{
		printf("------------------------------------DSLK DOI OPERATION--------------------------------------------\n");
		printf("NHAP LUA CHON CUA BAN\n");
		printf("1.THEM VAO DAU\n");
		printf("2.THEM VAO CUOI\n");
		printf("3.THEM VAO VI TRI K\n");
		printf("4.XOA VI TRI DAU\n");
		printf("5.XOA VI TRI CUOI\n");
		printf("6.XOA VI TRI K\n");
		printf("7.DUYET DSLK\n");
		printf("8.SAP XEP DSLK\n");
		printf("9.LAT NGUOC DSLK\n");
		printf("0.THOAT CHUONG TRINH\n");
		printf("--------------------------------------------------------------------------------------------------\n");
		int lc; scanf("%d", &lc);
		if (lc == 1)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			pushfront(&head, x);
		}
		else if (lc == 2)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			pushback(&head, x);
		}
		else if (lc == 3)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			printf("Nhap vi tri them k\n");
			int k; scanf("%d", &k);
			insert(&head,k,x);
		}
		else if (lc == 4)
		{
			popfront(&head);
		}
		else if (lc == 5)
		{
			popback(&head);
		}
		else if (lc == 6)
		{
			printf("Nhap vi tri xoa k\n");
			int k; scanf("%d", &k);
			pop(&head,k);
		}
		else if (lc == 7)
		{
			duyet(head);
		}
		else if (lc == 8)
		{
			sort(&head);
		}else if (lc == 9)
		{
			reverse(&head);
		}
		else if(lc == 0) break;
	}
	return 0;
}
