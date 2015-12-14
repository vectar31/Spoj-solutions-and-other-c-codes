#include <iostream>

using namespace std;
int leapyear[300]={0};
struct con{
    int d;
    int m;
    int y;
    int c;
};
struct date{
    int da;
    int mo ;
    int ye;
};
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
date nextdate(con a)
{
    date d1,d2;
    d1.da=d2.da=a.d;
    d1.mo=d2.mo=a.m;
    d1.ye=d2.ye=a.y;

    if(leapyear[d1.ye-1900]&&d1.mo==2&&days[d1.mo]==d1.da)
    {
        d2.da=29;
        d2.mo=2;
        d2.ye=d1.ye;
    }
    else if(leapyear[d1.ye-1900]&&d1.mo==2&&d1.da==29)
    {
        d2.da=1;
        d2.mo=3;
        d2.ye=d1.ye;
    }
    else if(d1.mo==12&&d1.da==31)
    {
        d2.da=1;
        d2.mo=1;
        d2.ye=d1.ye+1;
    }
    else if(d1.da==days[d1.mo])
    {
        d2.da=1;
        d2.mo+=1;
    }
    else
        d2.da=d1.da+1;
    return d2;

}
int main()
{
    for(int i=1904;i<=2096;i+=4)
        leapyear[i-1900]=1;
    leapyear[2000-1900]=0;
    int n;
    cin>>n;
    while(n!=0)
    {
        int ans1=0,ans2=0;
        con a[n];
        for(int i=0;i<n;i++)
            cin>>a[i].d>>a[i].m>>a[i].y>>a[i].c;
        for(int i=1;i<n;i++)
        {
           date d3,d4;
           d3.da=a[i].d;
           d3.mo=a[i].m;
           d3.ye=a[i].y;
           d4=nextdate(a[i-1]);
           if(d3.da==d4.da&&d3.mo==d4.mo&&d3.ye==d4.ye)
           {
               ans1+=1;
               //cout<<a[i].c<<" "<<a[i-1].c<<endl;
               ans2+=(a[i].c-a[i-1].c);
           }
        }
        cout<<ans1<<" "<<ans2<<endl;
        cin>>n;

    }
    return 0;
}
