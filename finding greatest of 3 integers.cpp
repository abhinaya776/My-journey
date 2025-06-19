#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
   
    if(num1>num2&&num3){
        cout<<num1<<" is greater";
    }
    else if (num2>num1&&num3){
        cout<<num2<<" is greater";
        }
    else if(num3>num1&&num2){
        cout<<num3<<" is greater";
        }
    else
        cout<<"invalid input";
return 0;
}
