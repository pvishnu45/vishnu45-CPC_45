#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *next;
};

int main()
{
   struct node *a,*b,*c;int n,m;
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
    struct node *x=new node;
    cout<<"\n enter the number of elements for list:";
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list:";
            cin>>x->val;x->next=NULL;
            b=x;
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
    
    struct node *k=a,*l=x;
    while(k!=NULL && l!=NULL)
    {
        struct node *k1=k->next,*l1=l->next;
        k->next=l;
        l->next=k1;
        k=k1;l=l1;
    }
    if(k!=NULL)
    a=k;
    
    if(l!=NULL)
    x=l;
    while(a!=NULL)
    {
        cout<<a->val<<"\t";
        a=a->next;
    }
    cout<<endl;
    while(x!=NULL)
    {
        cout<<x->val<<"\t";
        x=x->next;
    }
    return 0;
}
