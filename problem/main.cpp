#include <iostream>
using namespace std;
int a[10] = {1, 0, 0, 0, 0, 0, 1, 0, 2, 1};
int main()
{
	int t,i,j;
	char num[128];
	cin>>t;
	while(t--)
    {
		cin>>num;
		for(i=j= 0;num[i];i++)
		j += a[num[i]-'0'];
		cout<<j<<endl;
	}
	return 0;
}

