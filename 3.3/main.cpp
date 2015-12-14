#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int i,j,n,f,s=-1;
	double x, p=1,sum=0;
	fin>>x>>n;
	for(i=1;i<=n;i+=2)
	{
		for(f=1,j=1;j<=i;j++)
		{
			p=p*x;
			f=f*j;
		}
		s=-1*s;
		sum+=s*p/f;
	}
	fout<<sum<<endl;
}
