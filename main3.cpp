#include <iostream>
using namespace std;
int main()
{
   int number ,lastdigit , firstdigit , seconddigit , forthdigit;
   cout<<"Enter a number:"<<endl;
   cin>>number;
   firstdigit=number/10000;
   seconddigit=(number/1000)%10;
   forthdigit=(number/10)%10;
   lastdigit=number%10;
   if(firstdigit==lastdigit && seconddigit==forthdigit)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}
