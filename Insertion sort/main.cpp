#include <iostream>

using namespace std;

int main()
{
    int n,val,hol;cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
        cin>>A[i];
    for(int i=1;i<n;i++)
    {
        val=A[i];
        hol=i;
        while(hol>0&&A[hol-1]>val)
        {
            A[hol]=A[hol-1];
            hol=hol-1;
        }
        A[hol]=val;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}
