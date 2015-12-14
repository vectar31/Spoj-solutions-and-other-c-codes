#include<bits/stdc++.h>
using namespace std;

#define PB push_back
#define i64 long long
#define FOR(i,a,b) for(i=(a);i<(b);++i)
#define FORE(i,a,b) for(i=(a);i<=(b);++i)
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

#define N 100010

/* N counters . Each counter has specified number of nuggets. Cost of
each nugget=no. of nuggets still left in the counter(incllusive).
Pre wants M nuggets. Spend maximum money.

t
n
a1 a2 a3 ... an
m
.
.

Constraints:

1<=T<=10

1<=N<=100000

1<=A1,A2,..An<=100000

1<=M<=A1+A2+A3....+An

Example

Input:
1
3
3 5 4
3

Output:
13


Explanation:

Pre would ask buddy to get two nuggets from the second counter(5+4=9)
and then one from the third counter(9+4=13)


*/
int a[N];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int m,ans=0,c=0;
        scanf("%d",&m);
        sort(a,a+n);
        while(c!=m)
        {
            int temp=a[n-1]-a[n-2]+1;
            a[n-1]=a[n-1]-temp;
            ans+=a[n-1];
            a[n-1]=a[n-1]-1;
            c+=1;
            int j=n-1;
            while(a[j]<a[j-1]&&j>0)
            {
                swap(a[j],a[j-1]);
                j--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
