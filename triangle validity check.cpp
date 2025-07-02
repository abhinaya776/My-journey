#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3; bool yes;
    cin>>side1>>side2>>side3;
    if((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2){
        cout<<"Valid";
    }
    else{
        cout<<"invalid";
    }
return 0;
}
