#include <iostream>
using namespace std;
int f[]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        int i,j;
        j=0;
        while(f[j]<a)
            j++;
        i=j;
        while(f[i]<b)
            i++;
        //if(f[i]==b)
          //  ans+=1;
        cout<<i-j<<endl;
        //cout<<ans<<endl;
    }
    return 0;
}
