#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,k,i,ans=0;
        cin>>n>>k;
        ll a[n+10];
        map<ll,ll> mp;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto z:mp)
        {
            ll val2=z.S/2;
            cout << val2 << " ";
            //cout <<endl;
            ans+=(val2*2);
            mp[z.F]-=(val2*2);
            cout << mp[z.F] << " ";
        }
        ll sum=0;
        for(auto z:mp)
            sum+=z.S;
        ans+=(sum/2);
        ans+=(sum & 1);
        cout<<ans<<"\n";
    }
    return 0;
}
