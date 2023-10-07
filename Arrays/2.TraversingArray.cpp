#include <iostream>
using namespace std;
int main() {
    int A[] = {8, 3, 7, 6, 2};
    int size = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    // Print all the elements
    for(int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout<<endl;
    //Using for each loop
    for(int x:A){
        cout<<x<<" ";
    }
    //Reverse order
    for(int i = size-1; i >= size; i++) {
        cout << A[i] << " ";
    }
    return 0;
}