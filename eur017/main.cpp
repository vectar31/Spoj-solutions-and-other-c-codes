
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
/*
    The program converts a number to its word equivalent.
    For example, 1 One ,2 -> two ,3 -> three .............

*/

unsigned long long int Denominations[] = {1000000000000000000,1000000000000000,
                                            1000000000000,1000000000,1000000
                                            ,1000,100,1};
const int No_Of_Denums = sizeof(Denominations)/sizeof(long long int);
char Ones[][20] = {"Zero","One ","Two ","Three ","Four ","Five ","Six ",
                    "Seven ","Eight ","Nine "};
char Tens[][20] = {"Twenty ","Thirty ","Forty ","Fifty ","Sixty ",
                    "Seventy ","Eighty ","Ninety "};
char Scale[][20] = {"Hexillion ","Quintillion ","Quadrillion ","Trillion ","Billion ","Million ",
                        "Thousand ","Hundred ",""};
char Teens[][20] = {"Ten ","Eleven ","Twelve ","Thirteen ",
                        "Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen "
                            ,"Nineteen "};
string UnderHundred(int n)
{
    // n is known to be under 1000. Hence first split up it into 3 numbers
    int n1,n2,n3;
    n1=n%10; n/=10;
    n2=n%10; n/=10;
    n3=n%10;
    string s="";
    if (n3!=0)
    {
        s+=Ones[n3];
        s+="hundred ";
    }
    if (n2!=0)
    {
        if (n2==1)      //Different construction for Teens, ten inclusive
        {
            s+=Teens[n1];
            return s;
        }
        s+=Tens[n2-2];
        s.replace(s.length()-1,1,"-");
    }
    s+=Ones[n1];
    return s;
}
string Words(unsigned long long int n)
{
    int DenumCount[No_Of_Denums] = {0};
    int DenumPointer=0;
    while (true)
    {
        if (n < Denominations[DenumPointer])
        {
            DenumPointer++;
            if (DenumPointer>=No_Of_Denums)
            {
               break;
            }
            continue;
        }
        DenumCount[DenumPointer]++;
            n-=Denominations[DenumPointer];
    }
    string s="";
    //Now create a string on the basis of those values
    for (int i=0;i<No_Of_Denums;i++)
    {
        if (DenumCount[i]==0) continue;
        s+=UnderHundred(DenumCount[i]);
        s+=Scale[i];
    }
    //Convert to first letter to ucase
    s[0] = toupper(s[0]);
    return s;
}
int main()
{
    unsigned long long int i;
    unsigned long long int Limit = 0xFFFFFFFFFFFFFFFF;
    int t;
    cin>>t;
    while(t--)
    {
        cin >> i;
        string s = Words(i);
        cout << Words(i) << endl;
    }
 //system("pause");
    return 0;
}
