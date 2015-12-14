#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a1,a2;
        cin>>a1>>a2;
        int ans1=0,ans2=0,l1,l2,i;
        l1=a1.length();
        l2=a2.length();
        for(i=0;i<l1;i++)
        {
            if(a1[i]>=48 && a1[i]<=57)
            {
                if(a1[i+1]=='m')
                    ans1+=1000*(a1[i]-'0');
                if(a1[i+1]=='c')
                    ans1+=100*(a1[i]-'0');
                if(a1[i+1]=='x')
                    ans1+=10*(a1[i]-'0');
                if(a1[i+1]=='i')
                    ans1+=1*(a1[i]-'0');
                i++;
            }
            else
            {
                if(a1[i]=='m')
                    ans1+=1000;
                if(a1[i]=='c')
                    ans1+=100;
                if(a1[i]=='x')
                    ans1+=10;
                if(a1[i]=='i')
                    ans1+=1;
            }
        }
        for(i=0;i<l2;i++)
        {
            if(a2[i]>=48 && a2[i]<=57)
            {
                if(a2[i+1]=='m')
                    ans2+=1000*(a2[i]-'0');
                if(a2[i+1]=='c')
                    ans2+=100*(a2[i]-'0');
                if(a2[i+1]=='x')
                    ans2+=10*(a2[i]-'0');
                if(a2[i+1]=='i')
                    ans2+=1*(a2[i]-'0');
                i++;
            }
            else
            {
                if(a2[i]=='m')
                    ans2+=1000;
                if(a2[i]=='c')
                    ans2+=100;
                if(a2[i]=='x')
                    ans2+=10;
                if(a2[i]=='i')
                    ans2+=1;
            }
        }
        int sum=ans1+ans2;
        char arr[10];
        int count=0;
        while(sum)
        {
            arr[count++]=(sum%10)+'0';
            sum/=10;
        }
        int p=0;
        char str[1000];
        for(i=count-1;i>=0;i--)
        {
            if(arr[i]!='0' && arr[i]!='1')
                str[p++]=arr[i];
            if(i==3 && arr[i]!='0')
                str[p++]='m';
            if(i==2 && arr[i]!='0')
                str[p++]='c';
            if(i==1 && arr[i]!='0')
                str[p++]='x';
            if(i==0 && arr[i]!='0')
                str[p++]='i';
        }
        str[p]='\0';
        printf("%s\n",str);
    }
    return 0;
}
