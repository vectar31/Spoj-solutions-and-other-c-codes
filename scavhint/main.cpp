#include <iostream>
#include <map>
using namespace std;
struct place{
    string name;
    place* next;
};
int main()
{
    string a , b;
    //map <string,string> m;
    cin>>a>>b;
    while(a!="0"&&b!="0")
    {
      place* temp=new place;
      temp.name=a;
      temp->next=b;
    }
    return 0;
}
