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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,x2,y1,y2,p=-2,q=0;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(x==x1 && a)
        {
            if(x!=x2 && b)
                ;
            else
                q=1;
        }
        if(x==x2 && b)
        {
            if(x!=x1 && a)
                ;
            else
                q=1;
        }
        if(y==y1 && c)
        {
            if(y!=y2 && d)
                ;
            else
                q=1;
        }
        if(y==y2 && d)
        {
            if(y!=y1 && c)
                ;
            else
                q=1;
        }
        //cout<<q<<endl;
        if(a>=b)
        {
            if(a-b<=abs(x1-x))
                p=1;
            else
                q=1;

        }
        else if(a<b)
        {
            if(b-a<=abs(x2-x))
                p=1;
            else
                q=1;
        }
        if(c>=d)
        {
            if(c-d<=abs(y1-y))
                p=1;
            else
                q=1;
        }
        else if(c<d)
        {
            if(d-c<=abs(y2-y))
                p=1;
            else
                q=1;
        }
        if(q==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

