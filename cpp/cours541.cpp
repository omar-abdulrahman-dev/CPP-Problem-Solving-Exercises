#include <iostream>
using namespace std;
 
void readarray(int &number,int array[100])
{
  number = 6;

  array[0]= 10;
  array[1]= 20;
  array[2]= 30;
  array[3]= 30; 
  array[4]= 20;
  array[5]= 10;

}

bool revesenumber2(int number,int array[100])
{ 
    for(int i = number-1 ; i>0 ; i--)
    {
       if(array[i] != array[number-1-i])
           return false;
    }
    return true;
}
void checkreversenumber(int number,int array[100])
{
    
        if(revesenumber2(number,array))
            cout<<"the number palindrom"<<endl;
        else
           cout<<"the number notpalindrom"<<endl;
 
}
void printarray(int number , int array[100])
{

     for(int i = 0 ; i<number ; i++)
  {
   
    cout<<array[i]<<"  ";
   
  }
  cout<<"\n";
}


int main() {
   
    int number = 0;
     int array[100];
     readarray(number,array);
    printarray(number,array);
   checkreversenumber(number,array);
    return 0;
}