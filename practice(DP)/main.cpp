#include <iostream>

using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int V[n];
    for(int i=0;i<n;i++)
        cin>>V[i];
    int min[s];
    min[0]=0;
    for(int i=1;i<=s;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((V[j]<=i)&&(min[i-V[j]]+1<min[i]))
            min[i]=min[i-V[j]]+1;
        }
    }
    for(int i=0;i<s;i++)
    {
        cout<<min[i]<<endl;
    }
    return 0;
}
