#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <stack>
#include <functional>
#define N 311111
#define NN 1111111
#define block 555
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
using namespace std;
int a[N],n,d,answer=0;
int c[NN];
int ans[N];
struct query {
int l,r,i;
}q[N];
bool cmp(query x , query y)
{
    if(x.l/block!= y.l/block)
		return x.l/block < y.l/block;
	return x.r < y.r;
}
void add(int i)
{
    c[a[i]]++;
    if(c[a[i]]==1)
        answer++;
}
void rem(int i)
{
    c[a[i]]--;
    if(c[a[i]]==0)
        answer--;
}
int main()
{
    int n;
    scanf("%d",&n);
    in(a,n);
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&q[i].l,&q[i].r);
        q[i].l--;
        q[i].r--;
        q[i].i=i;
    }
    sort(q,q+m,cmp);
    int currentL = 0, currentR = 0;
	for(int i=0; i<m; i++) {
		int L = q[i].l, R = q[i].r;
		while(currentL < L) {
			rem(currentL);
			currentL++;
		}
		while(currentL > L) {
			add(currentL-1);
			currentL--;
		}
		while(currentR <= R) {
			add(currentR);
			currentR++;
		}
		while(currentR > R+1) {
			rem(currentR-1);
			currentR--;
		}
		ans[q[i].i] = answer;
	}
	for(int i=0;i<m;i++)
        printf("%d\n",ans[i]);
    return 0;
}
