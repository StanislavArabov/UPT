#include <iostream>
using namespace std;
int main()
{
    int number1 , number2;
    char symbol;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>number1>>number2>>symbol;
    if(symbol=='*')
    {
        cout<<number1*number2<<endl;
    }
    else if(symbol=='/')
    {
        cout<<number1/number2<<endl;
    }
    else if(symbol=='%')
    {
        cout<<number1%number2<<endl;
    }
    else if(symbol=='+')
    {
        cout<<number1+number2<<endl;
    }
    else if(symbol=='-')
    {
        cout<<number1-number2<<endl;
    }
    else
    {
        cout<<"Invalid operation"<<endl;
    }
    return 0;
}
