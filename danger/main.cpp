#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p2[30];
    string s;
    cin>>s;
      p2[0]=1;
    for(int i=1;i<30;i++)
        p2[i]=p2[i-1]*2;
        //cout<<p2[29]<<endl;
    while(s!="00e0")
    {
        int a =( (s[0]-'0')*10 + (s[1]-'0') );
        int b=s[3]-'0';
        for(int i=1;i<=b;i++)
            a*=10;
        //cout<<a<<endl;
        //int c;
        for(int i=0;i<30;i++)
        {
            if(p2[i]>a)
            {
                cout<<1+(2*(a-p2[i-1]))<<endl;
                //c=p2[i-1];
                break;
            }
        }
        //int d=a-c;
        //int ans=1+(2*d);
        //cout<<ans<<endl;
        cin>>s;

    }

}
