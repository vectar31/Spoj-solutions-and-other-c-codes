#include <bits/stdc++.h>
#define PB push_back
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define REPE(i,n) FORE(i,0,n)
#define SZ(v) ((v).size())
#define LD long double
#define VI vector<int>
#define VS vector<string>
#define VD vector<double>
#define VLD vector<LD>
#define MSET(x,y) memset((x),(y),sizeof(x))
#define SZOF(x) sizeof((x))
#define VVI vector< VI >
#define PII pair< int,int >
#define VPII vector< PII >
#define MP make_pair
#define PIPII pair<int, PII >
#define PIPIPII pair< int, PIPII >
#define u64 unsigned i64
#define Vi64 vector<i64>
#define Vu64 vector<u64>

using namespace std;
/* Buy k kgs of apples for n friends. Apples are packed in covers, each containing x kgs.
A x kg packet is priced at y. y=-1 => packet is not available. He can buy atmost n packets.(He will buy n packets) He has to buy exactly k kgs of apples
So given n, find out the minimum amount of money he can spend.

Format
t
n k
p1 p2 p3 ... pk (p1 is price of 1 kg packet p2 is price of 2 kg packet and so on.)
.
.

Sample:
2
3 5
-1 -1 4 5 -1
5 5
1 2 3 4 5

Output:
-1
5

Observations ;
--- No use of n ---

*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int p[k+1];
		FOR(i,1,k+1)cin>>p[i];
		int dp[k+1];
		MSET(dp,-1);
		dp[0]=0;
		FORE(i,1,k)
		{
			if(p[i]==-1)continue;
			FORE(j,i,k)
			{
				if(dp[j-i]==-1)
	                continue;
                if(dp[j]==-1)
                    dp[j]=p[i]+dp[j-i];
                else
                	dp[j]=min(dp[j],p[i]+dp[j-i]);
			}
		}
		cout<<dp[k]<<endl;

	}
    return 0;
}
