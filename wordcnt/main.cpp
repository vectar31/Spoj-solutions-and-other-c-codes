#include <bits/stdc++.h>

using namespace std;
string s[1001];
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<=t;j++)
    {
        //map <int , int> m;
        string str;
        getline(cin,str);
        if(j!=0){
        istringstream is(str);
        int i=0,ans=1;
        is>>s[i++];
        int prevl=s[i-1].length();
        int temp=1;
        while(is>>s[i++])
        {
            int l=s[i-1].length();
            if(l==prevl)
                temp++;
            else
            {
                if(temp>ans)
                    ans=temp;
                prevl=l;
                temp=1;
            }

        }
        if(temp>ans)
                    ans=temp;
        cout<<ans<<endl;}
    }
    return 0;
}
