#include <iostream>
using namespace std;
 
int readnumber(string massege)
{
int number = 0;
do
{
   cout<<massege<<endl;
   cin>>number;

} while (number <= 0);
 return number;
}
int reversenumber(short digit,int number)
{
    int reminder = 0;
    int result =0;
  while (number > 0)
  {
     reminder = number%10;
     number = number/10;
    if (digit == reminder)
    {
        result++;
    }
  }
  return result;
}


int main() {
   int number = readnumber("enter the base number ");
   short digit = readnumber("enter digit ");

   cout<<"digit "<<digit <<"result is  "<< reversenumber( digit, number)<<"time "<<endl;
    return 0;
}