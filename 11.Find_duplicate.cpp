// https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {              // O(nlogn)
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i] == nums[i+1])
            return nums[i];
    }
    return -1;
}


int findDuplicateBetter(vector<int> &a)              // O(n)
{
    set<int> s;
    for(int i=0; i<a.size(); i++)
    {   
        if(s.find(a[i]) != s.end())
            return a[i];
        s.insert(a[i]);
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
        int t;
        cin>>t;
        arr.push_back(t);
    }
    cout<<findDuplicate(arr)<<endl;
    cout<<findDuplicateBetter(arr)<<endl;
    return 0;
}