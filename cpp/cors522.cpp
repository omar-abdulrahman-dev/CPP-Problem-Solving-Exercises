#include <iostream>
using namespace std;
int readnumber(string massege)
{
  int number;
  do
  {

    cout<<massege<<endl;
    cin>>number;

  } while (number < 0);
  return number;

}
void store_arry(int number ,int arry[100])
{ 
   cout<<"enter arry elament ?"<<endl;
    for(int i=0; i<number ; i++)
    {
      cout<<"element ["<<i+1<<"] :";
      cin>>arry[i];
    }
}

void oregenalarry(int number , int arry[100])
{
  cout<<"orignal arry : ";
    for(int m = 0; m < number ; m++)
    {
      cout<<arry[m];

    }
 cout<<"\n";
}
int timenumber2(int number,int arry[100] , int &number2)
{
    
  int sum = 0;
   for(int l = 1; l<number ; l++)
     {
       if(arry[l]==number2)
           sum++;
     }

     return sum;
}


int main() {

int arry[100];
int number2;
int number = readnumber("enter number ?");
store_arry(number, arry);
oregenalarry(number,arry);

cout<<"enter number ?"<<endl;
cin>>number2;

cout<<number2<<"repetaed"<<timenumber2(number,arry,number2);
   //int x;
 //  cin >> x;

  //  int arr[x];
  //  cout<<"enter array elements: "<<endl;
  //  for(int i=0;i<x;i++)
   // {
   //     cout<<"element ["<<i+1<<"] :";
   //     cin>>arr[i];
   //     cout<<"\n";
   // }
   // int z,y=0;
   // cout<<"enter the number you want to check:";
   // cin>>z;
   // for(int i=0;i<x;i++)
   // {
   //     if(arr[i]==z)
   //         y++;
   // }
   // cout<<y<<endl;

    return 0;
}