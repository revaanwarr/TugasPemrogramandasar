#include <iostream>
#include <string>

using namespace std;

string hitungTurunan(string rumus_kecepatan) {
  string turunan = "";

  // Menentukan turunan berdasarkan rumus kecepatan
  if (rumus_kecepatan == "v = s/t") {
    turunan = "1/t";
  } else if (rumus_kecepatan == "v = s/t + at") {
    turunan = "1/t + a";
  } else if (rumus_kecepatan == "v = u + at") {
    turunan = "a";
  } else if (rumus_kecepatan == "v = u + at + 0.5*a*t^2") {
    turunan = "a + 0.5*a*t";
  }

  return turunan;
}

int main() {
  string rumus_kecepatan;

  // Meminta pengguna memasukkan rumus kecepatan
  cout << "Masukkan rumus kecepatan: ";
  cin >> rumus_kecepatan;

  // Menghitung turunan
  string turunan = hitungTurunan(rumus_kecepatan);

  // Menampilkan hasil
  cout << "Turunan dari rumus kecepatan adalah: " << turunan << endl;

  return 0;
}