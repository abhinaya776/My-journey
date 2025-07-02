#include <iostream>
using namespace std;
int main(){
    string username; string pass; cin>>username>>pass;
    
    string crctUsername="dandelion"; string crctPass="flower123";
    if(username==crctUsername){
        if(pass==crctPass){
            cout<<"Logged in successfully";
        }
        else{
            cout<<" wrong password";
        }
    }
    else{
        cout<<"Wrong username";
    }    
    
return 0;
}
