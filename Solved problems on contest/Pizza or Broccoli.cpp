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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n,c=0,a=0,b=0,d=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(ll i=0;i<n;i++)
        {
            a=0,b=0,d=0;
            string s2=s;
            for(ll j=i,l=0;l<k && j<n;j++,l++)
            {
                s2[j]='1';
            }
            for(ll j=0;j<n;j++)
            {
                if(s2[j]=='1')
                    a++;
                else
                {
                    b=max(b,a);
                    a=0;
                }
                //cout<<a<<endl;
            }
            b=max(b,a);
           // cout<<s2<<"   "<<i<<endl;
            c=max(c,b);
        }
        cout<<c<<endl;
    }
}

