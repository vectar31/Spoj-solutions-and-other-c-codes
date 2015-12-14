#include <iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int a[100001];
    string name;
	int n, i, t;
	long long c;
	cin>>t;
	while(t-->0)
    {
        cin>>n;

        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a, a+n);
            c= 0;
            for(i=0; i<n; i++)cout<<abs(a[i]-(i+1))<<endl;
            //c+= abs(a[i]-(i+1));
            cout << c << endl;

    }
    return 0;
}


