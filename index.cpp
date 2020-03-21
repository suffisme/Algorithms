#include <iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>

#define ll long long

using namespace std;

void subset(vector<ll>a)
{
    ll s=a.size();
    ll l=pow(2,s);
    for(ll i=0;i<l;i++)
    {
        vector<ll>b;
        for(ll j=0;j<s;j++)
        {
            if(i&(1<<j))
                b.push_back(a[j]);
        }
        for(ll j=0;j<b.size();j++)
            cout<<b[j]<<" ";
        cout<<endl;
    }
}

int main()
{
    vector<ll>a;
    ll n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }

    subset(a);
    return 0;
}
