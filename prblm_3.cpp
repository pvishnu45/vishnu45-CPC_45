#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};

void recur(struct node *a)
{
    if(a->next!=NULL)
    recur(a->next);
    
    cout<<a->val<<"\t";
}

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
    cout<<"\n the reverse of linked list through a recursive function is:"<<endl;
    recur(a);
     return 0;
}
