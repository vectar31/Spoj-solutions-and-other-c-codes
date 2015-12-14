#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int M, N,ans=0;
string pat,txt;
int lps[1000000+10];
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
void KMP(){
    //bool f=false;
    int k,i;
    for( k = 0, i = 0; i < N; i++ ){
        while( k && txt[i] != pat[k] )
            k = lps[k-1];
        if(txt[i] == pat[k]) k++;
        if(k == M){
            ans+=1;
            k = lps[M-1];
        }
    }
}
int main(){
    int n,q;
    cin>>n>>q;
    string s[n+1];
    for(int i=1;i<=n;i++)
        cin>>s[i];
    for(int i=1;i<=q;i++)
    {
        string p;
        cin>>p;
        pat=p;
        M=pat.length();
        builtFA();
        for(int i=1;i<=n;i++)
        {
            cout<<s[i]<<endl;
            txt=s[i];
            N=txt.length();
            KMP();
        }
        cout<<ans<<endl;
        ans=0;
    }

	return 0;
}
