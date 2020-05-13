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
string decToBinary(ll n)
{
    // Size of an integer is assumed to be 32 bits
    string s="";
    for (ll i = 63; i >= 0; i--)
    {
        ll k = n >> i;
        if (k & 1)
            s+="1";
        else
            s+="0";
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll len = num.size();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,l,r;
        cin>>x>>y>>l>>r;
        ll a=0,b=0,c=0,d=0,e=0,f=0,g=0;
        string s1="",s2="",s3="";
        vector<ll>v,v2,v3;
        ll temp=x;
        x=max(x,y);
        y=min(temp,y);
        map<ll,ll>m;
        if(x==0 || y==0 || r==0)
        {
            cout<<0<<endl;
            continue;
        }
        for(ll i=0; i<64; i++)
        {
            s3+="0";
            s2+="1";
            s1+="1";
        }
        s1=decToBinary(x);
        s2=decToBinary(y);
        //cout<<s1<<endl<<s2<<endl;
        for(ll i=0; i<64; i++)
        {
            if(s2[i]=='1')
            {
                v2.push_back(63-i);
            }
        }
        for(ll i=0; i<64; i++)
        {
            if(s1[i]=='1' || s2[i]=='1')
            {
                ll j=63-i;
                a=pow(2,j);
                b=a+d;
                //cout<<i<<"  "<<a<<"    "<<b<<endl;
                if(b>=l && b<=r)
                {
                    s3[i]='1';
                    d=d+a;
                    v.push_back(j);
                    m[i]=1;
                    if(s2[i]=='1')
                        f=1;
                }
                else
                {
                    s3[i]='0';
                }
            }
            else
            {
                s3[i]='0';
            }
        }
        //cout<<d<<"  "<<s3<<endl;
        if(f==0)
        {
            ll q=0;
            ll w=0;
            if(v.size())
            {
                e=63-v[v.size()-1];
            }
            else
            {
                e=-1;
            }
            for(ll i=0; i<v2.size(); i++)
            {
                ll aa=d+pow(2,v2[i]);
                if(aa<=r && aa>=l)
                {
                    s3[63-v2[i]]='1';
                    w=63-v2[i];
                    m[w]=1;
                    break;
                }
            }
            if(q==1)
                ;
            else
            {
                if(v.size())
                {
                    s3[63-v[v.size()-1]]='0';
                    m[63-v[v.size()-1]]=0;
                    d=d-pow(2,v[v.size()-1]);
                    e=63-v[v.size()-1];
                }
                else
                {
                    e=-1;
                }
                //cout<<d<<"  "<<s3<<endl;
                for(ll i=0; i<v2.size(); i++)
                {
                    ll aa=d+pow(2,v2[i]);
                    if(aa<=r && aa>=l)
                    {
                        s3[63-v2[i]]='1';
                        w=63-v2[i];
                        m[w]=1;
                        d=d+pow(2,v2[i]);
                        break;
                    }
                }
            }
            for(ll i=0; i<64; i++)
            {
                if(m[i]==1)
                    continue;
                if(s1[i]=='1' || s2[i]=='1')
                {
                    ll j=63-i;
                    a=pow(2,j);
                    b=a+d;
                    //cout<<i<<"  "<<a<<"    "<<b<<endl;
                    if(b>=l && b<=r)
                    {
                        s3[i]='1';
                        d=d+a;
                        m[i]=1;
                    }
                    else
                    {
                        s3[i]='0';
                    }
                }
                else
                {
                    s3[i]='0';
                }
            }
        }
        //cout<<d<<"  "<<s3<<endl;
        c=binaryToDecimal(s3);
        ll aa=0,bb=0;
        for(ll i=0; i<64; i++)
        {
            if(s1[i]=='1' && s3[i]=='1')
                aa=1;
            if(s2[i]=='1' && s3[i]=='1')
                bb=1;
        }
        if(aa==1 && bb==1)
            cout<<c<<endl;
        else
            cout<<0<<endl;
    }
    //cout<<s3<<endl;
    //



}

