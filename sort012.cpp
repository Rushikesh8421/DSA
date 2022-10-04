#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                count0++;
            }
            else if(a[i] == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
        for(int i=0;i<count0;i++){
            cout<<0<<" ";
        }
        for(int i=0;i<count1;i++){
            cout<<1<<" ";
        }
        for(int i=0;i<count2;i++){
            cout<<2<<" ";
        }
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
    sort012(arr,n);
}