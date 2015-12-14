#include <iostream>
#include <fstream>
using namespace std;
bool prime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool pal(int n)
{
    int z=n,v=0;
    while(z!=0)
    {
        int d=z%10;
        v=v*10+d;
        z/=10;
    }
    if(v==n)
        return true;
    else
        return false;
}
int main()
{

    int j=2;
    int a[113];
    int i=0;
    while(i<113)
    {
        if(prime(j)==true&&pal(j)==true)
        {
            a[i]=j;
            j++;
            i=i+1;
        }
        else
            j++;
    }
    ofstream outFile;
    outFile.open("pp.txt");
    for(i=0;i<113;i++)
        outFile<<a[i]<<",";
    outFile.close();
    return 0;
}
