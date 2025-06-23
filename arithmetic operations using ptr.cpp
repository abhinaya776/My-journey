#include<iostream> 
using namespace std;
int main(){
    int *ptr; int *ptr2;
    int a=5; int b=2;
    ptr=&a; ptr2=&b;
    cout<<*ptr<<"+" <<*ptr2<<" = "<<*ptr + *ptr2 <<endl;
    cout<<*ptr<<"-"<<*ptr2<<" = "<<*ptr- *ptr2<<endl;
    cout<<*ptr<<"*"<<*ptr2<<" = "<<*ptr * *ptr2<<endl;
    cout<<*ptr<<"/"<<*ptr2<<" = "<<*ptr / *ptr2;
    
    return 0;
}
