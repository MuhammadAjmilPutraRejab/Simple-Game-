#include <iostream> // Untuk input dan output
#include <cstdlib> // Untuk fungsi random (rand)
#include <ctime> // Untuk mendapatkan waktu saat ini (sebagai seed random)

using namespace std;

int main() {
	// mengatur seed untuk angka acak
	srand (static_cast<unsigned int>(time(0)));
	
	//Angka yang harus ditebak
	int angkaRahasia = rand() % 100 + 1; // angka antara 1 sampai 100 
	int tebak; //Input tebakan dari pemain 
	int percobaan = 0; //Jumlah percobaan 
	
	cout << "== Selamat Datang di Game Tebak Angka ===\n";
	cout << "Saya telah memilih angka antara 1 hingga 100\n";
	cout << "Bisakah kamu menebaknya?\n\n";
	
	//loop permainan
	do{
		cout << "Masukkan Tebakanmu :";
		cin >> tebak;
			percobaan++;
			
			if (tebak > angkaRahasia){
				cout << "Terlalu tinggi! Coba lagi.\n";
			}  else if (tebak < angkaRahasia) {
            cout << "Terlalu rendah! Coba lagi.\n";
        } else {
            cout << "Selamat! Kamu menebak dengan benar dalam " << percobaan << " percobaan.\n";
        }
    } while (tebak != angkaRahasia);

    cout << "Terima kasih telah bermain!\n";

    return 0;
}

