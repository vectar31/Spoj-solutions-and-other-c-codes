#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
        long long int N,K,W,i;
        vector <string> a;

            cin>>N>>K;
            while(N!=0||K!=0)
        {
                W=0;

                for(i=2;i<=N;i++)
                {
                        W=(W+K)%i;
                }
                stringstream ss;
                stringstream ss1;
                stringstream ss2;
                ss<<N;
                string str;
                str=ss.str();
                ss1<<K;
                str=str+" "+ss1.str();
                ss2<<(W+1);
                str=str+" "+ss2.str();
                a.push_back(str);

                cin>>N>>K;

        }
        for(unsigned int j=0;j<a.size();j++)
            cout<<a[j]<<endl;
        return 0;
}
