#include <iostream>
using namespace std;

void printnumbers_row()
{
    cout<<"\t";

    for(int i=1 ;i<=10 ;i++)
    {
        cout<<i<<"\t";
    }
                     cout<<endl;

}
void multiplaction()
{
    
    for(int i=1 ;i<=10 ;i++)
    {
        cout<<"  "<<i<<"\t";
          for(int j=1 ;j<=10 ;j++) 
             {
                cout<<i*j<<"\t";
        
             }
                     cout<<endl;

    }

}
int main() {
    printnumbers_row();
    multiplaction();


    return 0;
}