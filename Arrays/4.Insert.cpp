#include <iostream>
using namespace std;
void insert(int x ,int index,int length,int size,int a[]){
    if(index<0){
        cout<<"Enter a valid index !!!!!"<<endl;
        return;
    }
    if(index<=length&&index<size){
        int i=length;
        for(;i>index;i--){
            a[i]=a[i-1];
        }
        a[i]=x;
        length++;
        for(int i=0;i<length;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl<<"Insert Suceesful"<<endl;
    }
    else{
        cout<<"Enter a valid index !!!!!"<<endl;
    }
}
int main()
{
    int A[7] = {8, 3, 7, 6, 2};
    int size=7;
    int length =5;
    int x,index;
    cin>>x>>index;
    insert(x,index,length,size,A);

}
