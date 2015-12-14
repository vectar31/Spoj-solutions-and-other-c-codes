#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n];
    long long int  m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m<2)
           {
               a[i]="NO";
               continue;
           }
        if(m==2)
            {a[i]="YES";continue;}
        if(m%2==0)
            {a[i]="NO";continue;}
        for(long long int j=3;(j*j)<=m;j+=2)
        {
            if(m%j==0)
            {
                a[i]="NO";continue;
            }
        }
        a[i]="YES";
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;


    return 0;
}
