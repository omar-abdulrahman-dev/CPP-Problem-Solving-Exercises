#include <iostream>
using namespace std;
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

 enum entypenumber{ prime = 1 , notprime = 2 };

int readnumberelament(string massege)
{
 int number;
 do
 {
   cout<<massege<<endl;
   cin>>number;
 } while (number < 0);
 
 return number;

}
int readrandomnumber(int from,int to)
{
  
    int random = rand()%(to-from+1)+from;
    
    return random;
}
void numsrandom(int number,int array[100])
{

  cout<<"array 1 elemnts : ";
 
  for(int i = 0 ; i<number ; i++)
  {
    array[i]  = readrandomnumber(1,100);
    cout<<array[i]<<"  ";
   
  }
  cout<<"\n";
}
entypenumber numsrandomcopy(int number )
{
 

  for(int i = 2 ; i*i< number ; i++)
  {
      if(number%i == 0)
      
         return entypenumber::notprime;          
     
  }
      return entypenumber::prime;
}
void printprime(int number , int array[100])
{
    cout<<"array 2 elemnts  prime : ";
  for(int i = 0 ; i < number ; i++)
  {
     if(numsrandomcopy(array[i])==entypenumber::prime)
        cout<<array[i]<<" ";
  }

}
int main() {
  srand((unsigned)time(NULL));

  int number = readnumberelament("enter number ? ");

  int array[100];

  numsrandom(number,array);
  printprime(number,array);
    return 0;
}