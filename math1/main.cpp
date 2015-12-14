#include <iostream>

using namespace std;
int divisors(int x) {
    int limit = x;
    int numberOfDivisors = 0;

    for (int i(1); i < limit; ++i) {
        if (x % i == 0) {
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }

    return numberOfDivisors;
}
int main()
{
    int ar[]={6,10,14,15,21,22,26,33,34,35,38,39,46,51,55,57,58,62,65,69,74,77,82,85,86,87,91,93,94,95,106,111,115,118,119,122,123,129,133,134,141,142,143,145,146,155,158,159,161,166,177,178,183,185,187};
    int c=0;
    for(int i=1;i<=1000000;i++)
    {
        int a=divisors(i);
        for(int j=0;j<53;j++)
        {
            if(a==ar[j])
            {
                c++;
                if(c%9==0)
                cout<<i<<endl;
                else
                    break;
            }
        }


    }
    return 0;
}
