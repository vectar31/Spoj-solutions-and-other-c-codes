#include <bits/stdc++.h>
using namespace std;
std::string RSA_SKG(int n)
{
  //using namespace std;
    string ans="";
    if(n%3==0)
    {
        ans.insert(0,n,'5');
        return ans;
    }
    if(n>3 && ((n%3)%5)==0)
    {
        ans.insert(0,n-(n%3),'5');
        string t="";
        t.insert(0,n%3,'3');
        ans+=t;
        return ans;
    }
    if(n>5 && (n%5)%3==0)
    {
        ans.insert(0,(n%5),'5');
        string t="";
        t.insert(0,n-(n%5),'3');
        ans+=t;
        return ans;
    }
    if(n%5==0)
    {
        ans.insert(0,n,'3');
        return ans;
    }
    if(n>5 && (n-5)%3==0)
    {
        ans.insert(0,n-5,'5');
        string t="";
        t.insert(0,5,'3');
        ans+=t;
        return ans;
    }
    return "-1";
}
int main()
{
    int n=0;
    while(n++<50)
        cout<<n<<" "<<RSA_SKG(n)<<endl;
    return 0;
}
