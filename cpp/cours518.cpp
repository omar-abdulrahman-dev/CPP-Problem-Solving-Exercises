#include <iostream>
using namespace std;
 string readtext(string massege)
 {
   string text;
   cout<<massege<<endl;
   getline(cin,text);
  return text;
 }
 string encrypttext(string text , int kay)
 {
   for(int i = 1; i <= text.length() ; i++)
   {
   text[i] = char((int)text[i]+kay);

   }
 return text;
 }
 string decrypttext(string text , int kay)
 {
   for(int i = 1; i <= text.length() ; i++)
   {
   text[i] = char((int)text[i]-kay);

   }
 return text;
}
int main() {
    const int kay = 2;
    string text = readtext("enter text ? ");

    cout <<"text before encrypttext = "<<text<<endl;
    cout <<"text after encrypttext = "<<encrypttext(text , kay)<<endl;
    cout <<"text after decrypttext = "<<decrypttext(encrypttext(text ,kay), kay)<<endl;

    return 0;
}