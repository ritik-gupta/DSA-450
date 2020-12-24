// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &a, int n)
{
    int maximum, temp;
    maximum=temp=a[0];

    for(int i=1; i<n; i++)
    {
        temp = max(a[i], temp+a[i]);
        if(maximum<temp)
            maximum=temp;
    }
    return maximum;
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
    cout<<maxSum(arr, n);
    return 0;
}
