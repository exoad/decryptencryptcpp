#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Input a string: \n";
   cin >> str;
   cout << "Options:\n";
   cout << "1 = Encrypt the string.\n";
   cout << "2 = Decrypt the string.\n";
   cin >> x;
   switch(x){
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++){
            str[i] = str[i] + 2;
         cout << "Your encrypted string:\t" << str << endl;
         }
         break;
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++){
         str[i] = str[i] - 2;

      cout << "Your decrypted String:\t" << str << endl;
      }
      break;

      default:
         cout << "Error";
   }
   return 0;
}
