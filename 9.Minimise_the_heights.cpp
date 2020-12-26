// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include<bits/stdc++.h>
using namespace std;

int minHeight(vector<int> a, int n, int k)
{
    if(n==1)
        return 0;
    
    sort(a.begin(), a.end());

    int answer = a[n-1] - a[0];

    int small = a[0] + k;
    int big = a[n-1] - k;

    if(small>big)
        swap(small, big);
    
    for(int i=1; i<n-1; i++)
    {
        int s = a[i] - k;
        int ad = a[i] + k;

        if(s>=small || ad<=big)
            continue;
        
        if(big - s <= ad - small)
            small = s;
        else
            big = ad;
    }

    return min(answer, big-small);
}

int main()
{
    vector<int> arr;
    int n, k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }        

    cin>>k;

    cout<<minHeight(arr, n, k);

    return 0;
}