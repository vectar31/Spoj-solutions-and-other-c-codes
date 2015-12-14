#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
    ll r=0;
    char ch;
    int n,t;
    int c=0;
    scanf("%d%c",&n,&ch);
    while(n!=0)
    {
        r=0;
        t=n;
        while(t>0)
        {
            scanf("%c",&ch);
            c=0;
            while(ch!='\n')
            {
                if(ch=='S')
                    c+=0;
                else if(ch=='.')
                    c+=1;
                else if(ch=='-')
                    c+=5;
                scanf("%c",&ch);
            }
            if(t==1)
                r+=c;
            else if(t==2)
                r+=c*20;
            else if(t==3)
                r+=c*360;
            else if(t==4)
                r+=c*7200;
            else if(t==5)
                r+=c*144000;
            else if(t==6)
                r+=c*2880000;
            else if(t==7)
                r+=c*57600000;
            t--;
        }
        printf("%lld\n",r);
        scanf("%d%c",&n,&ch);
    }
    return 0;
}
