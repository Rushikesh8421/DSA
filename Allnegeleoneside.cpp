#include<iostream>
#include<algorithm>
using namespace std;

void negativeEle(int arr[],int n){
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int j=0;
    for(int i=0;i<n;i++){
        if(i!=j){
            if(arr[i]<0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

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
    negativeEle(arr,n);
}