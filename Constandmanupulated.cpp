#include<iostream>;
#include<iomanip>;
using namespace std;


int main()
{   
    //const means you cannot change value in function its constant; 
    //int a = 100, b=29, c = 99;
    //setw is for Right justified like calculaor number
    //cout<<"This is come from iomanip for set number on right"<<setw(10)<<a<<endl;
    //cout<<"This is come from iomanip for set number on right"<<setw(10)<<b<<endl;
    //cout<<"This is come from iomanip for set number on right"<<setw(10)<<c<<endl; 


    //Manipulated in C++
    //Operator precedence konsa sign oper hoga check the website (en.cppreference.com)
    //jo oper hoga operator precedence main uspai pehlai bracket aye ga

    int a = 10, b = 99;
    
    int c =((((a*10)+b)-45)*a);
    cout<<"Operator precedence"<<setw(5)<<c;

    return 0;


}