#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        int b=n%5;
        if(n==1)
        {
            cout<<"poor conductor"<<endl;
        }
        else{
        n-=1;
        int row=n/5;
        n=n-row*5;
        if(n--)
            row++;
        int c=row;
        if(c%2==0)
			{
				if(b==2)
					printf("%d W R\n",c);
				if(b==3)
					printf("%d M R\n",c);
				if(b==4)
					printf("%d A R\n",c);
				if(b==0)
					printf("%d A L\n",c);
				if(b==1)
					printf("%d W L\n",c);
			}
			else
			{
				if(b==1)
					printf("%d W R\n",c);
				if(b==0)
					printf("%d M R\n",c);
				if(b==4)
					printf("%d A R\n",c);
				if(b==3)
					printf("%d A L\n",c);
				if(b==2)
					printf("%d W L\n",c);
			}
        }

    }
    return 0;
}
