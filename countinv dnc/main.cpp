#include <iostream>
#include <cstdlib>
#include <cstdio>
#define ll long long
using namespace std;
ll mSort(int arr[], int temp[], int left, int right);
ll merge(int arr[], int temp[], int left, int mid, int right);

/*
 * calls mSort
 */
ll mergeSort(int arr[], int array_size)
{
    int *temp = new int [array_size];
    return mSort(arr, temp, 0, array_size - 1);
}

/*
 * sorts the input array and returns the number of inversions in the array.
 */
ll mSort(int arr[], int temp[], int left, int right)
{
    int mid;
    ll inv_count = 0;
    if (right > left)
    {
        mid = (right + left)/2;
        inv_count  = mSort(arr, temp, left, mid);
        inv_count += mSort(arr, temp, mid+1, right);
        inv_count += merge(arr, temp, left, mid+1, right);
    }
    return inv_count;
}

/*
 * merges two sorted arrays and returns inversion count in the arrays.
 */
 ll merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    ll inv_count = 0;
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return inv_count;
}

/*
 * Main
 */
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        //int arr[] = {1, 20, 6, 4, 5,7,8,9};
        printf("%lld\n",mergeSort(arr, n));
    }
    return 0;
}
