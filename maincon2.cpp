#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    if(number==1)
    {
        double a , b , c , P , S ,p;
        cout<<"Enter the sides of the triangle:"<<endl;
        cin>>a>>b>>c;
        P=a+b+c;
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"The area is: "<<S<<endl;
        cout<<"The perimeter is: "<<P<<endl;
    }
    else if(number==2)
    {
        double a , P , S;
        cout<<"Enter the side of the square: "<<endl;
        cin>>a;
        P=4*a;
        S=a*a;
        cout<<"The area is: "<<S<<endl;
        cout<<"The perimeter is: "<<P<<endl;
    }
    else if(number==3)
    {
        double r , pi , P , S;
        pi=3.14;
        cout<<"Enter r for the circle: "<<endl;
        cin>>r;
        S=pi*r*r;
        P=pi*r;
        cout<<"The area is: "<<S<<endl;
        cout<<"The perimeter is: "<<P<<endl;
    }
    else if(number==4)
    {
        int a , b , S , P;
        cout<<"Enter the sides of the rectangle: "<<endl;
        cin>>a>>b;
        S=a*b;
        P=(a+b)*2;
        cout<<"The area is: "<<S<<endl;
        cout<<"The perimeter is: "<<P<<endl;
    }
    else if(number==5)
    {
        int a , b , c , d , h , S , P;
        cout<<"Enter the sides and the height: "<<endl;
        cin>>a>>b>>c>>d>>h;
        S=((a+b)/2)*h;
        P=a+b+c+d;
        cout<<"The area is: "<<S<<endl;
        cout<<"The perimeter is: "<<P<<endl;
    }
    else
    {
        cout<<"Try again"<<endl;
    }
    return 0;
    }

