#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float readnumber()
{
    float number;
    cout<<" enter the number ? "<<endl;
    cin>>number;

    return number;
}
int myfloor( float number)
{
   
   
    int result = number - int(number);
   if(abs(result)>0)
   {
      if(number > 0)
         return int(number);

      else 
          return int(number)-1;
   }
   else
      return number;

}
int main() {

    float number = readnumber();

  cout<<myfloor(number)<<endl;
  cout<<floor(number)<<endl;

    return 0;
}