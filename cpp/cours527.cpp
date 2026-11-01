#include <iostream>
using namespace std;
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.
 
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
int numsrandom(int number, int array[100])
{

  cout<<"array elemnts : ";
  int sum =0 ;
  for(int i = 0 ; i<number ; i++)
  {
    array[i]  = readrandomnumber(1,100);
    cout<<array[i]<<"  ";
    sum += array[i];
  }
  cout<<"\n";
 cout<<"average numbers random = "<<sum/number<<endl;
}
int main() {
  srand((unsigned)time(NULL));
  int number = readnumberelament("enter number ? ");
    int array[100];

  numsrandom(number,array);
    return 0;
}