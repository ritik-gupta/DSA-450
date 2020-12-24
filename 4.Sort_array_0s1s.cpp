// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &a, int n)
{
    int low=0, mid=0, high=n-1;
    while(mid <= high)
    {
        if(a[mid] == 0)
            swap(a[low++], a[mid++]);
        
        else if(a[mid] == 1)
            mid++;
        
        else
            swap(a[mid], a[high--]);
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort012(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}