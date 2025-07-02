#include <iostream>
using namespace std;
int main()
{
 int a, b, c;
 cin>>a>>b>>c;
 int largest;
 largest=(a>b&&a>c)?a:(b>c?b:c);
 cout<<largest;
   return 0;
}
