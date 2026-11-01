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
void numsrandom(int &number,int array[100])
 
{
 

  cout<<"enter the number ? "<<endl;
  cin>>number;
 
  for(int i = 0 ; i<number ; i++)
  {
    array[i]  = readrandomnumber(-100,100);
   
   
  }
 
}

void numsrandomcopy(int number,int array[100],int array1[100],int &number2)
{
  
 int count =0;
  for(int i = 0 ; i < number ; i++)
  { 
     if(array[i] > 0)
     {
      count++;
     }
  }
 cout<<count;
}
void printarray(int number , int array[100])
{

     for(int i = 0 ; i<number ; i++)
  {
   
    cout<<array[i]<<"  ";
   
  }
  cout<<"\n";
}
int main() {
  srand((unsigned)time(NULL));
 int number = 0 , number2 = 0 ;

 int array[100], array1[100];

numsrandom(number,array);



cout<<"array 1 element is :  ";
printarray(number,array);



  cout<<"array the number positive element is :  ";
  numsrandomcopy(number,array,array1,number2);

 // printarray(number2,array1);
    return 0;
}