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
    ll n,m,k;
    cin>>n>>m>>k;
    ll a,b,c=0,d=0,f=0,e=0;
    for(ll i=0; i<k; i++)
    {
        cin>>a>>b;
    }
    for(ll i=0; i<k; i++)
    {
        cin>>a>>b;
    }
    ll x=(n*m)+n+m-1-2;
    cout<<max(1LL,x)<<endl;
    for(ll i=0; i<m-1; i++)
        cout<<"L";
    for(ll i=0; i<n-1; i++)
        cout<<"U";
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m-1; j++)
        {
            if(i%2==0)
                cout<<"R";
            else
                cout<<"L";
        }
        if(i!=n-1)
            cout<<"D";
    }
    if(x==0)
        cout<<"U";
}

