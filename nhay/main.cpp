#include <iostream>
#include <string>
using namespace std;
int pre[10000];
void prefixcal(string p)
{
    int l=p.length();
    pre[1]=0;
    int k=0;
    for(int q=2;q<l;q++)
    {
        while(k>0&&p[k+1]!=p[q])
        {
            k=pre[k-1];
        }
        if(p[k+1]==p[q])
            k+=1;
        pre[q]=k;
    }
}
void preKMP(string pattern, int f[])
{
    int m = pattern.length(), k;
    f[0] = -1;
    for (int i = 1; i < m; i++)
    {
        k = f[i - 1];
        while (k >= 0)
        {
            if (pattern[k] == pattern[i - 1])
                break;
            else
                k = f[k];
        }
        f[i] = k + 1;
    }
}

//check whether target string contains pattern
void KMP(string pattern, string target)
{
    int m = pattern.length();
    int n = target.length();
    int f[m];
    preKMP(pattern, f);
    int i = 0;
    int k = 0;
    bool flag=0;
    while (i < n)
    {
        if (k == -1)
        {
            i++;
            k = 0;
        }
        else if (target[i] == pattern[k])
        {
            i++;
            k++;
            if (k == m)
                {
                    flag=1;
                    cout<<i-k<<endl;
                    k=0;
                }
        }
        else
            k = f[k];
    }
    if(flag==0)
        cout<<endl;
}

int main()
{
    int n;
    while(cin>>n)
    {
        string s,p;
        cin>>p>>s;
        KMP(p,s);

    }

    return 0;
}
