#include <iostream>
#include <string>
using namespace std;

void readnumber(int &number)
{
    cout<<" enter the number ? "<<endl;
    cin>>number;
}
int myabs(int &number)
{
   
    if(number > 0 )
       return number;
    else 
       return number*-1;

}

int main() {
    int number = 0;
  readnumber(number);

  cout<<myabs(number)<<endl;
  cout<<abs(number)<<endl;

    return 0;
}