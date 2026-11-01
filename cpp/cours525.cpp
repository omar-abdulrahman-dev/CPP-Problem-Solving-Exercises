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
int randumnumbers(int from , int to)
{
 int random = rand()%(to-from+1)+from;
return random;
}
int elamentarry(int number)
{
    int array[100];
    int min = 100 ;
  cout<<"array elemnts : ";
    for(int i = 0 ; i<number ; i++)
     {
         array[i] =randumnumbers(1,100);
        cout<<array[i]<<"  ";
        if(array[i]<min)
        
         min=array[i];
     }
              cout<<"\n";

     return min;
}
int main() {
  srand((unsigned)time(NULL));
 int number= readnumberelament("enter number ?");
 cout<<elamentarry(number);
    return 0;
}