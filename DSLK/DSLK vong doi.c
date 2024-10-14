#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

typedef struct node node;

node* makenode(int data){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = newnode;
    newnode->previous = newnode;
    return newnode;
}
/*------------------------------------------------- ham duyet qua DSLK -------------------------------------------------------*/
void duyet(node *tail)
{
    if (tail == NULL) return;
    node* tmp = tail->next; //head
    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    } while (tmp != tail->next);
}
/*-------------------------------------------------do lon cua DSLK-------------------------------------------------------*/
int size(node *tail)
{
    int cnt = 0;
    if (tail == NULL) return 0;
    node* tmp = tail->next; //head
    do
    {
        cnt++;
        tmp = tmp->next;
    } while (tmp != tail->next);
    return cnt;

}
/*----------------------------------------------------ADD - THEM NODE -------------------------------------------------------*/
// them node vao dau----------------------------------------------------
void pushfront(node **tail, int x)
{
    node *newnode = makenode(x);
    // neu dslk dang rong 
    if((*tail) == NULL){
        (*tail) = newnode; //cho tail tro vao new node
        return;
    }
    // neu dslk co 1 phan tu
    else if ((*tail) == (*tail)-> next && (*tail) == (*tail)->previous)
    {
        newnode->next = (*tail);
        newnode->previous = (*tail);
        (*tail)->next = newnode;
        (*tail)->previous = newnode;
    }
    // dslk co nhieu hon 1 node
    else
    {
        node *tmp = (*tail)-> next; // node head
        newnode->next = tmp;
        newnode->previous = (*tail);
        tmp->previous = newnode;
        (*tail)->next = newnode;
    }
}
// them node vao cuoi----------------------------------------------------
void pushback(node **tail, int x)
{
    node *newnode = makenode(x);
    // neu dslk dang rong 
    if((*tail) == NULL){
        (*tail) = newnode; //cho tail tro vao new node
        return;
    }
    // neu dslk co it nhat 1 ptu
    else
    {
        // lk giua newnode va node head
        newnode->next = (*tail)->next;
        (*tail)->next->previous = newnode;
        // lk giua tail va newnode
        newnode->previous = (*tail);
        (*tail)->next = newnode;
        // cap nhat lai tail
        (*tail) = newnode;
    }
}
// them node vao giua----------------------------------------------------
void insert (node **tail, int k, int x)
{
    int n = size((*tail));
    if (k < 1 || k > n + 1) {printf("Vi tri chen khong hop le\n"); return; }
    else if (k == 1) pushfront(tail,x);
    else if (k == n + 1) {pushback(tail,x);}
    else
    {
        node *newnode = makenode(x);
        node *tmp = (*tail);
        for (int i = 0; i < k - 1; i++) // di chuyen den vi tri k - 1 (vi tri sau vi tri can chen)
        {
            tmp = tmp->next;
        }
        tmp->next->previous = newnode;
        newnode->next = tmp->next;
        newnode->previous = tmp;
        tmp->next = newnode;
    }
}
/*----------------------------------------------------XOA - XOA NODE -------------------------------------------------------*/
// xoa node dau----------------------------------------------------
void popfront(node **tail)
{
    // neu dslk rong
    if ((*tail) == NULL) return;
    // neu dslk co 1 ptu
    else if ((*tail) == (*tail)->next)
    {
        free((*tail));
        (*tail) = NULL;
    }
    //dslk co nhieu hon 1 ptu
    else
    {
        node *tmp = (*tail)->next; // tmp la head
        (*tail)->next = tmp->next; // cho tail tro den node thu 2 sau head
        tmp->next->previous = (*tail); // cho node thu 2 tro nguoc ve tail
        free(tmp); // free node thu nhat
    }
}
// xoa node cuoi----------------------------------------------------
void popback(node **tail)
{
    // neu dslk rong
    if ((*tail) == NULL) return;
    // neu dslk co 1 ptu
    else if ((*tail) == (*tail)->next)
    {
        free((*tail));
        (*tail) = NULL;
    }
    //dslk co nhieu hon 1 ptu
    else
    {
        node *tmp = (*tail)->previous; // cho tmp la node ke cuoi
        tmp->next = (*tail)->next; // cho node ke cuoi tro den node dau tien
        (*tail)->next->previous = tmp; // cho node dau tien tro nguoc lai node ke cuoi
        free((*tail)); // free node cuoi
        (*tail) = tmp; // cap nhat lai tail

    }
}
// xoa node o vi tri k----------------------------------------------------
void pop(node **tail, int k)
{
    int n = size((*tail));
    if (k < 1 || k > n) { printf("Vi tri xoa khong hop le\n"); return; }
    if (k == 1) popfront(tail);
    else if (k == n) popback(tail);
    else
    {
        node *tmp = (*tail);
        for (int i = 0; i < k-1; i++) // di chuyen node k - 1
        {
            tmp = tmp->next;
        }
        node *freetmp = tmp->next; // node can free
        tmp->next = freetmp->next;
        freetmp->next->previous = tmp;
        free(freetmp);
    }
}
/*----------------------------------------------------SAP XEP DSLK VONG -------------------------------------------------------*/
void sort (node **tail)
{
    if ((*tail) == NULL) return;
    node *i = (*tail)->next; // head
    do
    {
        node *min = i;
        for(node *j = i->next; j != (*tail)->next; j = j->next)
        {
         if(j->data < min->data) min = j;   
        }
		if (min != i)
        {
            int tmp = i->data;
            i->data = min->data;
            min->data = tmp;
        }

        i = i->next;
    } while (i != (*tail)->next);
}
//--------------------------------------------VI TRI HIEN TAI CUA TAIL----------------------------------------------------------------
void locationtail(node *tail)
{   if (tail != NULL)
    printf("gia tri cua tail la : %d\n", tail->data);
    else
    printf("DSLK rang rong");
}


int main()
{
	node *tail = NULL;
	while(1)
	{
		printf("------------------------------------DSLK VONG OPERATION--------------------------------------------\n");
		printf("NHAP LUA CHON CUA BAN\n");
		printf("1.THEM VAO DAU\n");
		printf("2.THEM VAO CUOI\n");
		printf("3.THEM VAO VI TRI K\n");
		printf("4.XOA VI TRI DAU\n");
		printf("5.XOA VI TRI CUOI\n");
		printf("6.XOA VI TRI K\n");
		printf("7.DUYET DSLK\n");
		printf("8.SAP XEP DSLK\n");
		printf("0.THOAT CHUONG TRINH\n");
		printf("--------------------------------------------------------------------------------------------------\n");
		int lc; scanf("%d", &lc);
		if (lc == 1)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			pushfront(&tail, x);
		}
		else if (lc == 2)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			pushback(&tail, x);
		}
		else if (lc == 3)
		{
			printf("Nhap gia tri can them\n");
			int x; scanf("%d", &x);
			printf("Nhap vi tri them k\n");
			int k; scanf("%d", &k);
			insert(&tail,k,x);
		}
		else if (lc == 4)
		{
			popfront(&tail);
		}
		else if (lc == 5)
		{
			popback(&tail);
		}
		else if (lc == 6)
		{
			printf("Nhap vi tri xoa k\n");
			int k; scanf("%d", &k);
			pop(&tail,k);
		}
		else if (lc == 7)
		{
			duyet(tail);
		}
		else if (lc == 8)
		{
			sort(&tail);
		}
        else if (lc == 9)
		{
			locationtail(tail);
		}
		else if(lc == 0) break;
	}
	return 0;
}
