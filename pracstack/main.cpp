#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> c;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='{'||ch=='('||ch=='[')
            c.push(ch);
        if(ch=='}')
        {
            if(c.top()=='}')
                c.pop();

        }
    }
    return 0;
}
