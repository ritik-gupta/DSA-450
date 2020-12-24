// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int a[], int n, int k)
{
    sort(a, a+n);
    return a[k-1];
}

int main()
{
    int arr[20], n, k;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>k;
    cout<<kthSmallest(arr, n, k)<<endl;
    return 0;
}