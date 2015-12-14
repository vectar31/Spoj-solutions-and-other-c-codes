#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        string t=s[i];
        int l=t.length()-1;
        for(int j=l;j>=0;j--)
    {

        if(t[j]=='9')
        {
            t[j]='0';
        }
        else
        {
            char ch=t[j];
            ch=ch+1;
            t[j]=ch;
            break;
        }

    }
        while(pall(t)!=true)
        {


        for(int j=l;j>=0;j--)
    {

        if(t[j]=='9')
        {
            t[j]='0';
        }
        else
        {
            char ch=t[j];
            ch=ch+1;
            t[j]=ch;
            break;
        }

    }

        }
        cout<<t<<endl;
    }

    return 0;
}
