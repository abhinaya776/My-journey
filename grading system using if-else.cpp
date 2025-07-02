#include <iostream>
using namespace std;
int main(){
    int mark; cin>>mark;
    if(mark>=90){
        cout<<"A";
    }
    else if(mark>=80&&mark<90){
        cout<<"B";
    }
    else if(mark>=70&&mark<80){
        cout<<" C";
    }
    else if(mark<70){
        cout<<"fail";
    }
    return 0;
}
