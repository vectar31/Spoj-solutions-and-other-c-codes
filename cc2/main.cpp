#include <bits/stdc++.h>
#define N 1000010

using namespace std;
int a[N][4]={0};
int main()
{
    a[20][0]=1;a[20][3]=1;
    a[40][0]=2;a[40][3]=2;
    a[50][1]=1;a[50][3]=1;
    a[60][0]=3;a[60][3]=3;
    a[70][0]=1;a[70][1]=1;a[70][3]=2;
    a[80][0]=4;a[80][3]=4;
    a[90][0]=2;a[90][1]=1;a[90][3]=3;
    a[100][2]=1;a[100][3]=1;
    a[110][0]=3;a[110][3]=4;a[110][1]=1;
    for(int i=120;i<N;i+=10)
        {
            int x=i-20,y=i-50,z=i-100;
            int a1=a[x][3]+1;
            a[i][0]=a[x][0]+1;a[i][1]=a[x][1];a[i][2]=a[x][2];
            //if(i==130)
            //cout<<a[i][2]<<" "<<a[i][1]<<" "<<a[i][0]<< " = "<<a[i][3]<<endl;
            if(a[y][3]+1<a1)
            {
                a1=a[y][3]+1;
                a[i][0]=a[y][0];a[i][1]=a[y][1]+1;a[i][2]=a[y][2];

            }
            if(a[z][3]+1<a1 && z!=30)
            {
                a1=a[z][3]+1;
                a[i][0]=a[z][0];a[i][1]=a[z][1];a[i][2]=a[z][2]+1;
            //if(i==130)
            //cout<<a[i][2]<<" "<<a[i][1]<<" "<<a[i][0]<< " = "<<a[i][3]<<endl;

            }
            a[i][3]=a1;

        }
    int n;
    while(cin>>n)
        cout<<a[n][2]<<" "<<a[n][1]<<" "<<a[n][0]<< " = "<<a[n][3]<<endl;
    return 0;
}
