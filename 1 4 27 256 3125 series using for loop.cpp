#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        if(i==0){
            continue;
        }
        cout<<" "<<pow(i,i);
    }
   return 0;
}
