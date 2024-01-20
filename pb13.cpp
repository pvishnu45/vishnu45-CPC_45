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
    struct node *a,*b,*c; int k=5;
    a=new node;
    int n;
    cout<<"\n enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element"<<i+1<<":";
            cin>>a->val;
            a->next=NULL;
            b=a;
            cout<<endl;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element"<<i+1<<":";
            cin>>c->val;
            c->next=NULL;
            b->next=c;
            b=c;
            cout<<endl;
        }
    }
    
    if(k>=n)
    k=k%n;
    
    struct node *x=a,*y=a->next;
    while(k>1)
    {
        k-=1;
        //cout<<x->val<<" "<<y->val<<" "<<k<<endl;
        x=x->next;
        y=y->next;
        
        //cout<<"\n hello0";
    }
    struct node *t=a;
    if(k>0)
    {
        t=y;
        x->next=NULL;
        while(y->next!=NULL)
        {
            y=y->next;
        }
        y->next=a;
    }
    a=t;
    cout<<"\n after rotation"<<endl;
    while(t!=NULL)
    {
        cout<<t->val<<" ";
        t=t->next;
    }
    
   return 0;
}
