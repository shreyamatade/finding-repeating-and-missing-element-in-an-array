#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[abs(a[i])-1]>0)
        {
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
        else
        {
            cout<<"repeating element:"<<abs(a[i])<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            cout<<"missing element:"<<(i+1);
    }
}
