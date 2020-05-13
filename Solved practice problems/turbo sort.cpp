#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int a[t],b=0,c,d,e,f;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t-1;i++)
    {
        b=0;
        for(int j=0;j<t-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                b=1;
                int x=a[j+1];
                a[j+1]=a[j];
                a[j]=x;
            }
        }
        if(b==0)
            break;
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }

}



