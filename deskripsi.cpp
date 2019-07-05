#include <cstdlib>  //mendefinisikan beberapa fungsi , termasuk manajemen memori dinamis, pembuatan angka acak, integer aritmatika, pencarian, pengurutan dan konversi
#include <fstream>  //Menggunakan fstream, program bisa membaca isi file sekaligus memberikan output ke dalam file tersebut
#include <iostream> //mendeklarasikan cout, cin yang artinya input output standar
#include <string>   //merupakan file header yang berfungsi untuk melakukan manipulasi string  
#include <sstream>  //digunakan untuk merubah semua tipe data yang diinputkan user ke string, dan merubah tipe string ke data lain.
using namespace std; //untuk memberitahukan kepada kompiler bahwa kita akan menggunakan semua fungsi

const int Kode = 47; //mendeklarasikan tipe data integer untuk variabel Kode bernilai 47 dan bersifat permanen

string KodeMorse = " abcdefghijklmnopqrstuvwxyz0123456789,.;:?!'()";  //merupakan daftar kammus abjad dan angka yang nantinya akan di proses untuk di enkripsi 
string morseKunci[Kode] = {"/", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
                         "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
                         "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "--..--",
                         ".-.-.-", "-.-.-.", "---...", "..--..", "---.", ".----.", "-.--.", "-.--.-"};// Morse code internasional
int main()
{

    system("cls"); //membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.
    printf(R"EOF(
    ______   _______  _______  ___   _  ______    ___   _______  _______  ___  
   |      | |       ||       ||   | | ||    _ |  |   | |       ||       ||   | 
   |  _    ||    ___||  _____||   |_| ||   | ||  |   | |    _  ||  _____||   | 
   | | |   ||   |___ | |_____ |      _||   |_||_ |   | |   |_| || |_____ |   | 
   | |_|   ||    ___||_____  ||     |_ |    __  ||   | |    ___||_____  ||   | 
   |       ||   |___  _____| ||    _  ||   |  | ||   | |   |     _____| ||   | 
   |______| |_______||_______||___| |_||___|  |_||___| |___|    |_______||___|
)EOF");
 
         cout << "\n\n\n\t\t\tTekan Enter untuk memulai";
         cin.get();

	int posisiBaris = 1;
    string userIn = "";
    cout << "\n\n\nMasukkan Plaintext : " ; 
    getline(cin,userIn); //Pada perintah gets juga dapat membaca spasi pada karakter yang kita inputkan namun pada perintah ini kita harus menambahkan Preprocessor #include <stdio.h> 

    string MorseAktif = "";
    istringstream plaintochiper(userIn); 

    while (plaintochiper >> MorseAktif) {
        int i = 0;  
        int flag = 1;   

        for (int m = 0; m < MorseAktif.length(); m++) {
            //Mencari code morse yang sama dan membuat menjadi cipher text yang dapat dibaca
            while (i < Kode) {

                if (MorseAktif == morseKunci[i]) {
                    cout << KodeMorse.at(i);
                    flag = 0;
                    //membuat baris baru bila output terlalu banyak
                    if (posisiBaris > 9999) {
                        cout << "\n ";
                        posisiBaris = 0;//mereset posisiBaris 0
                    }
                posisiBaris++;
                }
            i++;
            }
            // jika tidak ditemukan kunci yang sama, maka akan menghasilkanoiutput X
            if (flag) {
                cout << "X";
              //membuat baris baru bila output terlalu banyakd
                if (posisiBaris > 12) {
                    cout << "\n";
                    posisiBaris = 0;//mereset posisiBaris ke 0
                }
                posisiBaris++;
            }
        }
    }
	return 0; //mengakhiri program
}
