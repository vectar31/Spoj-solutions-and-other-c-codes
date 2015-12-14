#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    long long int t,a,f=0;
    scanf("%d", &t);
    long long int s[t];
	while(t--)
        {
		scanf("%d", &a);int i=1;
		long long int fact=1,sum=0;
		for( i=1; ;i++)
        {
            fact=fact*2;
            sum=sum+fact;
            if(sum>=a)
                break;
        }
        cout<<i<<endl;
        }



    return 0;
}
