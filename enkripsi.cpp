#include<iostream>  //mendeklarasikan cout, cin yang artinya input output standar
#include<string.h> //merupakan file header yang berfungsi untuk melakukan manipulasi string
#include<fstream>  //membaca isi file sekaligus memberikan output ke dalam file tersebut. output yang dimaksud adalah file output.txt
using namespace std; // instruksi yang dapat kita berikan kepada aplikasi compiler terkait penggunaan fungsi dalam sebuah kerangka yagn sama. 

int main() //memberikan nilai balik menurut type datanya, dan karena memiliki nilai balik maka diberikan perintah return nilai
{
	    system("cls"); //membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.
    //printf merupakan fungsi keluaran yang digunakan untuk menampilkan informasi/pesan kelayar secara terformat (menentukan tipe data yang akan dikeluarkan).
	printf(R"EOF( 
       _______  __    _  ___   _  ______    ___   _______  _______  ___      
      |       ||  |  | ||   | | ||    _ |  |   | |       ||       ||   |     
      |    ___||   |_| ||   |_| ||   | ||  |   | |    _  ||  _____||   |     
      |   |___ |       ||      _||   |_||_ |   | |   |_| || |_____ |   |     
      |    ___||  _    ||     |_ |    __  ||   | |    ___||_____  ||   |     
      |   |___ | | |   ||    _  ||   |  | ||   | |   |     _____| ||   |     
      |_______||_|  |__||___| |_||___|  |_||___| |___|    |_______||___|
)EOF");
         cout << "\n\n\n\t\t\tTekan Enter untuk memulai"; //membuat tampilan pada layar "Tekan Enter untuk memulai"
		 
	
         cin.get(); //Pada perintah cin.getline(nama_variabel, ukuran_variabel), dapat membaca spasi pada karakter data yang kita inputkan tetapi kita harus memberikan nama variabel dan ukuran variabel didalam perintah cin.getline
    
	char string[1000]; //adalah salah satu tipe data yang memungkinkan kita untuk memesan memori berformat text (huruf, angka, dan simbol) dengan karakter tunggal.
    cout << "\n\n\nEnter string : ";
    gets(string); //memiliki kegunaan sebagai input data pada program, namun fungsi ini hanya dapat melakukan input data yang berbasis karakter sehingga data - data yang menggunakan numerik tidak bisa diselesaikan dengan fungsi ini
	cout << "\n\n\n\t\t*Output dapat anda cek di dalam Folder*";

    int length;
    length=strlen(string);
    ofstream out("output.txt"); //digunakan untuk output “menulis ke file output.txt“.
    ifstream in; //untuk memberikan input dari file.
    for(int i=0; i<length; i++)
    {
        switch(string[i])
        {
            case 'a' :
            case 'A' :
                {
                    out << ".- ";
                    break;
                }
            case 'b' :
            case 'B' :
                {
                    out << "-... ";
                    break;
                }
            case 'c' :
            case 'C' :
                {
                    out << "-.-. ";
                    break;
                }
            case 'd' :
            case 'D' :
                {
                    out << "-.. ";
                    break;
                }   
            case 'e' :
            case 'E' :
                {
                    out << ". ";
                    break;
                }
            case 'f' :
            case 'F' :
                {
                    out << "..-. ";
                    break;
                }
            case 'g' :
            case 'G' :
                {
                    out << "--. ";
                    break;
                }
            case 'h' :
            case 'H' :
                {
                    out << ".... ";
                    break;
                }
            case 'i' :
            case 'I' :
                {
                    out << ".. ";
                    break;
                }   
            case 'j' :
            case 'J' :
                {
                    out << ".--- "; 
                    break;
                }
            case 'k' :
            case 'K' :
                {
                    out << "-.- ";
                    break;
                }
            case 'l' :
            case 'L' :
                {
                    out << ".-.. ";
                    break;
                }
            case 'm' :
            case 'M' :
                {
                    out << "-- ";
                    break;
                }
            case 'n' :
            case 'N' :
                {
                    out << "-. ";
                    break;
                }   
            case 'o' :
            case 'O' :
                {
                    out << "--- ";
                    break;
                }
            case 'p' :
            case 'P' :
                {
                    out << ".--. ";
                    break;
                }
            case 'q' :
            case 'Q' :
                {
                    out << "--.- ";
                    break;
                }
            case 'r' :
            case 'R' :
                {
                    out << ".-. ";
                    break;
                }
            case 's' :
            case 'S' :
                {
                    out << "... ";
                    break;
                }   
            case 't' :
            case 'T' :
                {
                    out << "- ";
                    break;
                }
            case 'u' :
            case 'U' :
                {
                    out << "..- ";
                    break;
                }
            case 'v' :
            case 'V' :
                {
                    out << "...- ";
                    break;
                }
            case 'w' :
            case 'W' :
                {
                    out << ".-- ";
                    break;
                }
            case 'x' :
            case 'X' :
                {
                    out << "-..- ";
                    break;
                }
            case 'y' :
            case 'Y' :
                {
                    out << "-.-- ";
                    break;
                }
            case 'z' :
            case 'Z' :
                {
                    out << "--.. ";
                    break;
                }
            case ' ' :
                {
                    out << " /  ";
                    break;
                }
            case '0' :
                {
                    out << "----- ";
                    break;
                }
            case '1' :
                {
                    out << ".---- ";
                    break;
                }
            case '2' :
                {
                    out << "..--- ";
                    break;
                }
            case '3' :
                {
                    out << "...-- ";
                    break;
                }
            case '4' :
                {
                    out << "....- ";
                    break;
                }
            case '5' :
                {
                    out << "..... ";
                    break;
                }
            case '6' :
                {
                    out << "-.... ";
                    break;
                }
            case '7' :
                {
                    out << "--... ";
                    break;
                }
            case '8' :
                {
                    out << "---.. ";
                    break;
                }
            case '9' :
                {
                    out << "----. ";
                    break;
                }
            case ',' :
                {
                    out << "--..-- ";
                    break;
                }
            case '.' :
                {
                    out << ".-.-.- ";
                    break;
                }
            case ';' :
                {
                    out << "-.-.-. ";
                    break;
                }
            case ':' :
                {
                    out << "---... ";
                    break;
                }				
            case '?' :
                {
                    out << "..--.. ";
                    break;
                }				
            case '!' :
                {
                    out << "---. ";
                    break;
                }	
            case '"' :
                {
                    out << ".----. ";
                    break;
                }
            case '(' :
                {
                    out << "-.--. ";
                    break;
                }
            case ')' :
                {
                    out << "-.--.- ";
                    break;
                }	
        }


    }

    return 0;    

}