// https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

#include<bits/stdc++.h>
using namespace std;

void printUnion(vector<int> a, vector<int> b, int n, int m)
{
    set<int> u;
    for(int i=0; i<n; i++)
        u.insert(a[i]);
    
    for(int i=0; i<m;i ++)
        u.insert(b[i]);
    
    for(auto i=u.begin(); i!=u.end(); i++)
        cout<<*i<<" ";
}

int main()
{
    vector<int> a, b;
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    for(int i=0; i<m; i++)
    {
        int t;
        cin>>t;
        b.push_back(t);
    }

    printUnion(a, b, n, m);

    return 0;
}