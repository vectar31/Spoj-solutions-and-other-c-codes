#include <iostream>

using namespace std;
int binarysearch(int a[],int n,int s)
{
    int low=0,high=n-1,mid=(n-1)/2;
    while(low<=high&&a[mid]!=s)
    {
        if(a[mid]<s)
            low=mid+1;
        else
            high=mid-1;
        mid=(high+low)/2;
    }
    if(low>high)
    return -1;
    else
        return mid;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s;
    cin>>s;
    cout<<binarysearch(a,n,s);

    return 0;
}
