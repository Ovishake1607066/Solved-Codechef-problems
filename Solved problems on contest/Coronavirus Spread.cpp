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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b=llmin,c=llmax,d=0,e=0;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            d=0;
            for(ll j=i-1;j>=0;j--)
            {
                if(a[j+1]-a[j]<=2)
                    d++;
                else
                    break;
            }
            for(ll j=i+1;j<n;j++)
            {
                if(a[j]-a[j-1]<=2)
                    d++;
                else
                    break;
            }
            b=max(d+1,b);
            c=min(d+1,c);
        }
        cout<<c<<" "<<b<<endl;
    }
}

