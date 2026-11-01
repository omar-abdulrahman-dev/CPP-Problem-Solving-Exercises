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
    int reminder = 0;
    int revairs = 0;
  while (number > 0)
  {
     reminder = number%10;
     number = number/10;
     revairs = revairs*10 + reminder;
  }
  cout<<revairs<<endl;
}
int main() {
   reversenumber(readnumber("enter number"));

    return 0;
}