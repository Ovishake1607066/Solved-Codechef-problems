#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='c'&& s[i+1]=='h' && i+1<s.size())||(s[i]=='h'&& s[i+1]=='e' && i+1<s.size()) ||(s[i]=='e'&& s[i+1]=='f' && i+1<s.size()) ||(s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='e'&& i+1<s.size()&&i+2<s.size()) ||(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='f'&& i+1<s.size()&&i+2<s.size()) ||(s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='e'&& s[i+3]=='f'&&i+3<s.size()&& i+1<s.size()&&i+2<s.size()))
            {
                c=c+1;
                break;
            }
        }
    }
    cout<<c<<endl;
}
