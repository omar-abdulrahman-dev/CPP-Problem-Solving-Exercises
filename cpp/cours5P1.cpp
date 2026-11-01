 #include<iostream>
 #include<cmath>
 #include<cstdlib>
 #include<ctime>
 #include<string> 
using namespace std;

enum en_name_choice{ stone = 1 , paper = 2 , scissors = 3};
enum en_name_result{ win = 1 , nowin = 2 , lose = 3};

int read_number_round()
{
    int round;
    
    cout<<"how many round from 1 to 10 ?"<<endl;
    cin>>round;
     
    return round;
}
int readrandomnumber(int from,int to)
{
  
    int random = rand()%(to-from+1)+from;
    
    return random;
}
int choice_machin( )
{

 int  ch_machin;
 int round;
  ch_machin = readrandomnumber(1,3);

 return ch_machin;

}
en_name_choice choice_machin1()
{
   int z =choice_machin();
    if(z == 1)
      return en_name_choice::stone;
    else if( z== 2)
      return en_name_choice::paper;
    else
       return en_name_choice::scissors;
}
int choice_you()
{

   int ch_you;
   cout<<" your choice : [1] stone , [2] paper , [3] scissors ?"<<endl;
   cin>>ch_you;

   return ch_you;


}
en_name_choice choice_you1()
{
   int y = choice_you();
    if(y == 1)
      return en_name_choice::stone;
    else if(y == 2)
      return en_name_choice::paper;
    else
       return en_name_choice::scissors;
}
string from_number_to_string( int choice)

{
  if (choice == en_name_choice::stone)
    return "stone";
  else if (choice == en_name_choice::paper)
    return "paper";
  else
    return "scissors";

}

en_name_result result( int ch_you,int ch_machin)
{


   if(ch_you == ch_machin)
       return en_name_result::nowin;


     if((ch_you ==  en_name_choice::stone&& ch_machin == en_name_choice::scissors) 
      ||(ch_you ==  en_name_choice::paper && ch_machin == en_name_choice::stone) 
      ||(ch_you ==  en_name_choice::scissors&& ch_machin == en_name_choice::paper))
      {
            return en_name_result::win;
      }else
            return en_name_result::lose;     
}
void result1(int x)
{
    
    if(x == en_name_result::lose)    
        cout<<"machin"<<endl;
    else if(x == en_name_result::win)
        cout<<"you"<<endl;
    else
        cout<<"nowin"<<endl;

}

void wonnercounter(int x , int &youwin , int &machinwin , int &nowon)
{
        if(x == en_name_result::lose)    
            machinwin++;
            
        else if(x == en_name_result::win)
             youwin++;
        else
             nowon++;


}
void game_rasult(int round , int &youwin , int &machinwin , int &nowon)
{
cout<<"____________________________________________________________________________________________\n\n";
       cout<<"                             +++ game over +++                                              \n\n";
       cout<<"____________________________________________________________________________________________\n\n";
       cout<<"____________________________________   game result  ________________________________________\n\n\n";
       cout<<"game round = "<<round<<endl;
       cout<<"you won times : "<<youwin<<endl;
       cout<<"machin won times : "<<machinwin<<endl;
       cout<<"drow won times : "<<nowon<<endl;
       if(youwin>machinwin && youwin>nowon)
       {
          system("color 2a");
          cout<<"result final : you wonner"<<endl;
       }      
       else if(machinwin>youwin && machinwin>nowon)
       {
          system("color 4c");
          cout<<"result final : machin wonner"<<endl;
       }
       else
       {
          system("color 60");
          cout<<"result final : drow"<<endl;
       }
}
int main() {
    srand((unsigned)time(NULL));
          char resturt ;

    do
    {
    int round = read_number_round();

    int youwin = 0 , machinwin = 0 , nowon = 0 ;
    for(int i = 1 ; i <= round ; i++)
       { 
          cout<<"round ["<<i<<"] begins : "<<endl<<endl;
          int ch_you = choice_you1();

          cout<<"______________________round["<<i<<"]_____________________________________"<<endl<<endl;
          int ch_machin = choice_machin1();
          cout<<"your choice is : "<<from_number_to_string(ch_you)<<endl;
          cout<<"the machin choice is : "<<from_number_to_string(ch_machin)<<endl;
          int x = result(ch_you,ch_machin);
          cout<<"round winner  : ";
          result1(x);
        
         wonnercounter(x,youwin,machinwin,nowon);
        
          cout<<endl<<endl;

       }
   
       game_rasult(round,youwin,machinwin,nowon);
          cout<<" do you to play reoundes other ? y/n"<<endl;
          cin>>resturt;
    }while (resturt != 'n');
    
    
    return 0;
}