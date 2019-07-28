#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Masukkan Kata:\t";
   cin >> str;

   cout << "\nPilih salah satu:\n";
   cout << "1 = Enkripsi Kata.\n";
   cout << "2 = Deskripsin Kata.\n";
   cin >> x;

	//disini kami menggnakan switch case
   switch(x)
   {
      //case pertama digunakan untuk perintah enkripsi
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //kunci enkripsi adalah huruf pertama di geser ke kanan sebanyak 3 huruf

         cout << "\nHasil Enkripsi: " << str << endl;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //kunci Deskripsi adalah huruf pertama di geser ke kanan sebanyak 3 huruf
      cout << "\nHasil Deskripsi: " << str << endl;
      break;

      default:
         cout << "\nERORR BOSS!!!\n";
   }
   return 0;
}