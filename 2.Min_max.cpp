/*
    Write a C function to return minimum and maximum in an array. 
    Your program should make the minimum number of comparisons. 
*/

#include<iostream>
using namespace std;

struct Pair{
    int max;
    int min;
};

struct Pair getMinMax(int a[], int n)
{
    Pair minmax;
    int i;
    if(n%2==0)
    {
        if(a[0]>a[1])
        {
            minmax.max = a[0];
            minmax.min = a[1];
        }
        else
        {
            minmax.max = a[1];
            minmax.min = a[0];
        }
        i=2;
    }
    else
    {
        minmax.min = minmax.max = a[0];
        i=1;
    }
    while (i<n-1)
    {
        if(a[i] > a[i+1])
        {
            if(a[i] > minmax.max)
                minmax.max = a[i];
            
            if(a[i+1] < minmax.min)
                minmax.min = a[i+1];
        }
        else
        {
            if(a[i+1] > minmax.max)
                minmax.max = a[i+1];
            
            if(a[i] < minmax.min)
                minmax.min = a[i];
        }
        i+=2;
    }
    return minmax;
}

int main()
{
    int arr[50], n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    Pair mm = getMinMax(arr, n);
    cout<<"Minimum Element: "<<mm.min<<endl;
    cout<<"Maximum Element: "<<mm.max<<endl;
    return 0;
}