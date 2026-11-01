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
void print_kay(int number, string array[100])
{
for(int i = 0; i<number ; i++)
{
  string kay = "";
  for(int m = 1 ; m<=4 ; m++)
{
    if(m>1)
    kay += " - ";
  for(int l = 1; l<=4 ; l++)
  {
    
    kay += char(randumnumbers(65,90));

  }
 

}

 array[i]=kay;
 
}

}
void printkayarray(int number , string array[100])
{
  for (int i = 0; i<number ; i++)
  {
    cout<<"kay ["<<i<<"]  : "<<array[i]<<endl;
  }

}
int main() {
  srand((unsigned)time(NULL));
  
 int number = readnumberkays("print enter number? ");

string array[100];

  print_kay(number,array);
  printkayarray(number,array);
    return 0;
}