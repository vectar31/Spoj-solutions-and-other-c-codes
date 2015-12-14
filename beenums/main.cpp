#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n!=-1)
    {
        long long int i=1;
        while(i<=n)
        {
            if((3*i*(i-1)+1)==n)
            {
                cout<<"Y"<<endl;
                break;
            }
            if((3*i*(i-1)+1)>=n)
            {
                cout<<"N"<<endl;
                break;
            }
            i++;
        }
        cin>>n;
    }
    return 0;
}
