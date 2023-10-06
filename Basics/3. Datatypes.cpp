#include <iostream>
using namespace std;
int main(){
    int number = 6;//4bytes
    float decimal=6.1;//4bytes
    double ddecimal=6.123414;//8bytes
    char letter='d';//1byte
    bool newbool=true;
    cout<<"Integer : "<<number<<endl;//endl->new line;
    cout<<"Float : "<<decimal<<endl;
    cout<<"Double : "<<ddecimal<<endl;
    cout<<"Character : "<<letter<<endl;
    cout<<"Boolean : "<<newbool<<endl;
    return 0;
}
