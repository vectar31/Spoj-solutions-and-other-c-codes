#include <iostream>

using namespace std;
struct he_ar {
    int he;
    int ar;
};
int main()
{
    he_ar air,water,fire,player;
    air.he=3;
    air.ar=2;
    water.ar=-10;
    water.he=-5;
    fire.he=-20;
    fire.ar=5;
    int t;
    cin>>t;
    while(t--)
    {
        int h,a;
        cin>>player.he>>player.ar;
        int time=0;
        int current=1;
        while(1)
        {
            if(current)
            {
                player.he+=air.he;
                player.ar+=air.ar;
                current = 0 ;
                time++;
            }
            else
            {
                if(player.he>5&&player.ar>10)
                {
                    player.he+=water.he;
                    player.ar+=water.ar;
                    time++;
                    current = 1;
                }
                else if(player.he>20&&player.ar<=10)
                {
                    player.he+=fire.he;
                    player.ar+=fire.ar;
                    time++;
                    current=1;
                }
                else
                    {
                        //cout<<player.he<<" "<<player.ar<<endl;
                        break;}

            }
        }
        cout<<time<<endl;


    }
    return 0;
}
