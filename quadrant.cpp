#include <iostream>
using namespace std;
int main()
{
    int x ,y;
    cin>>x;
    cin>>y;
    if(x>0&&y>0){
        cout<<"First quadrant";
    }
    else if(x<0&&y>0){
        cout<<"second quadrant";
    }
    else if(x<0&&y<0){
        cout<<"third quadrant";
    }
    else if(x>0&&y<0){
        cout<<"fourth quadrant";
    }
    else{
        cout<<"It lies on the origin";
    }
   
return 0;
}
