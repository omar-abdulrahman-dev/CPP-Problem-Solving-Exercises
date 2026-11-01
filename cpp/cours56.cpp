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
void reversenumber(int number)
{
    int sum = 0 ;
    int reminder = 0;
  while (number > 0)
  {
     reminder = number%10;
     number = number/10;
    cout<< reminder <<endl;
    sum += reminder;
  }
  cout<<sum<<endl;
}
int main() {
   reversenumber(readnumber("enter number"));

    return 0;
}