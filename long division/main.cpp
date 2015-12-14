#include <bits/stdc++.h>
#define in(n) scanf("%d",&n)
#define REP(i,a,b) for(i=a;i<b;i++)
using namespace std;
void showcase(char c, int d, vector <int>A) {
	for (int i=0; i < d+1; i++)
			cout << c << "(" << i << ")= " << A[i] << endl;
	cout << "Degree = " << d << endl << endl;
}
int main() {
	vector <int> N,D,d,q,r;
    int size_N, dD, dd, dq, dr , i;
	cout << "Divisor degree = ";in(dD);
	cout << "Dividend degree = ";in(size_N);
	dq = size_N-dD;q.resize(dq+1);
	dr = size_N-dD;r.resize(dr+1);
	N.resize(size_N+1);d.resize(size_N+1);D.resize(size_N+1);
	cout << "coefficients of Divisor:"<<endl;
	for ( i = 0; i < dD+1; i++ )in(D[i]);
	cout << "coefficients of Dividend:"<<endl;
	REP(i,0,size_N+1)in(N[i]);
	for( i = dD+1 ; i < size_N+1; i++ )D[i] = 0;
	for( i = 0 ; i < dq + 1 ; i++ )q[i] = 0;
	for( i = 0 ; i < dr + 1 ; i++ )r[i] = 0;
    if( size_N >= dD ) {
		while(size_N >= dD) {
			for( i = 0 ; i < size_N + 1 ; i++ )d[i] = 0;
            for( i = 0 ; i < dD + 1 ; i++ )d[i+size_N-dD] = D[i];
			dd = size_N;
			q[size_N-dD] = N[size_N]/d[dd];
			for( i = 0 ; i < dq + 1 ; i++ )d[i] = d[i] * q[size_N-dD];
			for( i = 0 ; i < size_N + 1 ; i++ )N[i] = N[i] - d[i];
			size_N--;
		}
	}
	for( i = 0 ; i < size_N + 1 ; i++ )r[i] = N[i];
	dr = size_N;
	showcase( 'q', dq, q );
	showcase( 'r', dr, r );
    return 0;
}
