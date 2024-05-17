#include <iostream>
#include <string>

using namespace std;

class Robot {
private:
  // Atribut private
  string _nama;
  int _umur;
  string _mbti;

public:
  // Constructor
  Robot(string nama, int umur, string mbti) {
    _nama = nama;
    _umur = umur;
    _mbti = mbti;
  }

  // Method public
  void perkenalkanDiri() {
    cout << "Halo, nama saya " << _nama << "." << endl;
    cout << "Saya berusia " << _umur << " tahun." << endl;
    cout << "Tipe MBTI saya adalah " << _mbti << "." << endl;
  }

  void setNama(string nama) {
    _nama = nama;
  }

  void getNama() const {
    cout << "Nama saya: " << _nama << endl;
  }

  void setUmur(int umur) {
    _umur = umur;
  }

  void getUmur() const {
    cout << "Usia saya: " << _umur << " tahun" << endl;
  }

  void setMbti(string mbti) {
    _mbti = mbti;
  }

  void getMbti() const {
    cout << "Tipe MBTI saya: " << _mbti << endl;
  }
};

int main() {
  // Membuat objek robot
  Robot robot1("R2-D2", 20, "ISTJ");

  // Memperkenalkan diri
  robot1.perkenalkanDiri();

  // Mengubah nama
  cout << "\nMengubah nama robot..." << endl;
  robot1.setNama("C-3PO");
  robot1.getNama();

  // Mengubah umur
  cout << "\nMengubah umur robot..." << endl;
  robot1.setUmur(30);
  robot1.getUmur();

  // Mengubah tipe MBTI
  cout << "\nMengubah tipe MBTI robot..." << endl;
  robot1.setMbti("ENTJ");
  robot1.getMbti();

  return 0;
}