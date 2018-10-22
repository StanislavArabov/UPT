#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x , y;
    int solution;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter a solution: ";
    cin>>solution;
    switch(solution)
    {
        case 1: y = x - 5;
                cout<<y<<endl;
                break;
        case 2: y = sin(x);
                cout<<y<<endl;
                break;
        case 3: y = cos(x);
                cout<<y<<endl;
                break;
        case 4: y = exp(x);
                cout<<y<<endl;
                break;
        default: cout<<"Try a possible solution."<<endl;
    }
    return 0;
}
