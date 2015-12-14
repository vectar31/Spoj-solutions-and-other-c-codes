#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,d,A[11],D[11];
    cin>>a>>d;string s;
    while(a!=0&&d!=0)
    {
        s="";
        for(int i=0;i<a;i++)
            cin>>A[i];
        for(int i=0;i<d;i++)
            cin>>D[i];
        sort(D,D+d);
        for(int i=0;i<a;i++)
        {
            if(A[i]<D[1])
            {
                s="Y";
                cout<<s<<endl;
                break;
            }

        }
        if(s!="Y")
            cout<<"N"<<endl;
        cin>>a>>d;

    }
    return 0;
}
