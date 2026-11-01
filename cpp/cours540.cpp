#include <iostream>
using namespace std;
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.
 
void fillarray(int array[100],int &number)
{

 number = 10;

     array[0]=10;
     array[1]=10;
     array[2]=10;
     array[3]=50;
     array[4]=50;
     array[5]=70;
     array[6]=70;
     array[7]=70;
     array[8]=70;
     array[9]=90;


}

int typenumber(int &number , int array[100] , int value)
{
    for(int i = 0 ; i<number; i++)
    {
      
         if(array[i] == value)
             return i ;   
    }
    return -1;
}
bool trueorfulsetypenumber(int &number , int array[100] , int value)
{
   
    return typenumber(number,array,value) != -1 ;

}
void addarray(int &number2 , int x , int array1[100])
{
  number2++;
  array1[number2-1] = x;
}

void numsrandomcopy(int number,int array[100],int array1[100],int &number2)
{
  

  for(int i = 0 ; i < number ; i++)
  { 
     if(!trueorfulsetypenumber(number,array1 , array[i]))
      addarray(number2,array[i],array1);
     
  }

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


fillarray(array,number);

cout<<"array 1 element is :  ";
printarray(number,array);

numsrandomcopy(number,array,array1,number2);

 cout<<"array prime number :  ";
 printarray(number2,array1);
    return 0;
}