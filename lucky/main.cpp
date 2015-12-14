#include <iostream>
//program to print first thousand numbers
using namespace std;
bool isLucky(int n)
{
	int pos = n;
	int del = 2;
	while( pos >= del ){
		if( pos%del == 0 )
			return false;
		pos = pos - pos/del;
		del++;
	}
	return true;
}
int main()
{
    int n=2;
    while(n!=1000)
    {
        if(isLucky(n)==true)
        cout<<n<<endl;
        n+=1;
    }
    return 0;
}
