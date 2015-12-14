#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
string pat;
int lps[1000000+10];
void builtFA(){

    int M=pat.length();
    for(int i=0;i<=M;i++)
        lps[i]=0;
    int i = 1;
    int len = 0;
    lps[0]  = len = 0;
        while( i < M){
        if( pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else if(len == 0){
            lps[i] = 0;
            i++;
        }
        else{
            len = lps[len-1];
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>pat;
        builtFA();
        int sum=0;
        for(int i=0;i<pat.length();i++)
            sum+=lps[i];
        int n=pat.length();
        int temp=n*(n+1)/2;
        int ans= temp-sum;
        cout<<ans<<endl;
    }
    return 0;
}
