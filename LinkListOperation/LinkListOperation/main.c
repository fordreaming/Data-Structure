//#include "stdio.h"    
//#include "string.h"
//#include "ctype.h"      
//#include "stdlib.h"   
//#include "io.h"  
//#include "math.h"  
//#include "time.h"
//
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//
//#define MAXSIZE 20 /* �洢�ռ��ʼ������ */
//
//typedef int Status;/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
//typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */
//
//
//Status visit(ElemType c)
//{
//	printf("%d ",c);
//	return OK;
//}
//
//typedef struct _Node
//{
//	ElemType data;
//	struct _Node *next;
//}Node;
//
//typedef struct _Node *LinkList; /* ����LinkList */
//
///* ��ʼ��˳�����Ա� */
//Status InitList(LinkList *L) 
//{ 
//	*L=(LinkList)malloc(sizeof(Node)); /* ����ͷ���,��ʹLָ���ͷ��� */
//	if(!(*L)) /* �洢����ʧ�� */
//		return ERROR;
//	(*L)->next=NULL; /* ָ����Ϊ�� */
//
//	return OK;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
//Status ListEmpty(LinkList L)
//{ 
//	if(L->next)
//		return FALSE;
//	else
//		return TRUE;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
//Status ClearList(LinkList *L)
//{ 
//	LinkList p,q;
//	p=(*L)->next;           /*  pָ���һ����� */
//	while(p)                /*  û����β */
//	{
//		q=p->next;
//		free(p);
//		p=q;
//	}
//	(*L)->next=NULL;        /* ͷ���ָ����Ϊ�� */
//	return OK;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
//int ListLength(LinkList L)
//{
//	int i=0;
//	LinkList p=L->next; /* pָ���һ����� */
//	while(p)                        
//	{
//		i++;
//		p=p->next;
//	}
//	return i;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
///* �����������e����L�е�i������Ԫ�ص�ֵ */
//Status GetElem(LinkList L,int i,ElemType *e)
//{
//	int j;
//	LinkList p;		/* ����һ���p */
//	p = L->next;		/* ��pָ������L�ĵ�һ����� */
//	j = 1;		/*  jΪ������ */
//	while (p && j<i)  /* p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������ */
//	{   
//		p = p->next;  /* ��pָ����һ����� */
//		++j;
//	}
//	if ( !p || j>i ) 
//		return ERROR;  /*  ��i��Ԫ�ز����� */
//	*e = p->data;   /*  ȡ��i��Ԫ�ص����� */
//	return OK;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��� */
///* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
///* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
//int LocateElem(LinkList L,ElemType e)
//{
//	int i=0;
//	LinkList p=L->next;
//	while(p)
//	{
//		i++;
//		if(p->data==e) /* �ҵ�����������Ԫ�� */
//			return i;
//		p=p->next;
//	}
//
//	return 0;
//}
//
//
///* ��ʼ������˳�����Ա�L�Ѵ���,1��i��ListLength(L)�� */
///* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
//
//Status ListInsertByValue(LinkList L,int i,ElemType e)
//{ 
//	int j;
//	LinkList p,s;
//	p = L;   //��ʱp/*L���Ϊͷ���
//	j = 1;
//	while (p && j < i)     /* Ѱ�ҵ�i����� */
//	{
//		p = p->next;
//		++j;
//	} 
//	if (!p || j > i) 
//		return ERROR;   /* ��i��Ԫ�ز����� */
//	s = (LinkList)malloc(sizeof(Node));  /*  �����½��(C���Ա�׼����) */
//	s->data = e;  
//	s->next = p->next;      /* ��p�ĺ�̽�㸳ֵ��s�ĺ��  */
//	p->next = s;          /* ��s��ֵ��p�ĺ�� */
//	return OK;
//}
//
//Status ListInsert(LinkList *L,int i,ElemType e)
//{ 
//	int j;
//	LinkList p,s;
//	p = *L;   //��ʱp/*L���Ϊͷ���
//	j = 1;
//	while (p && j < i)     /* Ѱ�ҵ�i����� */
//	{
//		p = p->next;
//		++j;
//	} 
//	if (!p || j > i) 
//		return ERROR;   /* ��i��Ԫ�ز����� */
//	s = (LinkList)malloc(sizeof(Node));  /*  �����½��(C���Ա�׼����) */
//	s->data = e;  
//	s->next = p->next;      /* ��p�ĺ�̽�㸳ֵ��s�ĺ��  */
//	p->next = s;          /* ��s��ֵ��p�ĺ�� */
//	return OK;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
///* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
//Status ListDelete(LinkList *L,int i,ElemType *e) 
//{ 
//	int j;
//	LinkList p,q;
//	p = *L;
//	j = 1;
//	while (p->next && j < i)	/* ����Ѱ�ҵ�i��Ԫ�� */
//	{
//		p = p->next;
//		++j;
//	}
//	if (!(p->next) || j > i) 
//		return ERROR;           /* ��i��Ԫ�ز����� */
//	q = p->next;
//	p->next = q->next;			/* ��q�ĺ�̸�ֵ��p�ĺ�� */
//	*e = q->data;               /* ��q����е����ݸ�e */
//	free(q);                    /* ��ϵͳ���մ˽�㣬�ͷ��ڴ� */
//	return OK;
//}
//
///* ��ʼ������˳�����Ա�L�Ѵ��� */
///* ������������ζ�L��ÿ������Ԫ����� */
//Status ListTraverse(LinkList L)
//{
//	LinkList p=L->next;
//	while(p)
//	{
//		visit(p->data);
//		p=p->next;
//	}
//	printf("\n");
//	return OK;
//}
//
///*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��ͷ�巨�� */
//void CreateListHead(LinkList *L, int n) 
//{
//	LinkList p;
//	int i;
//	srand(time(0));                         /* ��ʼ����������� */
//	*L = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;                      /*  �Ƚ���һ����ͷ���ĵ����� */
//	for (i=0; i<n; i++) 
//	{
//		p = (LinkList)malloc(sizeof(Node)); /*  �����½�� */
//		p->data = rand()%100+1;             /*  �������100���ڵ����� */
//		p->next = (*L)->next;    
//		(*L)->next = p;						/*  ���뵽��ͷ */
//	}
//}
//
///*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��β�巨�� */
//void CreateListTail(LinkList *L, int n) 
//{
//	LinkList p,r;
//	int i;
//	srand(time(0));                      /* ��ʼ����������� */
//	*L = (LinkList)malloc(sizeof(Node)); /* LΪ�������Ա� */
//	r=*L;                                /* rΪָ��β���Ľ�� */
//	for (i=0; i<n; i++) 
//	{
//		p = (Node *)malloc(sizeof(Node)); /*  �����½�� */
//		p->data = rand()%100+1;           /*  �������100���ڵ����� */
//		r->next=p;                        /* ����β�ն˽���ָ��ָ���½�� */
//		r = p;                            /* ����ǰ���½�㶨��Ϊ��β�ն˽�� */
//	}
//	r->next = NULL;                       /* ��ʾ��ǰ������� */
//}
//
//int main()
//{        
//	LinkList L;
//	ElemType e;
//	Status i;
//	int j,k;
//	i=InitList(&L);
//	printf("��ʼ��L��ListLength(L)=%d\n",ListLength(L));
//	for(j=1;j<=5;j++)
//		i = ListInsertByValue(L, 1, j);
//		//i=ListInsert(&L,1,j);
//	printf("��L�ı�ͷ���β���1��5��L.data=");
//	ListTraverse(L); 
//
//	printf("ListLength(L)=%d \n",ListLength(L));
//	i=ListEmpty(L);
//	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n",i);
//
//	i=ClearList(&L);
//	printf("���L��ListLength(L)=%d\n",ListLength(L));
//	i=ListEmpty(L);
//	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n",i);
//
//	for(j=1;j<=10;j++)
//		ListInsert(&L,j,j);
//	printf("��L�ı�β���β���1��10��L.data=");
//	ListTraverse(L); 
//
//	printf("ListLength(L)=%d \n",ListLength(L));
//
//	ListInsert(&L,1,0);
//	printf("��L�ı�ͷ����0��L.data=");
//	ListTraverse(L); 
//	printf("ListLength(L)=%d \n",ListLength(L));
//
//	GetElem(L,5,&e);
//	printf("��5��Ԫ�ص�ֵΪ��%d\n",e);
//	for(j=3;j<=4;j++)
//	{
//		k=LocateElem(L,j);
//		if(k)
//			printf("��%d��Ԫ�ص�ֵΪ%d\n",k,j);
//		else
//			printf("û��ֵΪ%d��Ԫ��\n",j);
//	}
//
//
//	k=ListLength(L); /* kΪ�� */
//	for(j=k+1;j>=k;j--)
//	{
//		i=ListDelete(&L,j,&e); /* ɾ����j������ */
//		if(i==ERROR)
//			printf("ɾ����%d������ʧ��\n",j);
//		else
//			printf("ɾ����%d����Ԫ��ֵΪ��%d\n",j,e);
//	}
//	printf("�������L��Ԫ�أ�");
//	ListTraverse(L); 
//
//	j=5;
//	ListDelete(&L,j,&e); /* ɾ����5������ */
//	printf("ɾ����%d����Ԫ��ֵΪ��%d\n",j,e);
//
//	printf("�������L��Ԫ�أ�");
//	ListTraverse(L); 
//
//	i=ClearList(&L);
//	printf("\n���L��ListLength(L)=%d\n",ListLength(L));
//	CreateListHead(&L,20);
//	printf("���崴��L��Ԫ��(ͷ�巨)��");
//	ListTraverse(L); 
//
//	i=ClearList(&L);
//	printf("\nɾ��L��ListLength(L)=%d\n",ListLength(L));
//	CreateListTail(&L,20);
//	printf("���崴��L��Ԫ��(β�巨)��");
//	ListTraverse(L); 
//
//
//	return 0;
//}


//�����ִ�ħ��
//http://www.nowamagic.net/librarys/veda/detail/2241
#include "stdio.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */

typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node;
/* ����LinkList */
typedef struct Node *LinkList;

/* ��ʼ��˳�����Ա� */
Status InitList(LinkList *L)
{
	*L=(LinkList)malloc(sizeof(Node)); /* ����ͷ���,��ʹLָ���ͷ��� */
	if(!(*L)) /* �洢����ʧ�� */
	{
		return ERROR;
	}
	(*L)->next=NULL; /* ָ����Ϊ�� */

	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(LinkList L)
{
	int i=0;
	LinkList p=L->next; /* pָ���һ����� */
	while(p)
	{
		i++;
		p=p->next;
	}
	return i;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(LinkList *L)
{
	LinkList p,q;
	p=(*L)->next;           /*  pָ���һ����� */
	while(p)                /*  û����β */
	{
		q=p->next;
		free(p);
		p=q;
	}
	(*L)->next=NULL;        /* ͷ���ָ����Ϊ�� */
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(LinkList L)
{
	LinkList p=L->next;
	while(p)
	{
		visit(p->data);
		p=p->next;
	}
	printf("\n");
	return OK;
}

Status visit(ElemType c)
{
	printf("-> %d ",c);
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* �����������e����L�е�i������Ԫ�ص�ֵ */
Status GetElem(LinkList L,int i,ElemType *e)
{
	int j;
	LinkList p;		/* ����һ���p */
	p = L->next;		/* ��pָ������L�ĵ�һ����� */
	j = 1;		/*  jΪ������ */
	while (p && j < i)  /* p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������ */
	{
		p = p->next;  /* ��pָ����һ����� */
		++j;
	}
	if ( !p || j>i )
		return ERROR;  /*  ��i��Ԫ�ز����� */
	*e = p->data;   /*  ȡ��i��Ԫ�ص����� */
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
int LocateElem(LinkList L,ElemType e)
{
	int i=0;
	LinkList p=L->next;
	while(p)
	{
		i++;
		if(p->data==e) /* �ҵ�����������Ԫ�� */
			return i;
		p=p->next;
	}

	return 0;
}

/*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��ͷ�巨�� */
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	srand(time(0));                         /* ��ʼ����������� */
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;                      /*  �Ƚ���һ����ͷ���ĵ����� */
	for (i=0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node)); /*  �����½�� */
		p->data = rand()%100+1;             /*  �������100���ڵ����� */
		p->next = (*L)->next;
		(*L)->next = p;						/*  ���뵽��ͷ */
	}
}

/*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��β�巨�� */
void CreateListTail(LinkList *L, int n)
{
	LinkList p,r;
	int i;
	srand(time(0));                      /* ��ʼ����������� */
	*L = (LinkList)malloc(sizeof(Node)); /* LΪ�������Ա� */
	r=*L;                                /* rΪָ��β���Ľ�� */
	for (i=0; i < n; i++)
	{
		p = (Node *)malloc(sizeof(Node)); /*  �����½�� */
		p->data = rand()%100+1;           /*  �������100���ڵ����� */
		r->next=p;                        /* ����β�ն˽���ָ��ָ���½�� */
		r = p;                            /* ����ǰ���½�㶨��Ϊ��β�ն˽�� */
	}
	r->next = NULL;                       /* ��ʾ��ǰ������� */
}

/* ��ʼ������˳�����Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(LinkList *L,int i,ElemType e)
{
	int j;
	LinkList p,s;
	p = *L;     /* ����һ����� p��ָ��ͷ��� */
	j = 1;
	while (p && j < i)     /* Ѱ�ҵ�i����� */
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;   /* ��i��Ԫ�ز����� */
	s = (LinkList)malloc(sizeof(Node));  /*  �����½��(C���Ա�׼����) */
	s->data = e;
	s->next = p->next;      /* ��p�ĺ�̽�㸳ֵ��s�ĺ��  */
	p->next = s;          /* ��s��ֵ��p�ĺ�� */
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(LinkList *L,int i,ElemType *e)
{
	int j;
	LinkList p,q;
	p = *L;
	j = 1;
	while (p->next && j < i)	/* ����Ѱ�ҵ�i��Ԫ�� */
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
		return ERROR;           /* ��i��Ԫ�ز����� */
	q = p->next;
	p->next = q->next;			/* ��q�ĺ�̸�ֵ��p�ĺ�� */
	*e = q->data;               /* ��q����е����ݸ�e */
	free(q);                    /* ��ϵͳ���մ˽�㣬�ͷ��ڴ� */
	return OK;
}

/* ������ת/���� */
Status ListReverse(LinkList L)
{
	LinkList current,pnext,prev;
	if(L == NULL || L->next == NULL)
		return L;
	current = L->next;  /* p1ָ������ͷ�ڵ����һ���ڵ� */
	pnext = current->next;
	current->next = NULL;
	while(pnext)
	{
		prev = pnext->next;
		pnext->next = current;
		current = pnext;
		pnext = prev;
	}
	//printf("current = %d,next = %d \n",current->data,current->next->data);
	L->next = current;  /* ������ͷ�ڵ�ָ��p1 */
	return L;
}

Status ListReverse2(LinkList L)
{
	LinkList current, p;

	if (L == NULL)
	{
		return NULL;
	}
	current = L->next;
	while (current->next != NULL)
	{
		p = current->next;
		current->next = p->next;
		p->next = L->next;
		L->next = p;
		ListTraverse(L);
		printf("current = %d, \n", current -> data);
	}
	return L;
}

int main()
{
	LinkList L;
	Status i;
	int j,k,pos,value;
	char opp;
	ElemType e;

	i=InitList(&L);
	printf("����L��ʼ����ϣ�ListLength(L)=%d\n",ListLength(L));

	printf("\n1.��������ͷ�巨�� \n2.��������β�巨�� \n3.�������� \n4.�������");
	printf("\n5.ɾ������ \n6.��ȡ������� \n7.����ĳ�����Ƿ��������� \n8.�ÿ�����");
	printf("\n9.����ת����");
	printf("\n0.�˳� \n��ѡ����Ĳ�����\n");
	while(opp != '0'){
		scanf("%c",&opp);
		switch(opp){
			case '1':
				CreateListHead(&L,10);
				printf("���崴��L��Ԫ��(ͷ�巨)��\n");
				ListTraverse(L);
				printf("\n");
				break;

			case '2':
				CreateListTail(&L,10);
				printf("���崴��L��Ԫ��(β�巨)��\n");
				ListTraverse(L);
				printf("\n");
				break;

			case '3':
				ListTraverse(L);
				printf("\n");
				break;

			case '4':
				printf("Ҫ�ڵڼ���λ�ò���Ԫ�أ�");
				scanf("%d",&pos);
				printf("�����Ԫ��ֵ�Ƕ��٣�");
				scanf("%d",&value);
				ListInsert(&L,pos,value);
				ListTraverse(L);
				printf("\n");
				break;

			case '5':
				printf("Ҫɾ���ڼ���Ԫ�أ�");
				scanf("%d",&pos);
				ListDelete(&L,pos,&e);
				printf("ɾ����%d��Ԫ�سɹ�����������Ϊ��\n", pos);
				ListTraverse(L);
				printf("\n");
				break;

			case '6':
				printf("����Ҫ��ȡ�ڼ���Ԫ�أ�");
				scanf("%d",&pos);
				GetElem(L,pos,&e);
				printf("��%d��Ԫ�ص�ֵΪ��%d\n", pos, e);
				printf("\n");
				break;

			case '7':
				printf("��������Ҫ���ҵ�����");
				scanf("%d",&pos);
				k=LocateElem(L,pos);
				if(k)
					printf("��%d��Ԫ�ص�ֵΪ%d\n",k,pos);
				else
					printf("û��ֵΪ%d��Ԫ��\n",pos);
				printf("\n");
				break;

			case '8':
				i=ClearList(&L);
				printf("\n���L��ListLength(L)=%d\n",ListLength(L));
				ListTraverse(L);
				printf("\n");
				break;

			case '9':
				ListReverse2(L);
				//ListReverse(L);
				printf("\n��תL��\n");
				ListTraverse(L);
				printf("\n");
				break;

			case '0':
				exit(0);
		}
	}

}

