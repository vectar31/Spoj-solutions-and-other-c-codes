#include <iostream>
#include <bits/stdc++.h>
std::string cc(std::string s) {
    std::string sss=s;
    std::sort(sss.begin(),sss.end());
    while(std::next_permutation(sss.begin(),sss.end()))
    {
        int n=sss.length();
        std::string s1=sss.substr(0,n/2);
        int n1=s1.length(),ans=0;
        for(int i=0;i<n1;i++)
            ans+=(s1[i]-'a'+1);
        std::string s2=sss.substr(n/2,n/2);
        int n2=s2.length(),ans2=0;
        for(int i=0;i<n2;i++)
            ans2+=(s2[i]-'a'+1);
        if(ans>=ans2)
            return sss;

    }
        return s;
}

int main() {
	// your code goes here
	std::cout<<cc("abcd");
	return 0;
}
