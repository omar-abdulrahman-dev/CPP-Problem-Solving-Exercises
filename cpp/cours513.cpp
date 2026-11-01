#include <iostream>
using namespace std;
 
int loopsnumber(string massege)
{
int number = 0;
do
{
   cout<<massege<<endl;
   cin>>number;

} while (number <= 0);
 return number;
}
void loopsnumber(int number)
{
   for( int i = 1; i <= number ; i++)
   {
    cout<<endl;
     for(int m = 1; m <= i; m++)
     {
       cout<<i;

     }
   }

}

int main() {
   loopsnumber(loopsnumber("enter the number ?"));
    return 0;
}