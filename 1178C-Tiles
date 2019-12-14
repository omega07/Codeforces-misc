#include <bits/stdc++.h>
#include <string.h>
#define int long long
#define itn int
#define mod 998244353
#define pb push_back
#define inf 1e9
#define sortall(x) sort(x.begin(),x.end());
#define fast ios_base :: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
/*int a[1000007];
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
}*/
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

int32_t main() {

	fast;
    int n;
    cin>>n;
    int a[n],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=0;
    }
    b[n] = 0;
    for(int i=0;i<n;i++)
        b[a[i]]++;
    vector<int>v;
    set<int>q;
    for(int i=0;i<n;i++)
        q.insert(a[i]);
    int i = 1;
    set<int> :: iterator itr=q.begin();
    while(i <= n && itr != q.end())
    {
        if(*itr != i)
            v.pb(i);
        if(*itr == i)
            itr++;
        i++;
    }
    vector< pair<int,int> >v1;
    for(int i=0;i<=n;i++)
    {
        if(b[i]>1)
            v1.pb({i,b[i]});
    }
    sortall(v1);
    vector<int>s,s1;
    for(int i=0;i<v1.size();i++)
    {
        s.pb(v1[i].first);
        s1.pb(v1[i].second);
    }
    sortall(v);
    int d[s.size()];
    memset(d,0,sizeof(d));
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(binary_search(s.begin(),s.end(),a[i]))
        {
            if(s1[lower_bound(s.begin(),s.end(),a[i])-s.begin()] <= 1)
            {
                s.erase(lower_bound(s.begin(),s.end(),a[i]));
                s1.erase(lower_bound(s.begin(),s.end(),a[i]));
            }

            if(v[0]>a[i] && d[lower_bound(s.begin(),s.end(),a[i])-s.begin()] != 1)
            {
                d[lower_bound(s.begin(),s.end(),a[i])-s.begin()] = 1;
                cout<<"ayush";
                goto y;
            }
            s1[lower_bound(s.begin(),s.end(),a[i])-s.begin()]-=1;
            a[i] = v[0];
            cout<<v[0]<<" ";
            v.erase(v.begin());
            cnt++;
            y:
                ;

        }
    }
    x:
        cout<<cnt<<"\n";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
}
