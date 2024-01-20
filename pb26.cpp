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
    struct node *a1,*b,*c;int n;
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
    vector<int> odd,even;
    struct node *x=a1;
    while(x!=NULL)
    {
        if(x->val%2==0)
        even.push_back(x->val);
        else
        odd.push_back(x->val);
        
        x=x->next;
    }x=a1;int ch=1,i=0,j=0;
    for(;i<odd.size() && j<even.size();)
    {
        if(ch%2==0)
        {
            x->val=even[j];
            x=x->next;j++;
            ch+=1;
        }
        else
        {
            x->val=odd[i];
            x=x->next;i++;
            ch+=1;
        }
    }
    
    if(j<even.size())
    x->val=even[j],x=x->next;
    if(i<odd.size())
    x->val=odd[i],x=x->next;
    
    while(a1!=NULL)
    {
        cout<<a1->val<<"\t";
        a1=a1->next;
    }
    return 0;
}
