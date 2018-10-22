#include <iostream>
using namespace std;
int main()
{
    cout<<"What kind of conversion do you want to make?"<<endl;
    cout<<"Press 1 for: Celsius to Fahrenheit"<<endl;
    cout<<"Press 2 for: Fahrenheit to Celsius"<<endl;
    int option;
    double temperature , F , C;
    cin>>option;
    if(option==1)
    {
        cout<<"Enter temperature in Celsius:"<<endl;
        cin>>temperature;
        F=temperature*1.8+32;
        cout<<"The temperature in Fahrenheit is: "<<F<<endl;
    }
    else if(option==2)
    {
        cout<<"Enter temperature in Fahrenheit:"<<endl;
        cin>>temperature;
        C=(temperature-32)/1.8;
        cout<<"The temperature in Celsius is: "<<C<<endl;
    }

    return 0;
}

