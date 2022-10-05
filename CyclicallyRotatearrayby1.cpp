#include<iostream>
using namespace std;

void CyclicRotateArrayBy1(int arr[], int n)
{
    int ele = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = ele;
}

int main()
{
    int n;
    int arr[50];
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter Array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    CyclicRotateArrayBy1(arr,n);
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}