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
    int ans = 1;
    int k = 2;

        if(n-r < r)
        k = n-r;
        else
        k = r;
        for(int i=n;i>=n-k;i--)
        {
            ans *= i;

            if(ans%k == 0 && k>1)
            {
                ans /= k;
                k--;
            }
        }

        while(k>1)
        {
            ans/=k;
            k--;
        }



    return ans;
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
    itn n,a;
    cin>>n>>a;

    int b[n+1];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    int cnt = 0;
    int i;
    for(i=0;i<=min(a-1,n-a-1);i++)
    {
        if(b[a-i] == 1 && b[a+i] == 1)
        {
            if((a-i) == (a+i))
                cnt += 1;
            else
                cnt += 2;
        }
    }
    int j = i;
    while((a-i)>=1)
    {
        if(b[a-i] == 1)
            cnt += 1;
        i++;
    }
    i = j;
    while((a+i)<=n)
    {
        if(b[a+i] == 1)
            cnt += 1;
        i++;
    }

    cout<<cnt;

}
