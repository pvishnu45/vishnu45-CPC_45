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
    struct node *a1,*b,*c;int n=10,N=1,M=1;
    //cout<<"\n enter the number of elements for list:";
    //cin>>n;
    
    a1=new node;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            //cout<<"\n enter the element "<<i+1<<" for list:";
            a1->val=i+1;a1->next=NULL;
            b=a1;
        }
        else
        {
            c=new node;
            //cout<<"\n enter the element "<<i+1<<" for list:";
            c->val=i+1;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
   struct node *x=a1,*y=a1->next;int t1=M-1,t2=N;
   while(y!=NULL)
   {
       if(t1!=0)
       {
           t1--;
           x=x->next;
           y=y->next;
       }
       else
       {
           while(t2!=0 && y!=NULL)
           {
               struct node *z=y->next;
               x->next=z;
               y->next=NULL;
               y=z;
               t2--;
           }
           x=y;
           if(y!=NULL)
           y=y->next;
           t1=M-1;
           t2=N;
       }
   }
   cout<<"\n the resultant list is:"<<endl;
   while(a1!=NULL)
   {
       cout<<a1->val<<"\t";
       a1=a1->next;
   }
    return 0;
}
