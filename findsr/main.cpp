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
    string s;
    cin>>s;
    while(s!="*")
    {
        pat=s;
        M=s.length();
        builtFA();
        int c=M-lps[M-1];
        if(M%c==0)
            cout<<M/c<<endl;
        else
            cout<<1<<endl;
        cin>>s;
    }
    return 0;
}
