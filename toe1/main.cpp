#include <iostream>
#include <cstdio>
using namespace std;
int abso (int x)
{
    if(x>0)
        return x;
    else
        return -x;
}
int main()
{

    while(1)
    {
        char g[3][3];
        int x=0,o=0,d=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>g[i][j];
                if(g[i][j]=='X')
                    x++;
                else if(g[i][j]=='O')
                    o++;
                else
                    d++;
            }
            if(g[0][0]=='e')
                return 0;
        }
        if(o>x||(x>(o+1)))
            cout<<"invalid"<<endl;
        else
        {
            int xwins=0,owins=0;
            if(g[0][0]==g[0][1]&&g[0][1]==g[0][2]&&g[0][0]!='.')
            {
                if(g[0][0]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[1][0]==g[1][1]&&g[1][1]==g[1][2]&&g[1][0]!='.')
            {
                if(g[1][0]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[2][0]==g[2][1]&&g[2][1]==g[2][2]&&g[2][0]!='.')
            {
                if(g[2][0]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[0][0]==g[1][0]&&g[1][0]==g[2][0]&&g[0][0]!='.')
            {
                if(g[0][0]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[0][1]==g[1][1]&&g[1][1]==g[2][1]&&g[0][1]!='.')
            {
                if(g[0][1]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[0][2]==g[1][2]&&g[1][2]==g[2][2]&&g[0][2]!='.')
            {
                if(g[0][2]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[0][0]==g[1][1]&&g[1][1]==g[2][2]&&g[0][0]!='.')
            {
                if(g[0][0]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            if(g[0][2]==g[1][1]&&g[1][1]==g[2][0]&&g[0][2]!='.')
            {
                if(g[0][2]=='X')
                    xwins+=1;
                else
                    owins+=1;
            }
            /*if(xwins==0&&owins==0)
        {
            if(x==o||x==o+1)
                printf("valid\n");
            else
                printf("invalid\n");
        }
        else if(xwins==1&&owins==0)
        {
            if(x==o+1)
                printf("valid\n");
            else
                printf("invalid\n");
        }
        else if(xwins==0&&owins==1)
        {
            if(x==o)
                printf("valid\n");
            else
                printf("invalid\n");
        }
        else if(xwins==2)
        {
            if(x==o+1)
                printf("valid\n");
            else
                printf("invalid\n");
        }
        else
            printf("invalid\n");*/
        int f=0;
         if(xwins == 1 && owins == 1)
            f = 1;

        else
        {
            if(xwins == 1 && owins == 0 && x != o + 1)
                f = 1;

            else if(xwins == 0 && owins == 1 && x != o)
                f = 1;

            else if(xwins == 0 && owins == 0 && (x != 5 || o != 4))
            {
                f = 1;
            }
        }
        if(f)
            cout<<"invalid"<<endl;
        else
            cout<<"valid"<<endl;

        }
    }
    return 0;
}
