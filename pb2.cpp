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
    struct node *a,*b,*c;int k;
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
    
    struct node *x,*y,*z,*t=a;
    x=a;
    cout<<"\n before reversing:"<<endl;
    while(t!=NULL)
    {
        cout<<t->val<<"\t";
        t=t->next;
    }
    y=x->next;
    x->next=NULL;
    z=y->next;
    y->next=x;
    x=y;y=z;
    while(y!=NULL)
    {
        z=y->next;
        y->next=x;
        x=y;
        y=z;
    }
    
    cout<<"\n the reversed list is:"<<endl;
     while(x!=NULL)
     {
         cout<<x->val<<"\t";
         x=x->next;
     }
     return 0;
}
