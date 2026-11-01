#include <iostream>
#include <string>

using namespace std;


int readnumber(string massege)
{
    int number;
    do
    {
      cout<<massege<<endl;
      cin>>number;
    } while (number<=0);
    return number;
}
int checktypenumber(int number)
{
    int sum=0;
 
      for(int counter = 1 ; counter < number ; counter++)
    {
       if(number % counter==0)
       {
        sum += counter;
       }

    }
    return sum;
 } 

void printtypenumber(int number)
{
     cout<<"the number is pirvect"<<endl;
    for(int i = 1; i<=number; i++)
    {
    if (checktypenumber( i)==i)
    
      cout<<i<<endl;
    
    }
}
int main() {
   printtypenumber(readnumber("enter number? "));
    return 0;
}