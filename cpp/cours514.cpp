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
   for( int i = 65+number-1 ; i >= 65 ; i--)
   {
    cout<<endl;
     for(int m = 1 ; m <= number-((65+number-1)-i); m++)
     {
       cout<<char(i);

     }
   }

}

int main() {
   loopsnumber(loopsnumber("enter the number ?"));
    return 0;
}