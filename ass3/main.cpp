#include <iostream>
#include<string>
using namespace std;
void decode (unsigned int instruction)
{

	/* TODO: Assignment 3. Complete this function
	 * Pay attention to the output formats mentioned in question.pdf */
	unsigned int opcode, unary, immediate, source1, source2, destination;
	string s[]={"Illegal instruction","ADD ","SUB ","MUL ","DIV ","AND ","OR  ","NOT"};
	opcode=instruction>>29;
	unary=instruction<<3;
	unary>>=31;
	immediate=instruction<<4;
	immediate>>=31;
	destination=instruction<<23;
	destination>>=23;
	source2=instruction<<14;
	source2>>=23;
	source1=instruction<<5;
	source1>>=23;
	switch(opcode)
	{
	    case 1: cout<<"ADD";break;
	    case 2: cout<< "SUB"; break;
	    default : cout<<"Illegal instruction"; return;
	}
	if(unary==1)
    {
        if(immediate==1)
            cout<<"imm("<<source1<<")";
        else
            cout<<source1;
    }
    else
    {
        if(immediate==1)
            cout<<"imm("<<source1<<")";
        else
            cout<<source1;
        cout<<" "<<source2;
    }
    cout<<" "<<destination;

}

/* WARNING: Do not change anything below this line */
int main() {


	unsigned int input_instruction;

	// read and decode an instruction
	cin >> hex >> input_instruction;
	decode(input_instruction);

	return 0;
}

