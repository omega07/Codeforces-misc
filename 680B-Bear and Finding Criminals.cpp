#include <bits/stdc++.h>
#include <string.h>
#define int long long
#define itn int
#define mod 1000000007
#define pb push_back
#define sortall(x) sort(x.begin(),x.end());
#define fast ios_base :: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
/*
int a[1000007];
vector <int> v;
bool sortinrev(const pair<int,int> &a,  const pair<int,int> &b)
{
       return (a.first > b.first);
}
void seive()
{
    for(int i=0;i<=1000000;i++)
    a[i] = 1;

    a[0]=a[1]=0;
    for(int i=2;i<=1000;i++)
    {
        if(a[i] == 1)
        {
            v.pb(i);
            for(int j=2*i;j<=1000000;j+=i)
            a[j] = 0;
        }
    }

    for(int i=1001;i<=1000000;i++)
    {
        if(a[i] == 1)
        v.pb(i);
    }
}
/*
int palindrome (int n)
{
    int x;
    string s = to_string(n);
    if(!(s.length()%2))
    x = s.length()/2 - 1;
    else
    x = s.length()/2;

    for(int i=0;i<=x;i++)
    {
        if(s[i] != s[s.length()-1-i])
        return 0;
    }
    return 1;
}
*/
/*
int nCr(int n,int r)
{


}

int fpow(int a,int n)
{
    if(n == 1)
    return a;

    if(n%2)
    return (a%mod * fpow(a,n-1)%mod)%mod;
    return (fpow(a,n/2)%mod * fpow(a,n/2)%mod)%mod;
}
*/
string shorter(string s,string t)
{
    if(t.length()<s.length())
        return t;
    return s;
}
int32_t main() {

	fast;
    string s;
    cin>>s;
    int n;
    cin>>n;
    int a[26];
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<s.length();i++)
    {
        //cout<<a[((int)(s[i] - 'a'))]<<" ";
        sum += (a[((int)(s[i] - 'a'))]*(i+1));
    }
    //cout<<sum<<" ";
    sort(a,a+26);
    int sum1 = 0;
    for(int i=s.length()+1;i<(s.length()+n+1);i++)
        sum1 += i;

    //cout<<sum1<<" ";
    cout<<sum+(a[25]*sum1);
}
