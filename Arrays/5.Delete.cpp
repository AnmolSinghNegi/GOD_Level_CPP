#include <iostream>
using namespace std;
int del(int index,int length,int a[]){
    int x=-1;
   if(index>=0&&index<length){
        x=a[index];
        for(int i=index;i<length;i++){
            a[i]=a[i+1];
        }
       length--;
        return x;
    }
    cout<<"Enter a valid index !!!!!"<<endl;
    return x;
}
int main()
{
    int A[]={1,2,3,4,5,6,7};
    int length =7;
    int index;
    cin>>index;
    cout<< del(index,length,A);

}
