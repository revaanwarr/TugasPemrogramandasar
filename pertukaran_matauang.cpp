#include <iostream>

using namespace std;

int main() {
  int uang;

  // Meminta pengguna memasukkan nilai uang
  cout << "Masukkan nilai uang: ";
  cin >> uang;

  // Memastikan nilai uang merupakan kelipatan 25
  if (uang % 25 != 0) {
    cout << "Nilai uang harus dalam kelipatan 25" << endl;
    return 0;
  }

  // Inisialisasi variabel
  int sisa = uang;
  int pecahan1000 = 0, pecahan500 = 0, pecahan100 = 0, pecahan50 = 0, pecahan25 = 0;

  // Menghitung jumlah pecahan
  while (sisa > 0) {
    pecahan1000 = sisa / 1000;
    sisa %= 1000;

    pecahan500 = sisa / 500;
    sisa %= 500;

    pecahan100 = sisa / 100;
    sisa %= 100;

    pecahan50 = sisa / 50;
    sisa %= 50;

    pecahan25 = sisa / 25;
    sisa %= 25;
  }

  // Menampilkan hasil
  cout << "Jumlah pecahan:" << endl;
  cout << "  1000: " << pecahan1000 << endl;
  cout << "  500: " << pecahan500 << endl;
  cout << "  100: " << pecahan100 << endl;
  cout << "  50: " << pecahan50 << endl;
  cout << "  25: " << pecahan25 << endl;

  return 0;
}