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
    vector<int> v; struct node *x=a;
    while(x!=NULL)
    {
        if(x->val%2==0)
        v.push_back(x->val);
        x=x->next;
    }
    x=a;
    while(x!=NULL)
    {
        if(x->val%2!=0)
        v.push_back(x->val);
        x=x->next;
    }
    
    x=a;
    for(int i=0;i<v.size();i++)
    {
        x->val=v[i];
        x=x->next;
    }
    cout<<"\n after reordering,the list is:"<<endl;
    while(a!=NULL)
    {
        cout<<a->val<<"\t";
        a=a->next;
    }
    return 0;
}
