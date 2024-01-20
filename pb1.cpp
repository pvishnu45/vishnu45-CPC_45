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
    cout<<"\n enter the value of K:";
    cin>>k;
    k=n-k;
    while(k!=0)
    {
        a=a->next;
        k--;
    }
    cout<<"\n the result is:"<<a->val;
    
    return 0;
}
