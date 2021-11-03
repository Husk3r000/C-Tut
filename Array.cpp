#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Array Example
  int marks[6] = {23, 24, 99, 72, 27, 54};

 

  cout<<"physics "<<setw(5)<<marks[0]<<endl;
  cout<<"Math " <<setw(5)<<marks[1]<<endl;
  cout<<"English "<<setw(5)<<marks[2]<<endl;
  cout<<"Chemistry "<<setw(5)<<marks[3]<<endl;
  cout<<"Biology "<<setw(5)<<marks[4]<<endl;
  cout<<"Accounting "<<setw(5)<<marks[5]<<endl;

  int i = 0;

  //while (i<6)
  //{
  //  cout<<i<<" is "<<marks[i]<<endl;
  //  i++;
  //}
  
  //do
  //{
  //  cout<<i<<" is "<<marks[i]<<endl;
  //  i++;
//
  //} while (i<6);

  //Pointer arry

  int* p = marks;

  cout<<"The value of Pointer is "<<*p<<endl;
  cout<<"The value of Pointer is "<<*(p+1)<<endl;
  cout<<"The value of Pointer is "<<*(p+2)<<endl;
  cout<<"The value of Pointer is "<<*(p+5)<<endl;
  
  

  return 0;
}