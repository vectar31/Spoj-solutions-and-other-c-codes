#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;cin>>n;int j=2*n-1;
    if(n<=0||n>26)
        cout<<"INVALID INPUT"<<endl;
    else
    {
        string str[j];string s;
        for(int i=0;i<n;i++)
            s=s+(char)(i+65);
        for(int i=n-2;i>=0;i--)
            s=s+(char)(i+65);
        str[0]=str[j-1]=s;
        for(int i=0;i<n-1;i++)
        {
            s[n-i-1]=' ';s[n+i-1]=' ';
            str[i+1]=s;str[j-i-2]=s;
        }
        for(int i=0;i<j;i++)
            cout<<str[i]<<endl;
    }
}
