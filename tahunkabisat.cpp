#include <iostream>

using namespace std;

int main() {
  int tahun;

  // Input tahun
  cout << "Program C Untuk Cek Tahun Kabisat" << endl;
  cout << "Masukkan suatu tahun: ";
  cin >> tahun;

  // Cek tahun kabisat
  if (tahun % 400 == 0) {
    cout << tahun << " Merupakan Tahun Kabisat" << endl;
  } else if (tahun % 100 == 0) {
    cout << tahun << " Bukan Tahun Kabisat" << endl;
  } else if (tahun % 4 == 0) {
    cout << tahun << " Merupakan Tahun Kabisat" << endl;
  } else {
    cout << tahun << " Bukan Tahun Kabisat" << endl;
  }

  return 0;
}