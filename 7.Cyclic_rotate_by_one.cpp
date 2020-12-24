// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &a, int n)
{
    int temp = a[n-1], i;
    for(i=n-1; i>0; i--)
        a[i] = a[i-1];
    a[0] = temp;
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    rotate(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}