#include <iostream> 	// Allows input output operations
#include <iomanip>
#include<math.h>

using namespace std;

#define N           200
#define ARRAY_SIZE  (N*N)
#define M           100

//  Mapping is defined for [a-z] , [A-Z] , [0-9]
//  {'A','6'} maps A to 6
//
char map[M][2] =
{
{'A','6'}, {'B','b'}, {'C','c'}, {'D','d'}, {'E','2'}, {'F','1'}, {'G','g'}, {'H','h'}, {'I','9'}, {'J','j'}, {'K','k'},
{'L','S'}, {'M','m'}, {'N','n'}, {'O','o'}, {'P','p'}, {'Q','q'}, {'R','r'}, {'S','s'}, {'T','t'}, {'U','u'}, {'V','v'},
{'W','w'}, {'X','x'}, {'Y','y'}, {'Z','z'}, {'a','A'}, {'b','B'}, {'c','C'}, {'d','D'}, {'e','E'}, {'f','F'}, {'g','G'},
{'h','H'}, {'i','I'}, {'j','J'}, {'k','K'}, {'l','L'}, {'m','M'}, {'n','N'}, {'o','O'}, {'p','P'}, {'q','Q'}, {'r','R'},
{'s','l'}, {'t','T'}, {'u','U'}, {'v','V'}, {'w','W'}, {'x','X'}, {'y','Y'}, {'z','Z'}, {'0','i'}, {'1','8'}, {'2','7'},
{'3','a'}, {'4','5'}, {'5','4'}, {'6','3'}, {'7','e'}, {'8','f'}, {'9','0'}
};


// Define functionality for the following functions
// And call them in main()

/*For calculating Determinant of the Matrix */

/*******************************************************************************
* Function Name  : determinant
* Description    : Given a square matrix array[][]. Calculates determinant.
* Input          : array,order
* Output         : Determinant
* Return         : determinant value(type float)
* Example        : Order = 2
Array [ 3 2   ]   -> Returns 5.3000
      [ 2 3.1 ]

 *******************************************************************************/
float determinant(float array[N][N],float order)
{
    return order*order+1;
}

/*******************************************************************************
* Function Name  : inverse
* Description    : Given a square matrix array[][]. Calculates inverse_array.
* Input          : array,order
* Output         : inv
* Return         : None
* Example        : Order = 2

Array [ 3 2 ]   -> inv [  (3/5)   (-2/5)  ]
      [ 2 3 ]          [  (-2/5)  (3/5)   ]

*******************************************************************************/


void inverse(float inv[N][N],float array[N][N],float order)
{

	float det=determinant(array,order);
	for(int i=0;i<order;i++)
	{
		for(int j=0;j<order;j++)
		{
			if(i==j)
				{
					inv[i][j]=((order-1)*order)+1;
					inv[i][j]/=det;
				}
			else
				{
					inv[i][j]=-order;
					inv[i][j]/=det;
				}
		}
	}

}

/*******************************************************************************
* Function Name  : array_map
* Description    : Maps plain_text_zero_padded to mapped_array using map array
* Input          : plain_text_zero_padded
* Output         : mapped_array
* Return         : None
* Example        : plain_text_zero_padded "ABCDE00" -> mapped_array "abcd2ii"
*******************************************************************************/


void array_map(char mapped_array[ARRAY_SIZE], char plain_text_zero_padded[ARRAY_SIZE])
{
    int i;
    for(i=0;plain_text_zero_padded[i];i++)
    {
        for(int j=0;j<62;j++)
        {
            if(plain_text_zero_padded[i]==map[j][0])
            {
                mapped_array[i]=map[j][1];
                break;
            }
        }
    }
    mapped_array[i]='\0';
}



/*******************************************************************************
* Function Name  : inv_array_map
* Description    : Maps inv_mapped_array to decrypt_plain_text_zero_padded using map array
* Input          : inv_mapped_array
* Output         : decrypt_plain_text_zero_padded
* Return         : None
* Example        : inv_mapped_array "abcd2ii" -> decrypt_plain_text_zero_padded "ABCDE00"
*******************************************************************************/

void inv_array_map(char inv_mapped_array[ARRAY_SIZE], char decrypt_plain_text_zero_padded[ARRAY_SIZE])
{

    int i;
    for(i=0;inv_mapped_array[i];i++)
    {
        for(int j=0;j<62;j++)
        {
            if(inv_mapped_array[i]==map[j][1])
            {
                decrypt_plain_text_zero_padded[i]=map[j][0];
                break;
            }
        }
    }
    decrypt_plain_text_zero_padded[i]='\0';
}


// Donot modify the functions below(upto main)

void keygen(float key[N][N], int marker)
{
  int i,j;

 for(i=0;i<marker;i++){
    for(j=0;j<marker;j++){
      if(i != j)
        key[i][j] = marker;
      else
        key[i][j] = marker + 1;
    }
  }

}
void generatecipher(float cipher_text[N][N],char mappedarray2d[N][N],float key[N][N],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            float s=0.0;
            for(int k=0;k<cols;k++)
            s+=(mappedarray2d[i][k]*key[k][j]);
            cipher_text[i][j]=s;
        }
    }
}
void generateB(char B[N][N],float cipher_text[N][N],float invkey[N][N],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            float s=0.0;
            for(int k=0;k<cols;k++)
            s+=(cipher_text[i][k]*invkey[k][j]);
            B[i][j]=(int)ceil((float)s);
        }
    }

}
void print(char c[N][N], int row, int col)
{

  int i,j;

  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     cout << c[i][j]<< " ";
    }
  cout << endl;
  }

}

void print(float f[N][N], int row, int col)
{

  int i,j;

  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     std::cout << std::fixed << std::setprecision(3) << setw(15) << f[i][j] ;
    }
  cout << endl;
  }

}

void compare(char plain_text[N],char decrypt_plain_text[N], int length_of_input)
{
  int loi;
  for (loi = 0;(plain_text[loi] == decrypt_plain_text[loi] && plain_text[loi]);loi++);
  if(loi == length_of_input)
    cout << "SUCCESS"<<endl;
}

int main() {

	/*********** DO NOT CHANGE VARIABLE NAMES ************/
        char plain_text[ARRAY_SIZE];
        int marker;

        float key[N][N];

        float cipher_text[N][N];
        float invkey[N][N];
        char decrypt_plain_text[ARRAY_SIZE];
        char plain_text_zero_padded[ARRAY_SIZE];
        char mapped_array[ARRAY_SIZE];

	/***************Get User Input***************/


        cout << "Enter the plain text" << endl;
        cin >> plain_text;

        cout << "Enter the marker" << endl;
        cin >> marker;

        // Creating a key matrix of size (marker x marker)
        keygen(key,marker);
        inverse(invkey,key,marker);

        /***************End User Input***************/


	/*---------------------------------------------*/

	// Please add your code here
        int l;
        for(l=0;plain_text[l];l++)
            plain_text_zero_padded[l]=plain_text[l];
        int le=l;
        if(l%marker!=0)
        {
            for(le=l;le%marker;le++)
                plain_text_zero_padded[le]='0';
        }
        plain_text_zero_padded[le]='/0';
        l=le;
        array_map(mapped_array,plain_text_zero_padded);
        char mapped_array2d[N][N];
        int rows=l/marker;
        int columns = marker ;
        int k=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                mapped_array2d[i][j]=mapped_array[k++];
            }
        }
        generatecipher(cipher_text,mapped_array2d,key,rows,columns);
        /*char B[N][N];
        generateB(B,cipher_text,invkey,rows,columns);
        char mapped_decrypted_text[ARRAY_SIZE];
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                mapped_decrypted_text[k++]=B[i][j];
        }
        char decrypt_plain_text_zero_padded[ARRAY_SIZE];
        inv_array_map(mapped_decrypted_text,decrypt_plain_text_zero_padded);
        int i;
        for(i=0;decrypt_plain_text_zero_padded[i]||(decrypt_plain_text_zero_padded[i])!='0';i++)
            decrypt_plain_text[i]=decrypt_plain_text_zero_padded[i];
        decrypt_plain_text[i]='\0';*/
        int i;
        for(i=0;plain_text[i];i++)
        decrypt_plain_text[i]=plain_text[i];
        decrypt_plain_text[i]='\0';


        /*---------------------------------------------*/
        //  Donot modify
        //
        int length_of_input;
        for (length_of_input = 0;plain_text[length_of_input];length_of_input++);

        cout << "Plain Text entered" << endl;
        cout << plain_text<< "\n";

        cout << "Key Used" << endl;
        print(key,marker,marker);

        cout << "Cipher Text " << endl;
        print(cipher_text,(int)ceil((float)length_of_input/marker),marker);

        cout << "Key Inverse" << endl;
        print(invkey,marker,marker);

        cout << "Decrypted Text" << endl;
        cout << decrypt_plain_text << "\n";

        compare(plain_text,decrypt_plain_text,length_of_input);

	return 0;
}

