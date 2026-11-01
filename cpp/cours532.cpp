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
void numsrandomcopy(int number,int array[100],int array1[100])
{
  
  cout<<"array 2 elemnts : ";

  for(int i = 0 ; i < number ; i++)
  {
      
     array1[i]=array[i];
     cout<<array1[i]<<"  ";
  }
  cout<<"\n";

}
void numsrandomcopyrevars(int number,int array1[100])
{
  
  cout<<"array 2 elemnts after revers : ";

  for(int i = number-1 ; i >= 0 ; i--)
  {
      
    
     cout<<array1[i]<<"  ";
  }

}
int main() {
  srand((unsigned)time(NULL));
  int number = readnumberelament("enter number ? ");

  int array[100], array1[100];
  numsrandom(number,array);
  numsrandomcopy(number, array,array1);
  numsrandomcopyrevars(number,array1);
    return 0;
}