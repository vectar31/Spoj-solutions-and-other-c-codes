#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;int j=1;int m=0;
    for(int i=1; ;i++)
    {
        int k=j;int c=0;
        while(i*k<=n)
        {
            c++;k++;m++;
        }
        j++;
        if(c==0)
        {
            cout<<m;
            break;
        }

    }
    return 0;
}
