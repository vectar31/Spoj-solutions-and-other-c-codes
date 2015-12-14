#include <bits/stdc++.h>
#define ll long long

using namespace std;
//v.erase(std::remove(v.begin(), v.end(), int_to_remove), v.end());
int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    ll ans=0;
    for(int c=1;c<=n-2;c++)
    {
        int maxpro=0,t;
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i-1]*v[i+1]>maxpro)
            {
                maxpro=v[i-1]*v[i+1];
                t=v[i];
            }
        }
        //cout<<c<<" "<<t<<endl;
        v.erase(std::remove(v.begin(), v.end(), t), v.end());
        ans+=maxpro;
    }
    cout<<ans<<endl;
    return 0;
}
