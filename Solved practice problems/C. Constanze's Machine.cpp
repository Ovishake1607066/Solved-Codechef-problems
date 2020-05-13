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
ll m=1000000007;
ll mark[10000000];
#define i64 long long
ll F(i64 N,i64 P)
{
    if(P==0)
        return 1;
    if(P%2==0)
    {
        ll ret=F(N,P/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((N%m)*(F(N,P-1)%m))%m;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    mark[1]=1;
    mark[2]=2;
    string s;
    cin>>s;
    for(ll i=3; i<=100001; i++)
    {
        mark[i]=(mark[i-1]%m+mark[i-2]%m)%m;
    }
    ll a,b=0,c=1;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='w' || s[i]=='m')
        {
            cout<<0<<endl;
            return 0;
        }
        if(s[i]=='n')
        {
            ll x=0;
            while(s[i]=='n' && i<s.size())
            {
                x++;
                i++;
            }
            i--;
            c=(c%m*mark[x]%m)%m;
        }
        else if(s[i]=='u')
        {
            ll x=0;
            while(s[i]=='u' && i<s.size())
            {
                x++;
                i++;
            }
            i--;
            c=(c%m*mark[x]%m)%m;
        }
    }
    cout<<c<<endl;

}

