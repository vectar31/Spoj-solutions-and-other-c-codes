#include <iostream>

using namespace std;
double determ(double a[MAX][MAX],int n) {
  double det=0, p, h, k, i, j, temp[MAX][MAX];
  if(n==1) {
    return a[0][0];
  } else if(n==2) {
    det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return det;
  } else {
    for(p=0;p<n;p++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==p) {
            continue;
          }
          temp[h][k] = a[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }
      det=det+a[0][p]*pow(-1,p)*determ(temp,n-1);
    }
    return det;
  }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        double V[5][5];
        V[0][0]=0;V[0][1]=1;V[0][2]=1;V[0][3]=1;V[0][4]=1;
        V[1][0]=1;V[1][1]=0;V[1][2]=a;V[1][3]=b;V[1][4]=c;
        V[2][0]=1;V[2][1]=a;V[2][2]=0;V[2][3]=d;V[2][4]=e;
        V[3][0]=1;V[3][1]=b;V[3][2]=d;V[3][3]=0;V[3][4]=f;
        V[4][0]=1;V[4][1]=c;V[4][2]=e;V[4][3]=f;V[4][4]=0;
        double v=determ(V[5][5],5);
        cout<<v;

    }
    return 0;
}
