/*
Life would be so simple if brute worked everytime...

*/
#include <bits/stdc++.h>
#define int long long
#define itn int
#define mod 1000000007
#define pb push_back
#define sortall(x) sort(x.begin(),x.end());
#define fast ios_base :: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
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

int32_t main() {

	fast;
	int n;
	cin>>n;

	int a[n];
	map< int,vector<int> >mp;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]].pb(i+1);
		sum += a[i];
	}
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i] = sum - a[i];
	}

	set<int>v;
	for(int i=0;i<n;i++)
	{
		if(mp.find(b[i]-a[i]) != mp.end())
		{
			for(int j=0;j<mp[b[i]-a[i]].size();j++)
			{
				if(mp[b[i]-a[i]][j]-1 != i)
					v.insert(mp[b[i]-a[i]][j]);
			}
		}
	}
	cout<<v.size()<<"\n";

	for(set<int>::iterator x=v.begin();x!=v.end();x++)
	{
		cout<<*x<<" ";
	}
	return 0;
}
