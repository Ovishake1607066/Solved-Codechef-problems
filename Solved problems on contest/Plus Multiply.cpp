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
        ll n;
        cin>>n;
        ll a,b=0,c=0,cc=0,d,e;
        loop
        {
            cin>>a;
            if(a==0)
                c++;
            if(a==2)
                cc++;
        }
        c--;
        if(c>0)
            c=((c*c)+c)/2;
        else
            c=0;
        cc--;
        if(cc>0)
            cc=((cc*cc)+cc)/2;
        else
            cc=0;
        cout<<c+cc<<endl;
    }
}

