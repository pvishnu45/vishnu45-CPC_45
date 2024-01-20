#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *next,*random;
};

int main()
{
    int n;
    cout<<"\n enter the number of elements:";
    cin>>n;
    struct node *a,*b;vector<struct node *> v(n);
    a=new node;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the "<<i+1<<"th element:";
            cin>>a->val;
            a->next=NULL;a->random=NULL;
            b=a;
            v[i]=a;
        }
        else
        {
            struct node *c=new node;
            cout<<"\n enter the "<<i+1<<"th element:";
            cin>>c->val;
            c->next=NULL;c->random=NULL;
            b->next=c;
            v[i]=c;
            b=c;
        }
    }int p;struct node *t=a;
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter the "<<i+1<<"th index:";
        cin>>p;
        t->random=v[p];
    }
    struct node *x=new node;vector<struct node *> v1(n);
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            x->val=t->val;t=t->next;x->random=NULL;
            x->next=NULL;v1[i]=x;
            b=x;
        }
        else
        {
            struct node *c=new node;
            c->next=NULL;c->random=NULL;
            b->next=c;v1[i]=c;
            b=c;
        }
    }t=a;struct node *t1=x;
    for(int i=0;i<n;i++)
    {
        vector<struct node *>::iterator it=find(v.begin(),v.end(),t->random);
        t1->random=v1[it-v.begin()];
        t=t->next;t1=t1->next;
    }t1=x;cout<<"\n the result is:"<<endl;
    while(t1!=NULL)
    {
        cout<<t1->val<<" ";
        struct node *r=x;
        while(r!=NULL)
        {
            if(r==t1->random)
            break;
            
            r=r->next;
        }
        cout<<r->val<<endl;
        t1=t1->next;
    }
    return 0;
}
