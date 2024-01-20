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
    struct node *a1,*b,*c;int n,k=2;
    cout<<"\n enter the number of elements for list:";
    cin>>n;
    
    a1=new node;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list:";
            cin>>a1->val;a1->next=NULL;
            b=a1;
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
    n=n-k;
    struct node *v1=a1,*v2=a1;
    while(k!=1)
    {
        k--;
        v1=v1->next;
    }
    while(n!=0)
    {
        n--;
        v2=v2->next;
    }
    int t=v1->val;
    v1->val=v2->val;
    v2->val=t;
    cout<<"\n the resultant is:"<<endl;
    while(a1!=NULL)
    {
        cout<<a1->val<<"\t";
        a1=a1->next;
    }
    return 0;
}
