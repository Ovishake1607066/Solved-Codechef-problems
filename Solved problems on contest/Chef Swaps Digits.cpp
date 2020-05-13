#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
#define l 1000000
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c=0,d=0;
        cin>>a>>b;
        d=a+b;
        vector<ll>v1,v2;
        while(a)
        {
            c=a%10;
            v1.push_back(c);
            a/=10;
        }
        while(b)
        {
            c=b%10;
            v2.push_back(c);
            b/=10;
        }
        if(v1.size()==1 && v2.size()==1)
        {
            //cout<<d<<endl;
            ;
        }
        else if(v1.size()==1)
        {
            c=v1[0]*10+v2[0]+v2[1];
            d=max(c,d);
        }
        else if(v2.size()==1)
        {
            c=v2[0]*10+v1[0]+v1[1];
            d=max(c,d);
        }
        else
        {
            c=v1[1]*10+v2[1]+v1[0]*10+v2[0];
            d=max(c,d);
            c=v2[1]*10+v1[1]+v2[0]*10+v1[0];
            d=max(c,d);

        }
        cout<<d<<endl;
    }
}
