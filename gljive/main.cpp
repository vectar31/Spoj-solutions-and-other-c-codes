#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[10];int s=0,c=0,ans=0;
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
    {
        s+=a[i];
        if(s>100)
        {
                int k=s-a[i];
                //cout<<k;
                if((100-k)<(s-100))
                    ans=k;
                else if((100-k)==(s-100))
                    ans=s;
                else
                    ans=s;
                c=1;
                break;
        }
        else if(s==100)
        {
            c=1;
            ans=s;
            break;
        }
       // cout<<s<<" "<<ans<<" "<<c<<endl;
    }
    if(c==1)
        cout<<ans<<endl;
    else
        cout<<s<<endl;
    return 0;
}
