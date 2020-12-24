#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[50], n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}