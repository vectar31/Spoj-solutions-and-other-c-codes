#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(binary_search(a,a+n,x))
            cout<<"I Like You"<<endl;
        else
        {
            bool f=0;
            for(int i=0;i<n-1;i++)
            {
                if(binary_search(a+i+1,a+n,x-a[i]))
                    {
                        f=1;
                        break;
                    }
            }
            if(f)
                cout<<"I Like You"<<endl;
            else
                cout<<"I Hate You"<<endl;
        }
    }
    return 0;
}
