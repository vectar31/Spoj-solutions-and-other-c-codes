#include <iostream> 	// Allows input output operations
#include <iomanip>		// Allows usage of setprecision
#include <math.h>		/* exp */

using namespace std;
bool prime(int n)
{
    if(n==0||n==1)
        return false;
    if(n==2)
            return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {

	/*********** DO NOT CHANGE VARIABLE NAMES ************/
	int array[100];	    //  Input Array entered by the user
	int N ;             //  Number of elements, N <=100

        int len =0;
        int start = 0;

	/***************Get User Input***************/
	cout << "Enter number of elements ";
	cin >> N;
	cout << endl;

	cout << "Enter " << N << " integers ";
	cout << endl;

        //Taking input in array
        for(int i = 0; i < N; i++){
          cin>>array[i];
        }
        cout<<endl;

	/***************End User Input***************/

	int k=0,fakestart;
	/*---------------------------------------------*/
	// Please add your code here for Q1
        for(int i=0;i<N;i++)
        {
            if(prime(array[i])==true)
            {
                if(k==0)
                    fakestart=i;
                k+=1;
            }
            else
            {
                if(k>len)
                {
                    len=k;
                    start=fakestart;
                }
                k=0;
            }
        }
        if(k>len)
                {
                    len=k;
                    start=fakestart;
                }

        /*---------------------------------------------*/

        for(int j = start; j< (len + start); j++)
           cout<<array[j]<<" ";
        cout<<endl;

        cout<<"Start  =  " << start<<endl;
        cout<<"Length =  " << len<<endl;

	return 0;
}
