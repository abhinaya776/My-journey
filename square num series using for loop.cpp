#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i==0){
           continue;
        }
        cout<<i*i<<" ";
       }
   return 0;
}
