#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    cin>>a>>b;
    t=a-b;
    int x=t%10;
    if(x==9)
        cout<<t-1<<endl;
    else
        cout<<t+1<<endl;

}


