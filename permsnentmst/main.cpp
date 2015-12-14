#include <iostream>
#include <cstdio>
#define N 100
#define ll unsigned long long int
using namespace std;
int det=0;
ll per[21]={0};
int re=0;
ll permanent(int b[N][N],int m)   //FUNCTION TO CALCULATE
{
    ll sum=0;
    re+=1;
    if(m==2)
    {                                        //BASE CONDITION
	sum = b[0][0]*b[1][1] + b[0][1]*b[1][0];
	return sum;
    }
    if(m==3)
    {
        sum = (b[0][0] * (b[1][1]*b[2][2] + b[2][1]*b[1][2])) + (b[0][1] * (b[1][0]*b[2][2] + b[2][0]*b[1][2])) + (b[0][2] * (b[1][0]*b[2][1] + b[2][0]*b[1][1]));
        return sum;
    }
    bool f=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            if(b[i][j]==0)
            {
                f=0;
                //break;
            }
    if(f)
        return per[m];

 int i,j,s,c[N][N];
 for(int p=0;p<m;p++)
 {
  int h = 0,k = 0;
  for(i=1;i<m;i++)
  {
	for( j=0;j<m;j++)
	{
	 if(j==p)
	  continue;
	 c[h][k] = b[i][j];
	 k++;
	 if(k == m-1)
	  {
		 h++;
		 k = 0;
	  }

	}
  }
    if(b[0][p]!=0)
  sum = sum + b[0][p]*permanent(c,m-1);
 }
 return sum;
}
int main()
{
     per[0]=0;per[1]=1;per[2]=2;per[3]=6;
    for(int i=4;i<21;i++)
    {
        per[i]=per[i-1]*i;
        //cout<<per[i]<<endl;
    }
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d", &a[i][j]);
    ll ans=permanent(a,n);
    cout<<ans<<endl;
    cout<<"re calls = "<<re<<endl;
    }
    return 0;
}
