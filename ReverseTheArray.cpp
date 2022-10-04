#include<iostream>
using namespace std;

int * reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return arr;
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
    reverseArray(arr,n);
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}