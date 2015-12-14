#include <iostream> 	// Allows input output operations
using namespace std;

int main() {

	int n,i,j,k,t,spaces=1;
	cout << "N=";
	cin >> n;t=n-1;
	cout << endl;
	string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if(n<1||n>26)
        cout<<"INVALID INPUT"<<endl;
    else if(n==1)
        cout<<"A"<<endl;
	else{
	for(i=0;i<n;i++)
        cout<<s[i];
    for(int i=n-2;i>=0;i--)
        cout<<s[i];
        cout<<endl;
	for(i=1;i<=n-1;i++)
    {
        for(j=0;j<t;j++)
            cout<<s[j];
        for(k=1;k<=spaces;k++)
            cout<<" ";
        spaces+=2;
        for(j=t-1;j>=0;j--)
            cout<<s[j];
        cout<<endl;
        t-=1;
    }
    t+=2;
    spaces-=5;
    for(int i=1;i<n-1;i++)
    {
        for(j=0;j<t;j++)
            cout<<s[j];
        for(k=spaces;k>=0;k--)
            cout<<" ";
            spaces-=2;
        for(j=t-1;j>=0;j--)
            cout<<s[j];
        cout<<endl;
        t+=1;
    }
    for(i=0;i<n;i++)
        cout<<s[i];
    for(int i=n-2;i>=0;i--)
        cout<<s[i];
        cout<<endl;}
	return 0;
}
