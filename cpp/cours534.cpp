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
void numsrandom(int number, int array[100])
{

  cout<<"array elemnts : ";
 
  for(int i = 0 ; i<number ; i++)
  {
    array[i]  = readrandomnumber(1,100);
    cout<<array[i]<<"  ";
  
  }
  cout<<"\n";
 
}
void checknumber2inarray(int number ,int number2,  int array[100])
{
   bool found = false;
   for(int i = 0 ; i<number ; i++)
   {
     if (array[i]==number2)
        {
            
        cout<<"the number2 posation : - "   << i<<endl;
         cout<<"the number2 order : - "   << i+1<<endl;
         found = true;
        }
      
   }
     if(!found)
      cout<<"not found "<<endl;
}
int main() {
  srand((unsigned)time(NULL));
  int number = readnumberelament("enter number ? ");

    int array[100];

  numsrandom(number,array);

  int number2;
  cout<<"pleas enter number2 the resarche"<<endl;
  cin>>number2;

  checknumber2inarray(number,number2,array);
    return 0;
}