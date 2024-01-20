#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};

struct node * un(struct node *a,struct node *b)
{
    set<int> st;
    while(a!=NULL)
    {
        st.insert(a->val);
        a=a->next;
    }
    while(b!=NULL)
    {
        st.insert(b->val);
        b=b->next;
    }
    set<int>::iterator it=st.begin();
    struct node *x,*y,*z;
    x=new node;
    x->val=*it;x->next=NULL;it++;
    y=x;
    for(;it!=st.end();it++)
    {
        z=new node;
        z->val=*it;z->next=NULL;
        y->next=z;
        y=z;
    }
    return x;
}

struct node * inte(struct node *a,struct node *b)
{
    vector<int> v,res;
    while(a!=NULL)
    {
        v.push_back(a->val);
        a=a->next;
    }
    while(b!=NULL)
    {
        vector<int>::iterator it=find(v.begin(),v.end(),b->val);
        if(it!=v.end())
        res.push_back(b->val);
        b=b->next;
    }
    struct node *x,*y,*z;
    x=new node;
    x->val=res[0];x->next=NULL;
    y=x;
    for(int i=1;i<res.size();i++)
    {
        z=new node;
        z->val=res[i];z->next=NULL;
        y->next=z;
        y=z;
    }
    return x;
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
   
   struct node *uni=un(a,a1);
   struct node *inter=inte(a,a1);
   cout<<"\n the union of two lists are:"<<endl;
   while(uni!=NULL)
   {
       cout<<uni->val<<" ";
       uni=uni->next;
   }
   cout<<"\n the intersection of two lists are:"<<endl;
   while(inter!=NULL)
   {
       cout<<inter->val<<" ";
       inter=inter->next;
   }
   return 0;
}
