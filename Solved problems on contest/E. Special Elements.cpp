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
        ll a[n+10],b=0,c=0,d=0,s=0;
        ll m1[n+10]={0};
        loop
        {
            cin>>a[i];
            m1[a[i]]++;
            d=max(d,a[i]);
        }
        for(ll i=0;i<n-1;i++)
        {
            s=a[i];
            for(ll j=i+1;j<n;j++)
            {
                s+=a[j];
                if( s<=d && m1[s])
                {
                    c+=m1[s];
                    m1[s]=0;
                    //cout<<s<<endl;
                }
            }
        }
        cout<<c<<endl;

    }
}

