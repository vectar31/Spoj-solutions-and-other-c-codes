#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int a;
    while(t-->0)
    {
        cin>>a;
        int s=0;
        while(a>0)
        {
            if(a==2)
            {
                s+=2;
                break;
            }
            if(a%2==0)
            a/=2;
            else
            a=(a/2)+1;
            s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
