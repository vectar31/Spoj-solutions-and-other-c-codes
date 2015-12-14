#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    stack <char> st;
    long long ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]=='+'||s[i]=='*'||s[i]=='/')
            st.push(s[i]);
        else if(s[i]==')')
        {
            int num=0;
            char c=st.top();st.pop();
            while(c!='(')
            {
                if(c>='0'&&c<='9')
                    num=c-'0';
                if(st.top()=='(')
                {
                    ans=num;
                    st.pop();
                }
            }

        }
        else
            st.push(s[i]);
    }
    return 0;
}
