#include<bits/stdc++.h>
#define isvowel(x) (x == 0 || x == 4 || x == 8 || x == 14 || x == 20)

//  from the infinite pattern try to figure out hte mapping until repition occurs. Mapp in O (1) time


// O (1) time pased in 0.08 seconds;

using namespace std;

int main(){

	string vows= "aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou";
	string cons = "bcdfghjklmnpqrstvwxyzbcdfghjklmnpqrstvwxyzbcdfghjklmnpqrstvwxyzbcdfghjklmnpqrstvwxyzbcdfghjklmnpqrstvwxyz";

	int pos[] = {0, 0, 1, 2, 1,
				3, 4, 5, 2, 6,
				7, 8, 9, 10, 3,
				11, 12, 13, 14, 15,
				4, 16, 17, 18, 19,
				20};

	string s;
	int t, len;
	cin>>t;
	for(int i=0;i<=t;i++)
    {
		getline(cin, s);
		if(i){
		int freq[26] = {0};
		len = s.length();

		for(int i=0;i<len;i++){
			int c = s[i] - 'a';
			if(isvowel(c)){
				int rep = ((freq[c] * 5 + pos[c]) % 105);
				freq[c] = (freq[c] + 1) % 21;
				printf("%c", cons[rep]);
			}
			else{
				int rep = ((freq[c] * 21 + pos[c]) % 105);
				freq[c] = (freq[c] + 1) % 5;
				printf("%c", vows[rep]);
			}
		}
		printf("\n");
        }
	}
    return 0;
}
