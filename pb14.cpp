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
    struct node *a,*b,*c; int k=2;
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
    if(k<=n)
    {
        struct node *x=a,*y=a;int k1=k;stack<int> st;
        while(y!=NULL)
        {
            if(k1>0)
            {
                st.push(y->val);
                y=y->next;
                k1-=1;
            }
            else
            {
                while(!st.empty())
                {
                    x->val=st.top();
                    st.pop();
                    x=x->next;
                }
                k1=k;
            }
        }
        if(x!=y && k1==0)
        {
            while(!st.empty())
            {
                x->val=st.top();
                x=x->next;
                st.pop();
            }
        }
        cout<<"\n the result is:"<<endl;
        while(a!=NULL)
        {
            cout<<a->val<<" ";
            a=a->next;
        }
    }
   return 0;
}
