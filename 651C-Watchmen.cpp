    #include <bits/stdc++.h>
    #include <string.h>
    #define int unsigned long long
    #define itn int
    #define inf 1e9
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

    int nCr(int n,int r)
    {
        if(r>n)
            return 0;
        int k = r;
        if((n-r)<r)
            k = (n-r);
        int g = k;
        int ans = 1;
        for(int i=n;i>=n-k+1;i--)
        {
            ans *= i;

            if(ans%g == 0)
            {
                ans /= g;
                g--;
            }
        }
        while(g>=1)
        {
            ans /= g;
            g--;
        }

        return ans;

    }
/*

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
        int n,m,t;
        cin>>n>>m>>t;
        int sum = 0;
        for(int i=4;i<=t-1;i++)
        {
            sum += (nCr(n,i)*nCr(m,t-i));
        }

        cout<<sum;
    }
