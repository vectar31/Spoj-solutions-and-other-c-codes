#include <iostream>
#include<algorithm>
#define in long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=-1)
    {
        in a[n];in z=0;
        for(int i=0;i<n;i++)
            {cin>>a[i];z=z+a[i];}
            if(z%n==0){
        in b=z/n;
        in sum=0;
        for(int i=0;i<n;i++)
            {
                if(a[i]<b)
                    sum+=(b-a[i]);
            }
            cout<<sum<<endl;}


    else
        cout<<-1<<endl;
        cin>>n;
        }

    return 0;
}
