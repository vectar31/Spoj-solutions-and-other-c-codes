#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    stack<char> a;
    char c[500];
    cin>>c;
    for(int i=0;c[i];i++)
    {
        if(c[i]=='(')
            a.push(c[i]);
        else if(c[i]=='+'||c[i]=='-'||c[i]=='*'||c[i]=='/'||c[i]=='^')
        {
            /*if(a.empty()||a.top()=='(')
                a.push(c[i]);
            else if(a.top()<c[i]||a.top()=='/'||a.top()=='^')
            {
                if(a.top()=='/'&&c[i]=='^')
                    a.push(c[i]);
                else
                {cout<<a.top();a.pop();
                a.push(c[i]);}
            }
            else*/
                a.push(c[i]);
        }
        else if(c[i]==')')
        {
            while(a.top()!='(')
            {
                cout<<a.top();
                a.pop();
            }
            a.pop();
        }
        else
            cout<<c[i];
    }
    while(!a.empty())
    {
        cout<<a.top();a.pop();
    }
    cout<<endl;
    }
    return 0;
}
