#include<stdlib.h>
#include<Stdio.h>
typedef struct  node{
int data;
struct node*next;
}node;
void main()
{ node*head,*p,*q,*r;
 int i,n,ch,flag,x,val;
 printf("Enter the number of nodes\n");
 scanf("%d",&n);
head=(node*)malloc(sizeof(node));
printf("Enter data for first node\n");
scanf("%d",&head->data);
head->next=NULL;
p=head;
for(i=0;i<n-1;i++)
{ p->next=(node*)malloc(sizeof(node));
p=p->next;
printf("enter data for new node\n");
scanf("%d",&p->data);
p->next=NULL;
}
// PRINTING
p=head;
while(p!=NULL)
{ printf("%d\t",p->data);
p=p->next;
}

q=NULL;
p=head;
r=p->next;
while(p->next!=NULL)
{   p->next=q;
    q=p;
    p=r;
    r=p->next;
}
head=q;
printf("\nINVERSION\n");
p=head;
while(p!=NULL)
{ printf("%d\t",p->data);
p=p->next;
}

}
