#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double matrix [n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    double ratio ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                if(j>i){
                if(matrix[i][i]==0){
                ratio = matrix[j][i]/matrix[i][i];

                for(int k = 0; k < n; k++){

                    matrix[j][k] -= ratio * matrix[i][k];}

                }

        }
    }
    }
    for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
