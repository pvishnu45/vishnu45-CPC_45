#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};


void print(struct node *x,struct node *y)
{
    while(x->next!=NULL)
    {
        cout<<x->val<<"->";
        x=x->next;
    }
    cout<<x->val<<endl;
    while(y->next!=NULL)
    {
        cout<<y->val<<"->";
        y=y->next;
    }
    if(y!=NULL)
    cout<<y->val;
}

vector<int> inter(struct node *x,struct node *y)
{
    vector<int> v;vector<int> res;
    while(x!=NULL)
    {
        v.push_back(x->val);
        x=x->next;
    }
    while(y!=NULL)
    {
        vector<int>::iterator it=find(v.begin(),v.end(),y->val);
        if(it!=v.end())
        res.push_back(y->val);
        
        y=y->next;
    }
    return res;
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
   struct node *a1,*b1,*c1;
   int m;
   cout<<"\n enter the number of elements for list 2"<<endl;
   cin>>m;
   for(int i=0;i<m;i++)
   {
       if(i==0)
       {
           a1=new node;
           cout<<"\n enter any element of"<<"from list2"<<endl;
           cin>>a1->val;a1->next=NULL;
           b1=a1;
       }
       else
       {
           c1=new node;
           cout<<"\n enter any element of"<<"from list2"<<endl;
           cin>>c1->val;c1->next=NULL;
           b1->next=c1;
           b1=c1;
       }
   }
   
   vector<int> v=inter(a,a1);
   cout<<"\n the intersection of two lists are:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
   return 0;
}
