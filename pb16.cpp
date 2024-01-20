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
            cout<<"\n enter the element "<<i+1<<" for list";
            cin>>a->val;a->next=NULL;
            b=a;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element "<<i+1<<" for list";
            cin>>c->val;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
    vector<int> v={0,1,2},count={0,0,0};
    struct node *x=a;
    while(x!=NULL)
    {
        count[x->val]+=1;
        x=x->next;
    }
    x=a;
    for(int i=0;i<count.size();i++)
    {
        for(int j=0;j<count[i];j++)
        {
            x->val=i;
            x=x->next;
        }
    }
    cout<<"\n after sorting:"<<endl;
    x=a;
    while(x!=NULL)
    {
        cout<<x->val<<"\t";
        x=x->next;
    }
    
    return 0;
}
