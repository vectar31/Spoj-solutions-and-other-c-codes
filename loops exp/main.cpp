#include <iostream> 	// Allows input output operations
#include <iomanip>		// Allows usage of setprecision
#include <cmath>	/* exp */

using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));
}
int main() {

	/*********** DO NOT CHANGE VARIABLE NAMES ************/
	unsigned int k = 1;	//Keeps track of the count in the loop
	double ex = 1; 		//The summation of each polynomial evaluated
	double err;			//Err
	double x;		 	//Input
    int t=1;double power,n=1,term;int factorial;

	/***************Get User Input***************/
	cout << "x = ";
	cin >> x;
	cout << endl;

	cout << "Error = ";
	cin >> err;
	cout << endl;

	/***************End User Input***************/


	if(err<=0)
        cout<<"INVALID INPUT";
    else
    {
        do
        {
            power=pow(x,n);factorial=fact(t);
            term=power/factorial;cout<<term<<endl;
            ex+=term;
            n+=1;t+=1;k++;
        }while(abs(term)>=err);
        cout << "exp(" << x << ") = " << setprecision(7) <<  ex << endl;
        cout << "Number of Terms : " << k << endl;
    }



	return 0;
}
