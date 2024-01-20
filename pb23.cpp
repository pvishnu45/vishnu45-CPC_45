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
    struct node *x=a1,*y=a1->next;
    while(y!=NULL)
    {
        int t=x->val;
        x->val=y->val;
        y->val=t;
        x=x->next;y=y->next;
        if(x && y)
        x=x->next,y=y->next;
        else
        break;
    }
    cout<<"\n ther resultant list is:"<<endl;
    while(a1!=NULL)
    {
        cout<<a1->val<<"\t";
        a1=a1->next;
    }
    return 0;
}
