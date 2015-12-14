#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double R, C, r, b;
	cin>>r>>b;
	R = ((r+4.0) + sqrt((r+4.0)*(r+4.0) - 16.0*(b+r))) / 4.0;
	C = (b+r) / R;
	if(R > C) cout<<R<<" "<<C<<endl;
	else cout<<C<<" "<<R<<endl;
	return 0;
}
