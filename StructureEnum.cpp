#include<iostream>
#include<iomanip>
using namespace std;

struct Employee
{
    // Struct Take full bytes 4 , 1 , 3, 5;
    //struct main ap sb istemal kr saktai ho jo bytes bhi sari lai ga
    /* data */
    string Name;    // 4 
    int ID;         // 1
    char favChar;   // 3
    float Salary;   // 5
};

union Player
{
    // Union Is only take that bytes which is used it not take all the 10 bytes of 5 , 3, 2
    // in union ap en main sai sirf ek istemal kr saktai ho warna garbage value milai gi first walai ki
    int flick;     // 5
    char roger;    // 3
    float salary;  // 2
};



int main()
{
    enum Meal{breakfast, lunch, dinner};

    Meal m1 = breakfast;

    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union Player m1;
    // m1.roger = 'c';
    // m1.flick = 10;
    // cout<<m1.roger;
    // cout<<m1.flick;
   
    
    // struct Employee gaara;
    // gaara.Name = "Gaara";; 
    // gaara.ID = 67;         
    // gaara.favChar = 'G';   
    // gaara.Salary = 10200;  

    // cout<<" Gaara's Name       "<<gaara.Name<<endl; 
    // cout<<" Gaara's ID         "<<gaara.ID<<endl;
    // cout<<" Gaara's Character  "<<gaara.favChar<<endl;
    // cout<<" Gaara's Salary     "<<gaara.Salary<<endl;
    
    
    
  
  return 0;
}