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
        ll a=2,b=1,c=0,d=0;
        if(n<=3)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=2; i<=n; i+=2)
        {
            cout<<i<<" ";
            a=i;
        }
        if(n%2==0)
        {
            cout<<a-3<<" ";
            if(a+1<=n)
                cout<<a+1<<" ";
            cout<<a-1<<" ";
            for(ll i=a-5;i>=1;i-=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<a-3<<" ";
            cout<<a+1<<" ";
            cout<<a-1<<" ";
            for(ll i=a-5;i>=1;i-=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}

