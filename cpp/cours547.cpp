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
int myraund( float number)
{
   float result = number - int(number);
    int  intpart = int(number);
    if(abs(result) >= 0.5 )
{
      if(number > 0)
         return ++intpart;
      else
         return --intpart;

}
    else 
          return intpart;

}

int main() {

    float number = readnumber();

  cout<<myraund(number)<<endl;
  cout<<round(number)<<endl;

    return 0;
}