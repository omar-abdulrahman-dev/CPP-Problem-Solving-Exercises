#include <iostream>
using namespace std;
 
int loopsnumber(string massege)
{
int number = 0;
do
{
   cout<<massege<<endl;
   cin>>number;

} while (number <= 0);
 return number;
}
void loopsnumber()
{
   for( int i = 65; i<=90 ; i++)
   {

     for(int m = 65 ; m <= 90; m++)
     {

        for(int j = 65; j <=90; j++)
        {
       
            cout<<char(i)<<char(m)<<char(j)<<endl;
        }
     }
   }

}

int main() {
   loopsnumber();
    return 0;
}