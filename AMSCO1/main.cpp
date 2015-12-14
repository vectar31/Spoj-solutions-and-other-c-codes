#include <bits/stdc++.h>
using namespace std;

int main(){

	char minimum, text[300], key[20], cipher[250][9];
	int keylength, len[9], text_len, index;
	bool two, row_flag;
	while(scanf("%s%s", key, text) != EOF){
		keylength = strlen(key);
		text_len = strlen(text);
		two = row_flag = true;
		for(int i=0;i<keylength;i++){
			len[i] = 0;
		}
		int j=0;
		for(int i=0;i<text_len;){
			if(two){
				two = false;
				if(i+2 <= text_len){
					cipher[len[j]][j] = text[i];
					cipher[len[j] + 1][j] = text[i+1];
					i+=2;
					len[j]+=2;
				}
				else{
					cipher[len[j]][j] = text[i];
					i++;
					len[j]++;
				}
			}
			else{
				two = true;
				cipher[len[j]][j] = text[i];
				i++;
				len[j]++;
			}
			j = (j+1) % keylength;
			if(j==0){
				two = !row_flag;
				row_flag = !row_flag;
			}
		}
		for(int i=0;i<keylength;i++){
			minimum = key[0];
			index = 0;
			for(int j=0;j<keylength;j++){
				if(key[j] < minimum){
					minimum = key[j];
					index = j;
				}
			}
			key[index] = 'A';
			for(int j=0;j<len[index];j++)
				printf("%c", cipher[j][index]);
		}
		printf("\n");
	}
    return 0;
}
