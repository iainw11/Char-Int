#include <iostream>
using namespace std;


void charInt(string a)
{
  for(int i = 0; i < a.length() ; i++)
    {
      if(a.at(i) > 48 && a.at(i) < 58)
      {
        for(int j = 0 ; j <a.at(i) - 48 ; j++)
          {
            if(a.at(i) == 32)
            {cout << " ";}
            cout  << a.at(i+1);
            
          }
      }
    }

  
}



int main() {
  charInt("1H2E3L3L4O5 5W6O7R8L9D");
}