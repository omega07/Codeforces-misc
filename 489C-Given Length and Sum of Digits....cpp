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
	int m,s;
	cin>>m>>s;

	string maxi = "";
	string mini = "1";
	int maxx = 9*m;
	int minn = 1;
	if(s == 0 && m == 1)
		cout<<0<<" "<<0;
	else
	if(s>maxx || s<1)
		cout<<-1<<" "<<-1;
	else{

	for(int i=0;i<m;i++)
		maxi += '9';
	for(int i=1;i<m;i++)
		mini += '0';

	int x = floor((maxx-s)/9);
	int y = floor((s-minn)/9);
	int i,j;
	for(i=0;i<y;i++)
	{
		mini[m-i-1] = '9';
	}
	if((m-i-1) == 0)
	{
		minn = 9*(m-1);
		if((s-minn)%9 != 0)
			mini[m-i-1] = (char)((s-minn)%9 + '0');
		else
			mini[m-i-1] = (char)(((s-minn)%9+9) + '0');
	}
	else
		mini[m-i-1] = (char)((s-minn)%9 + '0');


	for(i=0;i<x;i++)
	{
		maxi[m-i-1] = '0';
	}
	maxi[m-i-1] = (char)((9-(maxx-s)%9) + '0');



	cout<<mini<<" "<<maxi;

	}

	return 0;
}
