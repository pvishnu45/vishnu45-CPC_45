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
    struct node *a,*b,*c;
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
    
    struct node *x,*y,*t=a;
    if(n%2!=0)
    {
         x=a;y=x->next;int count=0;
        while(y!=NULL)
        {
            if((count+1)%2==0)
            {
                struct node *z=x->next;
                z->next=NULL;
                x->next=y;
                x=y;y=y->next;
                count=0;
            }
            else
            y=y->next,count+=1;
        }
    }
    else
    {
         x=a;y=x->next;int count=0;
        while(x->next->next!=NULL)
        {
            if((count+1)%2==0)
            {
                struct node *z=x->next;
                z->next=NULL;
                x->next=y;
                x=y;y=y->next;
                count=0;
            }
            else
            y=y->next,count+=1;
        }
        x->next=NULL;
    }
    while(t!=NULL)
    {
        cout<<t->val<<"\t";
        t=t->next;
    }
   return 0;
}
