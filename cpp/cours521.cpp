#include <iostream>
using namespace std;
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.
 
int readnumberkays(string massege)
{
 int number;

 do
 {
   cout<<massege<<endl;
   cin>>number;
 } while (number < 0);
 
 return number;

}
int randumnumbers(int from , int to)
{
 int random = rand()%(to-from+1)+from;
return random;
}
void print_kay(int number)
{
for(int i = 1; i<=number ; i++)
{
  cout<<endl<<"kay["<<i<<"]  : ";
  for(int m = 1 ; m<=4 ; m++)
{
    if(m>1)
    cout<<"-";
  for(int l = 1; l<=4 ; l++)
  {
    
    cout<<char(randumnumbers(65,90));

  }
 

}
}
}
int main() {
  srand((unsigned)time(NULL));
  
 int number = readnumberkays("print enter number? ");
  print_kay(number);

    return 0;
}