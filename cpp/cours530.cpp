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
void numsrandom1(int number,   int array1[100])

{

  cout<<"array 2 elemnts : ";
 
  for(int i = 0 ; i<number ; i++)
  {
    array1[i]  = readrandomnumber(1,100);
    cout<<array1[i]<<"  ";
   
  }
  cout<<"\n";
}
void sumnumsrandomcopy(int number, int array[100] , int array1[100] )
{
    int sum = 0;
     cout<<"sum array number is : "<<endl;
  for(int i = 0 ; i< number ; i++)
  {
    sum = array[i]+array1[i];
    cout<<sum<<"  ";
  }

}
int main() {
  srand((unsigned)time(NULL));
  int number = readnumberelament("enter number ? ");

  int array[100],array1[100];
  numsrandom(number,array);
  numsrandom1(number,array1);

  sumnumsrandomcopy(number,array,array1);
    return 0;
}