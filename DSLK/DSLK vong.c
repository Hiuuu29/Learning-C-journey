#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node* makenode(int data){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = newnode;
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
    node* tmp = tail->next;
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
    if ((*tail) != NULL)   
    {
        newnode->next = (*tail)->next; // cho con tro newnode tro vao node dau tien
        (*tail)->next = newnode; // cho tail tro vao newnode moi dc tao
    }
    else
    {
        (*tail) = newnode; // neu con tro rong thi cho tail tro vao new node
    }
}
// them node vao cuoi----------------------------------------------------
void pushback(node **tail, int x)
{
    node *newnode = makenode(x);
    if((*tail) != NULL) // ktra ds co NULL hay ko
    {
        newnode->next = (*tail)->next; // cho newnode tro den ptu dau tien
        (*tail)->next = newnode; // cho tail tro den newnode
        (*tail) = newnode; // cap nhat lai tail
    }
    else // neu dslk rong
    {
        (*tail) = newnode;
    }
}
// them node vao giua----------------------------------------------------
void insert (node **tail, int k, int x)
{
	int n = size(*tail);
    if(k < 1 || k > n + 1) {printf("VI TRI CHEN KO HOP LE\n"); return;}
	if ((*tail) == NULL) pushfront(tail,x); // neu dslk rong
	else if (k == n+1) pushback(tail,x);
    // dk k == 1 da dc tinh den trong day
    else
    {
        node *tmp = (*tail);
        node *newnode = makenode(x);
        for (int i = 0; i < k - 1; ++i)
		{
			tmp = tmp->next; // di chuyen den vi tri k - 1
		}
        newnode->next = tmp->next;
        tmp->next = newnode;
    }
    
}/*----------------------------------------------------XOA - XOA NODE -------------------------------------------------------*/
// xoa node dau----------------------------------------------------
void popfront(node **tail)
{
    // dslk rong ko lam gi ca
    if ((*tail) == NULL) return; 
    // dslk co 1 ptu
    else if ((*tail)->next == (*tail)){ // neu dia chi no tro toi la chinh no (co 1 node) 
        free((*tail)); // free tmp
        (*tail) = NULL;
        return;
    }
    // dslk co 2 ptu tro len
    else{
        node *tmp = (*tail)->next; // head
        (*tail)->next = tmp->next;
        free(tmp);
    }
}
// xoa node cuoi----------------------------------------------------
void popback(node **tail)
{
    // dslk rong
    if ((*tail)== NULL) return;
    // dslk co duy nhat 1 ptu
    else if ((*tail)->next == (*tail)){ // neu dia chi no tro toi la chinh no (co 1 node) 
        free((*tail)); // free tmp
        (*tail) = NULL;
        return;
    }
    // dslk co nhieu hon 1 ptu
    else
    {
        node *tmp = (*tail)->next; // tmp la HEAD (tro den node dau tien)
        while (tmp->next != (*tail))
        {
            tmp = tmp->next;
        }
        tmp->next = (*tail)->next;
        free((*tail));
        (*tail) = tmp;
    }
}
// xoa node o vi tri k----------------------------------------------------
void pop(node **tail, int k)
{
    if ((*tail) == NULL) return;
    int n = size((*tail));
    if(k < 1 || k > n){ printf("vi tri xoa ko hop le\n"); return; }
	if (k == 1) popfront(tail);
	else if (k == n) popback(tail);
	else
    {
        node *tmp = (*tail); // tmp = tail
        for (int i = 0; i < k - 1; i++) // di chuyen den node k-1
        {
            tmp = tmp->next;
        }
        node *freetmp = tmp->next; // day la node can xoa
        tmp->next = freetmp->next;
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
