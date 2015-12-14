#include <bits/stdc++.h>

using namespace std;
struct pos{
    int x,y;
}m,c1,c2;
int main()
{
    int M,N;
    cin>>M>>N;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>m.x>>m.y>>c1.x>>c1.y>>c2.x>>c2.y;
        if((m.x<c1.x+abs(m.y-c1.y) && m.x<c2.x+abs(m.y-c2.y)) || (M-m.x<M-c1.x+abs(m.y-c1.y) && M-m.x<M-c2.x+abs(m.y-c2.y)))
            cout<<"YES"<<endl;
        else if((m.y<c1.y+abs(m.x-c1.x) && m.y<c2.y+abs(m.x-c2.x)) || (N-m.y<N-c1.y+abs(m.x-c1.x) && N-m.y<N-c2.y+abs(m.x-c2.x)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
