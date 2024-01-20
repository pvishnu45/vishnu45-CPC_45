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
    cout<<"\n enter the number of elements for list 1:"<<endl;
    cin>>n;
    
    a=new node;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list 1"<<endl;
            cin>>a->val;a->next=NULL;
            b=a;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element "<<i+1<<" for list 1"<<endl;
            cin>>c->val;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
    struct node *a1,*b1,*c1;
    cout<<"\n enter the elements for list 2:"<<endl;
    cin>>m;
    a1=new node;
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list 2"<<endl;
            cin>>a1->val;a1->next=NULL;
            b1=a1;
        }
        else
        {
            c1=new node;
            cout<<"\n enter the element "<<i+1<<" for list 2"<<endl;
            cin>>c1->val;c1->next=NULL;
            b1->next=c1;
            b1=c1;
        }
    }
    
    struct node *x,*y,*z;
    x=new node;
    if(a->val<=a1->val)
    {
        x->val=a->val;
        a=a->next;
        x->next=NULL;
    }
    else
    {
        x->val=a1->val;
        a1=a1->next;
        x->next=NULL;
    }
    y=x;
    while(a!=NULL && a1!=NULL)
    {
        z=new node;
        if(a->val<=a1->val)
        {
            z->val=a->val;
            a=a->next;
        }
        else
        {
            z->val=a1->val;
            a1=a1->next;
        }
        z->next=NULL;
        y->next=z;
        y=z;
    }
    while(a!=NULL)
    {
        z=new node;
        z->val=a->val;
        z->next=NULL;
        y->next=z;
        y=z; a=a->next;
    }
    while(a1!=NULL)
    {
        z=new node;
        z->val=a1->val;
        z->next=NULL;
        y->next=z;
        y=z; a1=a1->next;
    }
    
    cout<<"\n the merged lis is:"<<endl;
    while(x!=NULL)
    {
        cout<<x->val<<"\t";
        x=x->next;
    }
    return 0;
}
