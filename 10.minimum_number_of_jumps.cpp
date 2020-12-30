// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &a, int n)
{
    if(n<=1)
        return 0;
    
    if(a[0] == 0)
        return -1;

    int maxReachable, step, jumps;
    maxReachable = a[0];
    step = a[0];
    jumps = 1;

    for(int i=1; i<n; i++)
    {
        if(i==n-1)
            return jumps;
        
        maxReachable = max(maxReachable, i+a[i]);

        step--;

        if(step==0)
        {
            jumps++;

            if(i>=maxReachable)
                return -1;
            
            step = maxReachable - i;
        }
    }

    return -1;
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
    cout<<minJumps(arr, n)<<endl;
    return 0;
}