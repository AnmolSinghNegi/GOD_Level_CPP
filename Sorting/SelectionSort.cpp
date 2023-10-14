#include <iostream>
using namespace std;

int main()
{
    int arr[]={8,6,9,4,2};
    //Selection sort
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i;j<n;j++){
            if(arr[k]>arr[j]){
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}