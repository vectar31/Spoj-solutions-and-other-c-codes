#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int M, N;
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
/*void KMP(){
    int k,i;
    for( k = 0, i = 0; i < N; i++ ){
        while( k && txt[i] != pat[k] )
            k = lps[k-1];
        if(txt[i] == pat[k]) k++;
        if(k == M){
            cout<<i-M+1<<endl;
            k = lps[M-1];
        }
    }
}*/
int main(){
        while(cin>>pat)
        {
            string t=pat;
            pat=string(pat.rbegin(),pat.rend())+"#"+pat;
            M=pat.length();
            builtFA();
            int l=t.length()-lps[M-1];
            string str=t.substr(0,l);
            str=string(str.rbegin(),str.rend());
            t+=str;
            cout<<t<<endl;

        }
        return 0;
}
