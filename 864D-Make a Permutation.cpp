    #include <bits/stdc++.h>
    #include <string.h>
    #define int long long
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
        int n;
        cin>>n;
        vector< pair<int,int> >v;
        v.reserve(n);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
        map<int,int>mp,mp1;
        for(itn i=0;i<n;i++)
        {
            mp[v[i].first]++;
            mp1[v[i].second]++;
        }

        sortall(v);

        int cnt = 1;
        map<pair<int,int>,int>mq;
        for(int i=0;i<n;i++)
        {
            mq[make_pair(v[i].first,v[i].second)]++;
        }
        map<int,int> :: iterator itr;
        int sum = 0,a;
        for(itr = mp.begin();itr != mp.end();itr++)
        {
            a = itr->second;
            sum += ((a*(a-1))/2);
            //cout<<a<<" ";
        }


        for(itr = mp1.begin();itr != mp1.end();itr++)
        {
            a = itr->second;
            sum += ((a*(a-1))/2);

        }

        map<pair<int,int>,int> :: iterator itrx;
        for(itrx = mq.begin();itrx != mq.end();itrx++)
        {
            a = itrx->second;
            sum -= ((a*(a-1))/2);
            //sum += 1;
        }

        cout<<sum;
    }
