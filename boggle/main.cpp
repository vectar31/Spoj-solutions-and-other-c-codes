#include <bits/stdc++.h>
/*
2
one two three
two three four	1
3
good dual strange stranger would
dual would duality dregs gnaw
dual gnaw draw would student	17
2
grid grades dread bread thread threads
grid grids grade brood broods thread threads	9
*/
using namespace std;
int score[51]={0,1,1,1,1,2,3,5,11};
int main()
{
    score[0]=0;
    score [1]=1;score [2]=1;score [3]=1;score [4]=1;
    score[5]=2;
    score[6]=3;
    score[7]=5;
    for(int i=8;i<51;i++)score[i]=11;
    set <string> s1;
    set <string> s2;
    set <string>::iterator it1;
    set <string>::iterator it2;
    int n;
    cin>>n;
    string input[n+1];
    for(int i=0;i<=n;i++)
        getline(cin,input[i]);
    for(int i=1;i<=n;i++)
    {
        string s=input[i];
        istringstream is(s);
        string str;
        while(is>>str)
        {
            if(s1.find(str)!=s1.end())
                s2.insert(str);
            else
                s1.insert(str);
        }
    }
    //for(it2=s2.begin();it2!=s2.end();it2++)
    //    cout<<*it2<<endl;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int temp=0;
        string s=input[i];
        istringstream is(s);
        string str;
        while(is>>str)
            if(!(s2.find(str)!=s2.end()))
                temp+=score[str.length()];
        if(temp>ans)
            ans=temp;
    }
    cout<<ans<<endl;
    return 0;
}
