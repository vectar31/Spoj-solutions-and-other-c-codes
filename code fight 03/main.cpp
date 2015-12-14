/*
Changu has 3 numbers ( a , b , c ) of the form  n^2+1 ,  n^2-1 , and 2n where n is an integer. He tries to make a triangle T using these 3 numbers as side lengths.
Now he wants to calculate the minimum INTEGER radius r of a circle  such that r is greater than or equal to the radius of circumference of the triangle T. Can you help him find this radius.

Note: Output should be -1 if no triangle can be formed using these lengths (a,b,c).

Input (a) → integer :
of the form n^2 + 1

Input (b) → integer :
of the form n^2 - 1

Input (c) → integer :
of the form 2n

Output → integer :
the required radius r


1
int changu_circle(int a, int b, int c) {
2
​
3
}
4
​
a	b	c
Test case #1	Input	5	3	4
Output	3
Test case #2	Input	10	8	6
Output	5
Test case #3	Input	101	99	20
Output	51
Test case #4	Input	998002	998000	1998
Output	499001
Test case #5	Input	14885	14883	244
Output	7443
Test case #6	Input	1	-1	0
Output	-1
Test case #7	Input	2	0	2
Output	-1
Test case #8	Input	2	0	-2
Output	-1
Test case #9	Input	101	3	6
Output	-1
Test case #10	Input	101	99	-20
Output	-1
*/

#include <bits/stdc++.h>
using namespace std;
int cc(int a, int b, int c) {
  int  s[] = {a,b,c};
  sort(s,s+3);
  return s[0]>0? ++s[2]/2:-1;
}


int main()
{
    while(1){
    int a,b ,c;
    cin>>a>>b>>c;
    cout<<cc(a,b,c)<<endl;}
    return 0;
}
