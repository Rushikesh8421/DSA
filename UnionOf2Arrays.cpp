#include <iostream>
#include <set>
using namespace std;

void Union(int a[], int n, int b[], int m)
{
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        st.insert(b[i]);
    }
    cout<<"The Union Array is:";
    for(auto itr: st){
        cout<<itr<<" ";
    }
    cout<<endl;
    cout <<"The size of Union array is:"<<st.size()<<endl;
}

int main()
{
    int n, m;
    int a[50], b[50];
    cout << "Enter the size of array1:";
    cin >> n;
    cout << "Enter Array1 elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of array2:";
    cin >> m;
    cout << "Enter Array2 elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    Union(a,n,b,m);
   
}