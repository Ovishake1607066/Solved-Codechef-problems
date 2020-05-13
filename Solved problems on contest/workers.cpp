#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[3]={1000000,1000000,1000000},b,c,d,e,f;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(a1[i]<a2[b-1])
            a2[b-1]=a1[i];
    }
    if(a2[2]<=a2[1]+a2[0])
        cout<<a2[2]<<endl;
    else
        cout<<a2[1]+a2[0]<<endl;
}
