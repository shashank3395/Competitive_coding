//doubly header linked list
#include<stdio.h>
#include<stdlib.h>


struct list
{
	int info;
	struct list *next,*prev;
};


struct list *create(int size,struct list *t)
{
	if(size==0)
	return NULL;
	struct list *temp;
	struct list *p;
	int item,i;
	for(i=0;i<size;i++)
	{
		printf("\nelement to be inserted:");
		scanf("%d",&item);
		struct list *tmp=(struct list*)malloc(sizeof(struct list));
		tmp->info=item;
		tmp->next=NULL;
		tmp->prev=NULL;
		if(i==0)
		{
			t->next=tmp;
			tmp->prev=t;
			p=t->next;

		}
		else
		{       p->next=tmp;
			tmp->prev=p;

			p=p->next;
		}
	}
	return t->next;
}

struct list *insert_s(struct list *temp,int item)
{	struct list *tmp=(struct list*)malloc(sizeof(struct list));
	tmp->info=item;
	tmp->next=temp->next;
	tmp->prev=temp;
	temp=tmp;
	return temp;
}


struct list *insert_e(struct list *temp,int item)
{	struct list *tmp=(struct list*)malloc(sizeof(struct list));
	tmp->info=item;
	tmp->next=NULL;
	tmp->prev=NULL;
	struct list *p=temp;
	if(p->next==NULL)
	{	p->next=tmp;
		tmp->prev=p;
		return temp;
	}
	while(p->next!=NULL)
	p=p->next;
	p->next=tmp;
	tmp->prev=p;
	return temp;
}
struct list *insert_be(struct list *temp,int item,int x)
{	struct list *tmp=(struct list*)malloc(sizeof(struct list));
	tmp->info=item;
	tmp->next=NULL;
	tmp->prev=NULL;
	struct list *p=temp;
	if(p->next==NULL)
	{	printf("\nno element found!!!");
		return temp;
	}
	if(p->next->info==x)
	{
		temp=insert_s(temp,item);
		return temp;
	}

	while(p->next->info!=x)
	p=p->next;
	tmp->next=p->next;
	p->next->prev=tmp;
	tmp->prev=p;
	p->next=tmp;
	return temp;
}
struct list *insert_af(struct list *temp,int item,int x)
{	struct list *tmp=(struct list*)malloc(sizeof(struct list));
	tmp->info=item;
	tmp->next=NULL;
	tmp->prev=NULL;

	if(temp->next==NULL)
	{	printf("\nno element found!!!");
		return temp;
	}
	struct list *p=temp->next;

	while(p->info!=x)
	p=p->next;
	tmp->next=p->next;

	p->next=tmp;
	tmp->prev=p;
	if(temp->next==NULL);
	else
	tmp->next->prev=tmp;
	return temp;
}
struct list *delete_b(struct list *temp)
{
	if(temp->next==NULL)
	{	printf("\neUNDERFLOW!!!!");
		return temp;
	}
	struct list *p=temp->next;
	int item=p->info;
	temp->next=temp->next->next;
	temp->next->prev=temp;
	printf("\nthe deleted element is:%d",item);
	return temp;
}


struct list *delete_e(struct list *temp)
{
	if(temp->next==NULL)
	{	printf("\neUNDERFLOW!!!!");
		return temp;
	}

	struct list *p=temp;
        while(p->next->next!=NULL)
        p=p->next;
	int item=p->next->info;

	p->next=NULL;
	printf("\nthe deleted element is:%d",item);
	return temp;
}

struct list *delete_x(struct list *temp,int x)
{
	if(temp->next==NULL)
	{	printf("\nUNDERFLOW!!!!");
		return temp;
	}
	struct list *p=temp;
        while(p->next->info!=x)
        p=p->next;
	int item=p->next->info;

	p->next=p->next->next;
	if(p->next==NULL);
	else
	p->next->prev=p;
	printf("\nthe deleted element is:%d",item);
	return temp;
}

void show(struct list *temp)
{
struct list *p=temp;
if(temp->next==NULL)
{	printf("\nNO ELEMENT TO DISPLAY!!!");
	return;
}
printf("\nthe element of list are:\n");

do
{   p=p->next;
	printf("%d\n",p->info);

}while(p->next!=NULL);

}






int main()
{

struct list *temp=(struct list *)malloc(sizeof(struct list));
temp->prev=NULL;
printf("\ncreate a linked list first :");
printf("\nenter the size of linked list:");
int size,choice;
scanf("%d",&size);
temp->next=create(size,temp);
while(1)
{
	printf("\n1:insert at beginning of list:\n2:insert at te end\n3:insert before element x\n4:insert after an element x:\n5:delete element from starting\n6:delete element from end\n7:delete element x:\n8:display list\n\nEnter the choice:");
	scanf("%d",&choice);
	int item,x;
 switch(choice)
{
	case 1:
		printf("\nenter the element to be entered:");
		scanf("%d",&item);
		temp=insert_s(temp,item);
		break;
	case 2: printf("\nenter the element to be entered:");
		scanf("%d",&item);
		temp=insert_e(temp,item);
		break;
	case 3: printf("\nenter the element to be entered:");
		scanf("%d",&item);
		printf("\nenter the value of x:");
		scanf("%d",&x);
		temp=insert_be(temp,item,x);
		break;
	case 4: printf("\nenter the element to be entered after x:");
		scanf("%d",&item);
		printf("\nenter the value of x:");
		scanf("%d",&x);
		temp=insert_af(temp,item,x);
		break;
	case 5: temp=delete_b(temp);
		break;
	case 6: temp=delete_e(temp);
		break;
	case 7: printf("\nenter element x to deleted:");
		scanf("%d",&item);
		temp=delete_x(temp,x);
		break;

	case 8:show(temp);
		break;
}
}
return 0;
}
