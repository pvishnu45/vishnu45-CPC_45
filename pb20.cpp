#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    struct node *next;
};

bool number(struct node *a1,struct node *a2,struct node *a3,int x)
{
    struct node *a = a1;
    while (a != NULL) 
    { 
        struct node *b = a2; 
        struct node *c = a3; 
        while (b != NULL && c != NULL) 
        { 
            int sum = a->val + b->val + c->val; 
            if (sum == x) 
            { 
            cout << "Triplet Found: " << a->val << " " << b->val << " " << c->val; 
            return true; 
            } 
            else if (sum < x) 
                b = b->next; 
            else 
                c = c->next; 
        } 
        a = a->next; 
    } 
 
    cout << "No such triplet"; 
    return false; 
}
int main()
{
    struct node *a1,*b,*c;int n,m,o;
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
    a3=new node;
    cout<<"\n enter the number of elements for list 3:";
    cin>>o;
    
    a3=new node;
    for(int i=0;i<o;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element "<<i+1<<" for list 3:";
            cin>>a3->val;a3->next=NULL;
            b=a3;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element "<<i+1<<" for list 3:";
            cin>>c->val;c->next=NULL;
            b->next=c;
            b=c;
        }
    }
    number(a1,a2,a3,25);
    return 0;
}
