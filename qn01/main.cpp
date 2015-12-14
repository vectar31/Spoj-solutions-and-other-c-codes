#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxans=0,ansi,ansj;
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        if(temp>maxans)
            {
                maxans=temp;
                ansi=i+1;
                ansj=i+1;
            }
        for(int j=i+1;j<n;j++)
        {
            temp^=a[j];
            if(temp>maxans)
            {
                maxans=temp;
                ansi=i+1;
                ansj=j+1;
            }
        }
    }
    cout<<maxans<<endl;
    cout<<ansi<<" "<<ansj<<endl;
    return 0;
}
