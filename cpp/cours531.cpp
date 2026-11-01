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
void swaparraynums( int &A , int &B)
{
  int tempe;
  tempe = A;
  A = B ; 
  B = tempe;
}
void numsrandom(int number,int array[100])
{

  cout<<"array 1 elemnts before shufll : ";
 
  for(int i = 0 ; i<number ; i++)
  {
    array[i]  = i+1;
    cout<<array[i]<<"  ";
   
  }
  cout<<"\n";
}
void numsrandom1(int number,   int array[100] )

{

  cout<<"array 2 elemnts after shufll  : ";
 
  for(int i = 0 ; i<number ; i++)
  {
  
   int endex = readrandomnumber(1,number)-1;
   int endex1 = readrandomnumber(1,number)-1;
    swaparraynums(array[endex],array[endex1]);
  }
}
  void printsuffle(int number, int array[100])
  {
    for (int i = 0 ; i< number ; i++)
    {

        cout<<array[i]<<"  ";
    }

  }
  
int main() {
  srand((unsigned)time(NULL));
  int number = readnumberelament("enter number ? ");

  int array[100];
numsrandom(number,array);
 numsrandom1(number,array);
 printsuffle(number,array);
    return 0;
}