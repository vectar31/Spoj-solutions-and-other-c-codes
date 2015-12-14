#include <iostream>

using namespace std;
int hcf(int a,int b)
{
    int m=a%b;
    while(m!=0)
    {
        a=b;
        b=m;
        m=a%b;
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s1,s2,a;
        cin>>s1>>s2;
        if(s1>s2)
            a=s1-s2;
        else
            a=s2-s1;
        if(s1<0)
            s1=s1*-1;
        if(s2<0)
            s2=s2*-1;
        a=a/hcf(s1,s2);
        cout<<a<<endl;
    }
    return 0;
}
