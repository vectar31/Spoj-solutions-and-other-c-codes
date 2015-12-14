#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    char text[1500];
    cin.getline(text, 1500);
    while(text[0]!='*')
    {
        if(text[0]!='\0'){
        bool f=1;
        string s=text;
        s=" "+s;
        istringstream is(s);
        char c;
        is>>c;
        c=tolower(c);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' )
            {
                while(s[i]==' '&&i<s.length())
                    i++;
                if((tolower(s[i]))!=c&&((int)s[i]!=0))
                {
                    //cout<<i<<" "<<(int)s[i]<<endl;
                    f=0;
                    break;
                }
            }

        }
        //cout<<s<<endl;
        //cout<<c<<endl;
        if(f)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;}
        cin.getline(text, 1500);
    }
    return 0;
}
