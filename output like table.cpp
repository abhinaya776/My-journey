#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
 int id=101;int id2=102;string n2="Dhanu";float mark2=100.0;
 string name="Abhii";
 float marks=94.57;
 cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<" Marks"<<endl;
 cout<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<marks<<endl;
 cout<<left<<setw(10)<<id2<<setw(10)<<n2<<setw(10)<<mark2<<endl;
  return 0;
}
