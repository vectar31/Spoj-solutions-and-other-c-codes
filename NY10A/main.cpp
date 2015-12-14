#include <iostream>

using namespace std;
//TTT, TTH, THT, THH, HTT, HTH, HHT and HHH
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int ans[]={0,0,0,0,0,0,0,0};
        for(int i=0;i<38;i++)
        {
            if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
                ans[0]+=1;
            if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
                ans[1]+=1;
            if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
                ans[2]+=1;
            if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
                ans[3]+=1;
            if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
                ans[4]+=1;
            if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
                ans[5]+=1;
            if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
                ans[6]+=1;
            if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
                ans[7]+=1;
        }
        cout<<n;
        for(int i=0;i<8;i++)
            cout<<" "<<ans[0];
        cout<<endl;
    }
    return 0;
}
