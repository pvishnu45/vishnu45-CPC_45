#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    struct node *next;
};

struct node* combine(struct node *x,int x1)
{
    struct node *t=new node;
    t->val=x1;t->next=NULL;
    if(x==NULL)
    return t;
    else
    {
        struct node *y=x;
        while(y->next!=NULL)
        {
            y=y->next;
        }
        y->next=t;
        return x;
    }
}
int main()
{
    struct node *a,*b,*c;int n;
    cout<<"\n enter the number of elements for list:";
    cin>>n;
    
    a=new node;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list:";
            cin>>a->val;a->next=NULL;
            b=a;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element "<<i+1<<" for list:";
            cin>>c->val;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
   struct node *x=NULL,*y=NULL;int i=0;
   while(a!=NULL)
   {
       if(i==0)
       {
           x=combine(x,a->val);
           i=1;
       }
       else
       {
           y=combine(y,a->val);
           i=0;
       }
       a=a->next;
   }
   while(x!=NULL)
   {
       cout<<x->val<<"\t";
       x=x->next;
   }
   cout<<endl;
   while(y!=NULL)
   {
       cout<<y->val<<"\t";
       y=y->next;
   }
    return 0;
}
