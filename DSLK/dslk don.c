#include <stdio.h>
#include <stdlib.h>

// khoi tao dslk don
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

/*-------------------------------------------------ham tao mot node moi-------------------------------------------------------*/
node* makenode(int x)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

/*------------------------------------------------- ham duyet qua DSLK -------------------------------------------------------*/
void duyet(node *head)
{
	// neu danh sach rong ko lam gi ca
	if(head == NULL) return;
	// duyet qua danh sach
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
}
/*-------------------------------------------------do lon cua DSLK-------------------------------------------------------*/
int size(node *head)
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
void pushfront (node **head, int x)
{
	node *newnode = makenode(x);
	newnode->next = (*head);
	(*head) = newnode;

}
// them node vao cuoi----------------------------------------------------
void pushback (node **head, int x)
{
	node *newnode = makenode(x);
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
// them node vao giua----------------------------------------------------
void insert(node **head, int k, int x)
{
	// lay do lon DSLK
	int n = size(*head);
	//Ktra vi tri chen co hop le khong
	if (k < 1 || k > n + 1)  return;
	else if(k == 1)
	{
		pushfront(head,x);
		return;
	}
	else if(k == n + 1)
	{
		pushback(head,x);
		return;
	}
	node *tmp = (*head);
	// di chuyen tmp den vi tri k - 1
	for (int i = 1; i < k - 1; i++)
	{
		tmp = tmp->next;
	}
	node *newnode = makenode(x);
	newnode->next = tmp->next;
	tmp->next = newnode;
}
/*----------------------------------------------------XOA - XOA NODE -------------------------------------------------------*/
// xoa node dau----------------------------------------------------
void popfront(node **head)
{
	// neu DSLK rong thi khong lam gi ca
	if(*head == NULL) return;
	node *tmp = (*head);
	// neu DSLK co 1 ptu thi head nay dang tro cao NULL
	(*head) = (*head)->next;
	free(tmp);
}
// xoa node cuoi----------------------------------------------------
void popback(node **head)
{
	// NEU DSLK RONG THI KHONG LAM GI CA
	if(*head == NULL) return;
	node *tmp = (*head);
	// TH chi co 1 ptu trong DSLK
	if(tmp->next == NULL)
	{
		*head = NULL;
		free(tmp);
	}
	// lap den vi tri node KE CUOI trong DSLK
	while(tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	node *del = tmp->next; // cho del la node cuoi cung o trong DSLK
	tmp->next = NULL; // cho tmp (dang o vi tri ke cuoi) chi den NULL
	free(del);

}
// xoa node o vi tri k----------------------------------------------------
void pop (node **head, int k)
{
	int n = size(*head);
	if (k < 1 || k > n) return; // vi tri xoa khong hop le
	node *tmp = *head;
	// lap cho bien tmp den vi tri k - 1
	for(int i = 1; i < k - 1; i++)
	{
		tmp = tmp->next;
	}
	node *del = tmp->next; // bien del chua vi tri k can xoa
	tmp->next = del->next; // neu la vi tri cuoi cung thi del->next dang tro den NULL
	free(del);
}
/*----------------------------------------------------SAP XEP DSLK DON -------------------------------------------------------*/
void sort(node **head)
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
}/*------------------------------------------------------Dao Nguoc Danh Sach Lien Ket-----------------------------------------------------*/
// KHONG DUNG STACK
void reverse(node **head)
{
	if ((*head) == NULL)
	{
		return;
	}
	
    node *tmp1 = NULL;
    node *tmp2;
    while ((*head) != NULL)
    {
        tmp2 = (*head)->next;
        (*head)->next = tmp1;
        tmp1 = (*head);
        (*head) = tmp2;
    }
    *head = tmp1;
}
/*----------------------------------------------------ADD - THEM NODE -------------------------------------------------------*/
//------------------------------------------- THEM NODE THEO THU TU TANG HOAC GIAM DAN (DSLK DA DUOC SAP XEP TRUOC)-----------
void addsort(node **head, int x)
{
	node *newnode = makenode(x);
	node *tmp = (*head);
	if ((*head) == NULL)
	{
		(*head) = newnode;
		return;
	}
	// ktra xem node moi co gtri nho hon node head ko 
	if ((*head)->data > newnode->data)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return;
	}
	// ktra cac node con lai 
	while (tmp->next != NULL && tmp->next->data < newnode->data)
	{
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
}

int main()
{
	node *head = NULL;
	while(1)
	{
		printf("------------------------------------DSLK DON OPERATION--------------------------------------------\n");
		printf("NHAP LUA CHON CUA BAN\n");
		printf("1.THEM VAO DAU\n");
		printf("2.THEM VAO CUOI\n");
		printf("3.THEM VAO VI TRI K\n");
		printf("4.XOA VI TRI DAU\n");
		printf("5.XOA VI TRI CUOI\n");
		printf("6.XOA VI TRI K\n");
		printf("7.DUYET DSLK\n");
		printf("8.SAP XEP DSLK\n");
		printf("9.DAO NGUOC DSLK\n");
		printf("10.SAP XEP THEO THU TU DSLK TANG DAN\n");
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
		}else if (lc == 10)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			addsort(&head,x);
		}
		else if(lc == 0) break;
	}
	return 0;
}
