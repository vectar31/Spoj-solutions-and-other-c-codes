#include <iostream>
#define MAX 1000001
using namespace std;
int coinchangemin(int denom[],int n, int amount)
{
	int counts[ amount + 1 ];
	int coins = 0;
	counts[0] = 0;

	int i, j;
	for( i = 1; i <= amount; i++ )
	{
		coins = MAX;

		for( j = 0; j < n ; j++ )
		{
			if( denom[j] <= i )//coin value should not exceed the amount itself
			{
				coins = min( coins, counts[i-denom[j]] );
			}
		}

		if( coins < MAX )
			counts[i] = coins + 1;
		else
			counts[i] = MAX;
	}
	if(counts[amount]==MAX)
        return -1;
	return counts[amount];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;cin>>p>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(coinchangemin(a,n,p)==-1)
            cout<<"No solution"<<endl;
        else
        cout<<coinchangemin(a,n,p)<<endl;

    }
    return 0;
}
