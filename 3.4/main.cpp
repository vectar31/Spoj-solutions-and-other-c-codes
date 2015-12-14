#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int i,j,n,f,s=-1;
	double x, p=1,sum=0;
	fin>>x>>n;
	for(i=2;i<=n;i+=2)
	{
		for(f=1,j=1;j<=i;j++)
		{
			p=p*x;
			f=f*j;
        }
		sum+=s*p/f;
		s=s*-1;
	}
	fout<<sum<<endl;
	return 0;
}
