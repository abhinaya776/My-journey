#include <iostream>
using namespace std;
int main()
{
    int a=5; int b=6;
    int *ptr; int *ptr2;
     ptr=&a;
     ptr2=&b;
    cout<<" a  "<<*ptr2<<endl;
    cout<<" b  "<<*ptr;

    return 0;
}
