#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *next,*bottom;
};

int main()
{
    struct node *a,*x;
    int n;
    cout<<"\n enter the number of elements:";
    cin>>n;
    a=new node;
    for(int i=0;i<n;i++)
    {
        int m;
        cout<<"\n enter the number of elements for "<<i+1<<"th sublist:";
        cin>>m;
        if(i==0)
        {
            cout<<"\n enter the first element for "<<i+1<<"th sublist:";
            cin>>a->val;
            a->next=NULL;a->bottom=NULL;
            struct node *b=a;
            for(int j=1;j<m;j++)
            {
                struct node *c=new node;
                cout<<"\n enter the "<<j+1<<"th element for "<<i+1<<"th sublist:";
                cin>>c->val;c->next=NULL;c->bottom=NULL;
                b->bottom=c;
                b=c;
            }
            x=a;
        }
        else
        {
            struct node *c=new node;
            cout<<"\n enter the first element for "<<i+1<<"th sublist:";
            cin>>c->val;
            c->next=NULL;c->bottom=NULL;
            struct node *b=c;
            for(int j=1;j<m;j++)
            {
                struct node *c1=new node;
                cout<<"\n enter the "<<j+1<<"th element for "<<i+1<<"th sublist:";
                cin>>c1->val;c1->next=NULL;c1->bottom=NULL;
                b->bottom=c1;
                b=c1;
            }
            x->next=c;
            x=c;
        }
    }
    struct node *s=a,*t;vector<int> v;
    while(s!=NULL)
    {
        t=s;
        while(t!=NULL)
        {
            v.push_back(t->val);
            t=t->bottom;
        }
        s=s->next;
        cout<<endl;
    }
    sort(v.begin(),v.end());
    struct node *res=new node,*b;
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        {
            res->val=v[i];
            res->next=NULL;res->bottom=NULL;
            b=res;
        }
        else
        {
            struct node *c=new node;
            c->val=v[i];c->next=NULL;c->bottom=NULL;
            b->next=c;
            b=c;
        }
    }
    cout<<"\n the result is:"<<endl;
    while(res!=NULL)
    {
        cout<<res->val<<"\t";
        res=res->next;
    }
    return 0;
}
