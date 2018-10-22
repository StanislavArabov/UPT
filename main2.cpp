#include <iostream>
using namespace std;
int main()
{
   float a , b , c;
   cout<<"Enter three numbers:"<<endl;
   cin>>a>>b>>c;
   if(a > b && a > c && b > c)
   {
       cout<<a<<" "<<b<<" "<<c;
   }
   else if(a > b && a > c && c > b )
   {
       cout<<a<<" "<<c<<" "<<b;
   }
   else if(b > a && b > c && a > c)
   {
       cout<<b<<" "<<a<<" "<<c;
   }
   else if(b > a && b > c && c > a)
   {
       cout<<b<<" "<<c<<" "<<a;
   }
   else if(c > a && c > b && a > b)
   {
       cout<<c<<" "<<a<<" "<<b;
   }
   else if(c > a && c > b && b > a)
   {
       cout<<c<<" "<<b<<" "<<a;
   }
   else if(a > b && a > c && b==c)
   {
       cout<<a<<" "<<b<<" "<<c;
   }
   else if(a < b && a < c && b==c)
   {
       cout<<b<<" "<<c<<" "<<a;
   }
   else if(b > a && b > c && a==c)
   {
       cout<<b<<" "<<a<<" "<<c;
   }
   else if(b < a && b < c && a==c)
   {
       cout<<a<<" "<<c<<" "<<b;
   }
   else if(c > a && c > b && a==b)
   {
       cout<<c<<" "<<a<<" "<<b;
   }
   else if(c < a && c < b && a==b)
   {
       cout<<a<<" "<<b<<" "<<c;
   }
    return 0;
}
