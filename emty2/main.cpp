#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        string s;
        cin>>s;
        stack <char> st;
        while(!st.empty())
            st.pop();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                st.push('1');
            else
            {
                if(st.size()>=2)
                {
                    char c=st.top();st.pop();char d=st.top();
                    if(c=='0'&&d=='1')
                        st.pop();
                    else
                    {
                        st.push(c);
                        st.push('0');
                    }
                }
                else
                    st.push('0');
            }
        }
        if(st.size()==0)
            cout<<"Case "<<j<<":yes"<<endl;
        else
            cout<<"Case "<<j<<":no"<<endl;
    }
    return 0;
}
