#include<bits/stdc++.h>
#include<string>
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
        vector<ll>v;
        ll a[n+10],b=0,c=0,d=0,e=0;
        loop
        {
            cin>>a[i];
        }
        sort(a,a+n);
        string s="";
        string ss;
        ostringstream st;
        for(ll i=0; i<n; i++)
        {
            //cout<<a[i]<<endl;
            if(n==1)
            {
                ostringstream st;
                st<<a[i];
                ss=st.str();
                s+=ss;
                break;
            }
            if(i==n-1)
            {
                if(b==0)
                {
                    ostringstream st;
                    st<<a[i];
                    ss=st.str();
                    s+=ss;
                }
                else
                {
                    v.push_back(a[i]);
                    if(v.size()>2)
                    {
                        ostringstream st;
                        st<<v[0];
                        ss=st.str();
                        s+=ss;
                        s+="...";
                        ostringstream st2;
                        st2<<v[v.size()-1];
                        ss=st2.str();
                        s+=ss;

                        v.clear();
                        b=0;
                    }
                    else
                    {
                        ostringstream st;
                        st<<v[0];
                        ss=st.str();
                        s+=ss;
                        s+=",";
                        ostringstream st2;
                        st2<<v[v.size()-1];
                        ss=st2.str();
                        s+=ss;

                        v.clear();
                        b=0;
                    }
                }
                continue;
            }
            if(b==0)
            {
                if(a[i+1]-a[i]<=1)
                {
                    v.push_back(a[i]);
                    b=1;
                }
                else
                {
                    ostringstream st;
                    st<<a[i];
                    ss=st.str();
                    s+=ss;
                    s+=",";
                }
            }
            else
            {
                if(a[i+1]-a[i]<=1)
                {
                    v.push_back(a[i]);
                }
                else
                {
                    v.push_back(a[i]);
                    if(v.size()>2)
                    {
                        ostringstream st;
                        st<<v[0];
                        ss=st.str();
                        //cout<<v[0]<<endl;
                        s+=ss;
                        s+="...";
                        ostringstream st2;
                        st2<<v[v.size()-1];
                        //cout<<v[v.size()-1]<<endl;
                        ss=st2.str();
                        s+=ss;
                        s+=",";
                        v.clear();
                        b=0;
                    }
                    else
                    {
                        ostringstream st;
                        st<<v[0];
                        ss=st.str();
                        s+=ss;
                        s+=",";
                        ostringstream st2;
                        st2<<v[v.size()-1];
                        ss=st2.str();
                        s+=ss;
                        s+=",";
                        v.clear();
                        b=0;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}

