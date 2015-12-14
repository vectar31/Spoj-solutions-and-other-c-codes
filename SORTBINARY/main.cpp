#include <iostream>

using namespace std;
int main(){
    int a[]={1,1,1,1,0,1,1,1,1,0};
    int low=0,high=9,t;
    while(low<=high){
    switch(a[low])
    {
        case 0:while(a[low]!=1)
                    low++;
                break;
        case 1:
                t=a[low];
                a[low]=a[high];
                a[high]=t;
                while (a[high]!=0)
                    high--;
                break;
        default : cout<<"Wrong";
    }

    }
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    return 0;
}
