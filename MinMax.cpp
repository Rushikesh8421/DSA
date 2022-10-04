#include<iostream>
using namespace std;

void MaxMin(int arr[], int n){
    int max = 0;
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"The max is: "<<max<<endl;
    cout<<"The min is: "<<min<<endl;

}

int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MaxMin(arr,n);

}