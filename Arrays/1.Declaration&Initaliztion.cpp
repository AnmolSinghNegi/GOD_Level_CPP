#include <iostream>
#include <string>
using namespace std;
int main(){
    int A[5];//all the address will contain zero by default
    int B[5]={8,3,5,7,2};
    int C[10]={8,3,5};//first three indices will be assinged by value and reset by zero
    int D[]={2,4,6,8};//Size depends on list of right side here 4;
    float F[5]={1.4f,2.95f,6.6f,0.74f,3.1f};//In some compiler 'f' is used to denote float values
    char c[5]={'A','B','C','D','E'};
    char ch[5]={65,66,67,68,69};//using ASCII values;
    string n[]={"Ajay","Vijay","Sanjay"};
    cout<<to_string(1)<<endl;
}