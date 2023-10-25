#include <iostream>
using namespace std;

int main()
{
    int arr[]={8,6,9,4,2};
    //Insertion sort
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int w=i-1;
        int key =arr[i];
        while(w>=0&&arr[w]>key){
            arr[w+1]=arr[w];
            w--;
        }
        arr[w+1]=key;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}         