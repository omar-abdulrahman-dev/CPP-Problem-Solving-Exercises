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

int revesenumber2(int number)
{  int reminder = 0;
    int reverse = 0;
  while (number > 0)
  {
     reminder = number%10;
     number = number/10;
     reverse = reverse*10 + reminder;
  }
  return reverse;
}
void reversenumber(int number)
{
  
    int reminder = 0;
  while (number > 0)
  {
     reminder = number%10;
     number = number/10;
    cout<< reminder <<endl;
    
  }
  
}
int main() {
   reversenumber(revesenumber2(readnumber("enter number")));

    return 0;
}