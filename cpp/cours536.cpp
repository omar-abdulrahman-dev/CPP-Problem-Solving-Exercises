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
void yesornonumer( int array[100])
{
int i = 0;
int more ;
do
{ 
   array[i]= readnumberelament("enter the number ? ");

   cout<<" do yue want more number ? [0]:no / [1]yes"<<endl;
   cin>>more;
   i++;
} while (more!=0);
cout<<"array lengthe is : "<<i<<endl;
 cout <<"array elemnt : ";
 for(int m = 0 ; m < i ;m++)
    {
      cout <<array[m]<<" ";

    }
}

int main() {
  srand((unsigned)time(NULL));
   int array[100];
 yesornonumer(array);
 
    return 0;
}