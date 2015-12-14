#include <bits/stdc++.h>
#include<cstdio>
#include <iostream>
#include <string>
/* Driver program to test above function */
#define ll long long
using namespace std;
int binarySearchIter(int A[], int length, int item)
{
    int left = 0, right = length - 1, mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;        // finding middle index
        if (A[mid] == item)
            return mid;                // item found
        else if (item > A[mid])
            right = mid - 1;            // recurse on left sub-array
        else
            left = mid + 1;             // recurse on right sub-array
    }
    return -1;                        // item not found
}
int abso(int x)
{
    if (x>0)
        return x;
    else
        return -x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        ll b[n];
        for(int i=n-1;i>=0;i--)
            cin>>a[i];
        for(int i=n-1;i>=0;i--)
            cin>>b[i];
        vector <ll> va (a,a+n);
        vector <ll> vb (b,b+n);
        ll ans=0;
        vector <ll>::iterator it;
        vector <ll>::iterator it2;
        for(int i=0;i<n;i++)
        {
            if(binary_search(vb.begin(),vb.end(),va[i]))
            {it = lower_bound(vb.begin(), vb.end(), va[i]);
            it2 = upper_bound(vb.begin(), vb.end(), va[i]);
            ll t1=it-vb.begin();
            ll t2=it2-vb.begin();
            //cout<<va[i]<<" "<<t1<<" "<<t2<<endl;
            ll temp=n-i-1;

            t1=n-t1-1;
            t2=n-t2;
            //cout<<va[i]<<" "<<n-i-1<<" "<<t1<<" "<<t2<<endl;
                if(ans<abso(temp-t1))
                    ans=abso(temp-t1);
                if(ans<abso(temp-t2))
                    ans=temp-t2;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}
