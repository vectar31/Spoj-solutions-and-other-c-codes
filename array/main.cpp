#include <iostream> 	// Allows input output operations
#include <iomanip>		// Allows usage of setprecision
#include <math.h>		/* exp */

using namespace std;
bool prime(int n)
{
    if(n<2)
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

int main()
{

	/*********** DO NOT CHANGE VARIABLE NAMES ************/
	int array[100];	    //  Input Array entered by the user
	int N,c ;             //  Number of elements, N <=100

        int len =0;
        int start = 0;

	/***************Get User Input***************/
	cout << "Enter number of elements ";
	cin >> N;
	cout << endl;
    if(N<=0)
    {
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
	cout << "Enter " << N << " integers ";
	cout << endl;

        //Taking input in array
        for(int i = 0; i < N; i++){
          cin>>array[i];
          if(array[i]<0)
        {
        cout<<"INVALID INPUT"<<endl;
        return 0;
        }
        }
        cout<<endl;

	/***************End User Input***************/


	/*---------------------------------------------*/
	// Please add your code here for Q1
	int j;
        for(int i=0;i<N;i++)
        {
            int a=array[i];
            if(prime(a)==true)
            {
                c=0;
                for(j=i;j<N;j++)
                {
                    if(prime(array[j])==true)
                        c++;
                    else
                        break;
                }
                if(c>len)
                {
                    len=c;
                    start=i;
                }
                i=j;
            }
        }

        /*---------------------------------------------*/

        for(int j = start; j< (len + start); j++)
           cout<<array[j]<<" ";
        cout<<endl;

        cout<<"Start  =  " << start<<endl;
        cout<<"Length =  " << len<<endl;

	return 0;
}
