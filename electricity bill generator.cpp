#include <iostream>
using namespace std;
int main()
{
 float unit; cin>>unit;
 float bill=0;
 if(unit<=100){
     bill=unit*1.5;
 }
 else if(unit<=200){
     bill=(100*1.5)+(unit-100)*2.5;
 }
 else if(unit<=300){
     bill=(100*1.5)+(100*2.5)+(unit-200)*4.0;
 }
 else{
     bill=(100*1.5)+(100*2.5)+(100*4.0)+(unit-300 )*5.0;
 }
 cout<<"total "<<bill;
 return 0;
}
