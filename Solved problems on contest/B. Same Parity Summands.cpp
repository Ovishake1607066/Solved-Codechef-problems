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
        ll n,k;
        cin>>n>>k;
        ll a,b=0,c=0,d=0,e=0;
        if(k*2<=n)
        {
            a=(k-1)*2;
            if((n-a)%2==0)
            {
                cout<<"YES"<<endl;
                for(ll i=0;i<k-1;i++)
                    cout<<2<<" ";
                cout<<n-a<<endl;
                continue;
            }
        }
        if(k<=n)
        {
            a=k-1;
            if((n-a)%2!=0)
            {
                cout<<"YES"<<endl;
                for(ll i=0;i<k-1;i++)
                    cout<<1<<" ";
                cout<<n-a<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
}

