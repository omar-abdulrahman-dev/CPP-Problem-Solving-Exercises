#include <iostream>
using namespace std;
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.
 
 enum enchartype{ small=1,capetal=2,specail=3,degit=4};

int randumnumbers(int from , int to)
{
 int random = rand()%(to-from+1)+from;
return random;
}
char printchar(enchartype chartype)
{
  switch (chartype)
  {
  case enchartype::small:
  {
   return char(randumnumbers(97,122));
  }
  case enchartype::capetal:
  {
   return char(randumnumbers(65,90));
  }
  case enchartype::specail:
  {
   return char(randumnumbers(33,47));
  }
  case enchartype::degit:
  {
   return randumnumbers(48,57);
    
  }}
  return '\0';
}
int main() {
  srand((unsigned)time(NULL));
  
  cout<<printchar(enchartype::small)<<endl;
  cout<<printchar(enchartype::capetal)<<endl;
  cout<<printchar(enchartype::specail)<<endl;
  cout<<printchar(enchartype::degit)<<endl;

    return 0;
}