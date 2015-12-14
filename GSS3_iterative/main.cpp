#include <bits/stdc++.h>
using namespace std;
const int AMIN = -160000;
struct S
{
    int lmax, rmax, tmax, tot;
};
const S ID = {AMIN, AMIN, AMIN, 0};
S combine(const S &A, const S &B)
{
    S C;
    C.lmax = max(A.lmax, A.tot + B.lmax);
    C.rmax = max(B.rmax, B.tot + A.rmax);
    C.tmax = max(max(A.tmax, B.tmax), A.rmax + B.lmax);
    C.tot  = A.tot + B.tot;
    return C;
}
template <typename T>
class segtree
{
    public:
    int n;
    T *t;
    segtree(int x)
    {
        n = x;
        t = new T[n << 1];
    }
    inline void build()
    {
        for (int i = n-1; i > 0; --i)
            t[i] = combine(t[i<<1], t[i<<1|1]);
    }
    inline T query(int l, int r)
    {
        T resl = ID, resr = ID;
        for (l += n, r += n  ; l <= r; l>>=1, r>>=1)
        {
            if ((l&1) == 1)     resl = combine(resl, t[l++]);
            if ((r&1) == 0)     resr = combine(t[r--], resr);
        }
        return combine(resl, resr);
    }
    /*inline void updatequery(int pos, int new_value)
    {
        for(pos+=n;pos>0;pos>>=1)
            t[pos>>1]=combine(t[pos], t[pos^1]);
    }*/
    ~segtree()
    {
        delete []t;
    }
};
int main(){
    int n, m, x, y , q;
    scanf("%d", &n);
    segtree<S> st (n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &x),
        st.t[n + i] = (S){x,x,x,x};
    st.build();
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d%d%d",&q, &x, &y);
        if(q)printf("%d\n", st.query(x-1, y-1).tmax);
        //if(!q)st.updatequery(x-1,y);
    }
    return 0;
}
