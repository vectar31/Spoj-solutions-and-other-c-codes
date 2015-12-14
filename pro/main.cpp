#include <iostream>

using namespace std;

int main()
{
    int a,i=1,sum;
    cout<<"Enter the numbers to be added"<<endl;
    while(i<=5)
    {
        cin>>a;
        sum=sum+a;
        i++;
    }
    cout<<"the sum is "<<(sum+2)<<endl;
    return 0;
}

