#include <iostream>

using namespace std;
void searching(string str,string pattern)
{
    int i=0,patternindex=0;
    int l=str.length();
    while(i<l)
    {
        if(str[i]==pattern[patternindex])
            patternindex++;
        else
        {
            i-=patternindex;
            patternindex=0;
        }
        if(patternindex==pattern.length())
        {
            cout<<"Found at "<<i-patternindex+1<<endl;
            patternindex=0;
        }
        i++;
    }
}
int main()
{
    searching("aaaaaaaa","a");
    return 0;
}
