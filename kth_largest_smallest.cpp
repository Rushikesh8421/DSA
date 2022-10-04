#include<iostream>
#include<algorithm>
using namespace std;

void LargeSmall(int arr[], int n, int k){
    sort(arr, arr+n);
    cout<<"The kth max elements is: "<<arr[k-1]<<endl;
    cout<<"The kth min elements is: "<<arr[n-k]<<endl;

}

int main()
{
    int arr[10];
    int n;
    int k;

    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Kth element:";
    cin>>k;
    LargeSmall(arr,n,k);
}