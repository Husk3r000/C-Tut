#include<iostream>;
#include<iomanip>;
using namespace std;

int main()
{
    
    int age;
    cout<<"Write down your age below"<<endl;
    cin>>age;    
    //Selection structor if, else if, else , ladder
    //if(age<18)
    //{
    //    cout<<"Go play with your toys kiddo"<<endl;
    //}    
    //else if (age == 18)
    //{
    //   cout<<"Okay you'll get a kid pass mate"<<endl;
    //}
    //else
    //{
    //    cout<<"Lets hit it"<<endl;
    //}
    //selection structure (Switch case)

    switch (age)
    {
    case 18:
        cout<<"Age is 18"<<endl;
        break;

    case 22:
        cout<<"Age is 22"<<endl;
        break;
    case 56:
        cout<<"Age is 56"<<endl;
        break;
    case 101:
        cout<<"Age is 101"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}