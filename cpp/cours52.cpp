#include <iostream>
#include <string>

using namespace std;

enum entypenumber{prime=1,notprime=2};

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
entypenumber checknumber(int number)
{
   int m = number/2;
   for(int count=2; count<=m;count++) 
   {
     if( number % count== 0)
     {
        return entypenumber::notprime;
     }
   }
           return entypenumber::prime;

}

void printtypenumber(int number)
{
        cout<<"the number is prime==  "<<endl;

    for(int i =2; i<=number ; i++)
    {
    if(checknumber(i)==entypenumber::prime)
    {
        cout<<i<<endl;

    }
}
}
int main() {
    printtypenumber(readnumber("print number?"));
   
    return 0;
}