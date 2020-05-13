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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[100000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    vector<ll>v;
    ll s=2;
    v.push_back(2);
    for(ll i=5; i<10000000; i+=3)
    {
        s=s+i;
        v.push_back(s);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b,c=0,d=0;
        if(n==0 || n==1)
        {
            cout<<0<<endl;
            continue;
        }
        while(1)
        {
            for(ll i=0; ; i++)
            {
                if(v[i]>n)
                {
                    c=c+1;
                    n=n-(v[i-1]);
                    break;
                }
            }
            if(n<=1)
                break;
        }
        cout<<c<<endl;
    }

}

