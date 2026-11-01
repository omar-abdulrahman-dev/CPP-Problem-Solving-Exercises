#include <iostream>
using namespace std;
 
string read_password(string massege)
{
string password ;


   cout<<massege<<endl;
   cin>>password;
  return password;

}
void loopsnumber()
{
    string password;
   int i= 0;
do
{
   password = read_password(" enter the password");
    i++;
    cout<<"trail "<<i<<" is "<<password<<endl;
}while (password != "AAF");
cout<<"password is AAF"<<endl;
cout<<"founded after  " <<i<<endl;
}
int main() {
   loopsnumber();
    return 0;
}