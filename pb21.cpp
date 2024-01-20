#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    struct node *next;
};

int convert(struct node *x,int p)
{
    int res=0;
    while(x!=NULL)
    {
        res+=x->val*pow(10,p--);
        x=x->next;
    }
    return res;
}
struct node * rever(int x)
{
    stack<int> st;
    while(x!=0)
    {
        st.push(x%10);
        x/=10;
    }
    struct node *a,*b,*c;
    a=new node;a->val=st.top();st.pop();
    a->next=NULL;b=a;
    while(!st.empty())
    {
        c=new node;
        c->val=st.top();st.pop();
        c->next=NULL;
        b->next=c;
        b=c;
    }
    return a;
}
int main()
{
    struct node *a1,*b,*c;int n,m;
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
    struct node *a2,*a3;
    a2=new node;
    cout<<"\n enter the number of elements for list 2:";
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list 2:";
            cin>>a2->val;a2->next=NULL;
            b=a2;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element "<<i+1<<" for list 2:";
            cin>>c->val;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
    int num1=convert(a1,n-1);
    int num2=convert(a2,m-1);
    struct node *res=rever(num1+num2);
    cout<<"\n the resultant number is:"<<endl;
    while(res!=NULL)
    {
        cout<<res->val<<"\t";
        res=res->next;
    }
    return 0;
}
