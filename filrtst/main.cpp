#include <iostream>

using namespace std;
string pat;
int lps[1000000+10];
int M;
void builtFA(){
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
    long long n;
    string s;
    cin>>n>>s;

    while(n!=-1)
    {
        pat=s;
        M=s.length();
        builtFA();
        long long ans=((n-M)/(M-lps[M-1]))+1;
        if(ans>0)
            cout<<ans<<endl;
        else
            cout<<0<<endl;
        cin>>n>>s;
    }
    return 0;
}
