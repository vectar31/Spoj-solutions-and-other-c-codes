#include <bits/stdc++.h>
using namespace std;
int gcd(int a , int b)
{
    while(b)b^=a^=b^=a%=b;
    return a;
}
void calculate(string s)
{
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(isalpha(s.at(i)))s.at(i)=islower(s.at(i))?s.at(i)-32:s.at(i);
		else s.at(i)=' ';
	}
}
int main()
{
	int score=0,tot=0, g;
	string text, str;
	set< string > S;
	while(getline(cin,text))
	{
		calculate(text);
		stringstream ss(text);
		while(ss >> str)
		{
			if(str=="BULLSHIT")
			{
				tot += S.size();
				score++;
				S.clear();
			}
			else S.insert(str);
		}
	}
	g = gcd(tot, score);
	cout << tot/g << " / " << score/g << endl;
	return 0;
}


