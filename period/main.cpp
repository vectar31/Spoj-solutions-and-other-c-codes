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
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Test case #"<<i<<endl;
        string s;
        cin>>M;
        cin>>s;
        pat=s;

        //M=s.length();
        builtFA();

        for(int i=1;i<M;i++)
        {
            int c=i+1-lps[i];
            if((i+1)%c==0)
            {
                if((i+1)/c!=1)
                    cout<<i+1<<" "<<(i+1)/c<<endl;
            }
        }
    }
    return 0;
}
