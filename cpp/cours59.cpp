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
void numbersdigit(int number)
{
   
  for(int i = 1; i<=10 ; i++)
  {
     short digitnumbers = 0;

    digitnumbers = reversenumber(i,number);
    if(digitnumbers>0)
    {
        cout<<i<<"digitnumbers is "<<digitnumbers<<endl;
    }
  }

}

int main() {
   int number = readnumber("enter the base number ");
  
  numbersdigit(number);
    return 0;
}