// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<bits/stdc++.h>
using namespace std;

void shiftNegativeLeft(vector<int> &a, int n)
{
    int l=0, r=n-1;
    while(l<=r)
    {
        if(a[l]<0 && a[r]<0)
            l++;
        
        else if(a[l]>0 && a[r]<0)
            swap(a[l++], a[r--]);
        
        else if(a[l]>0 && a[r]>0)
            r--;
        
        else
        {
            l++;
            r--;
        }
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    shiftNegativeLeft(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}