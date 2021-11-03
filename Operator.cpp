#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  //Operators
   //& ----> Address of Operator
  int a = 3;
  int* b = &a;
  cout<<b;
  cout<<"The value of b is "<<b<<endl;
  cout<<"The value of b is "<<&a<<endl;
 
  //* (Value of operator)----> Derefernce operator
  cout<<"The value of b is "<<*b<<endl;

  return 0;
}