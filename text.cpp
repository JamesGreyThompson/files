#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
ofstream out{"abc.txt"};
if (out)
{
out <<a<<" "<<b<<" "<<c;
}else 
cout <<"Error writing file";
//out.write (reinterpet_cast <char *> (&a), sizeof (a));
//out.write (reinterpet_cast <char *> (&b), sizeof (b));
//out.write (reinterpet_cast <char *> (&c), sizeof (c));





   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
   return 0;
}
