#include <iostream>
#include <map>
#include <string>
using namespace std;
int col[102]={0};
int key(string s)
{
    int ans=0;
        for(int i=0;i<s.length();i++)
            ans+=(s[i]*(i+1));
    return (ans*19)%101;
}
int collisionkey (int k)
{
    int j;
    {
            col[k]+=1;
            if(col[k]>19)
                return -1;
            j= (k + col[k]*col[k] + 23 * col[k])%101 ;
    }
return j;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<102;i++)
            col[i]=0;
        int n;
        cin>>n;
        map  < string , int > hashtable;
        map  < int , string > hashtable2;
        while(n--)
        {
            string temp;
            cin>>temp;
            string c=temp.substr(0,3);
            string s=temp.substr(temp.find(":")+1);
            if(c=="ADD")
            {
                if(!(hashtable.find(s)!=hashtable.end()))
                {
                    int k=key(s);
                    if((hashtable2.find(k)!=hashtable2.end()))
                    {
                        k=collisionkey(k);
                        if(k!=-1)
                        {   hashtable[s]=k;
                            hashtable2[k]=s;
                        }
                    }
                    else
                    {
                        hashtable[s]=k;
                        hashtable2[k]=s;
                    }
                }
            }
            else if(c=="DEL")
            {
                if((hashtable.find(s)!=hashtable.end()))
                    {
                        hashtable.erase(s);
                        hashtable2.erase(key(s));
                    }
            }
        }
        cout<<hashtable2.size()<<endl;
        map <int , string >::iterator  it;
        for (it=hashtable2.begin(); it!=hashtable2.end(); ++it)
            cout<<it->first<<":"<<it->second<<endl;

    }
    return 0;
}
