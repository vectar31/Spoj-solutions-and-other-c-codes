#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,x;
        cin>>p>>x;
        char a[1000010];
        int carry,temp,temp2;
        int f=0;
        for(int i=x;i<=9;i++)
        {
            a[p-1]=i+48;
            carry=0;
            for(int j=p-2;j>=0;j--)
            {
                a[j]=((a[j+1]-48)*x + carry)%10 + 48;
                carry = ((a[j+1]-48)*x + carry)/10;
            }
            a[p]=0;
            temp=a[0]-48;
            temp2= (temp*x + carry)%10;
            carry=(temp*x + carry)/10;
            if(temp2 == i && carry==0)
            {
                cout<<a<<endl;
                f=1;
                break;
            }
        }
        if(!f)
            cout<<"Impossible"<<endl;
    }
    return 0;
}
