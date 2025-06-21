#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int principal,rate,time;
    cin>>principal>>rate>>time;
    float interest=(principal*rate*time)/100.0;
    float amount=principal+interest;
    float discount=(2*interest)/100.0;
    float finalsettlement=amount-discount;
    
    cout<<fixed<<setprecision(2);
    cout<<interest<<endl;
    cout<<amount<<endl;
    cout<<discount<<endl;
    cout<<finalsettlement<<endl;

    return 0;
}