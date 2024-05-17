#include <iostream>
#include <string>

using namespace std;

class RobotKopi {
public:
  // Atribut public
  string jenisKopi;
  string size;

  // Constructor
  RobotKopi(string jenisKopi, string size) {
    this->jenisKopi = jenisKopi;
    this->size = size;
  }

  // Method public
  void pesanKopi() {
    cout << "Robot memesan kopi " << jenisKopi << " size " << size << "." << endl;
  }

  void setJenisKopi(string jenisKopi) {
    this->jenisKopi = jenisKopi;
  }

  void getJenisKopi() const {
    cout << "Jenis kopi yang dipesan: " << jenisKopi << endl;
  }

  void setSize(string size) {
    this->size = size;
  }

  void getSize() const {
    cout << "Size kopi yang dipesan: " << size << endl;
  }
};

int main() {
  // Membuat objek robot kopi
  RobotKopi robotKopi1("Espresso", "Small");

  // Memesan kopi
  robotKopi1.pesanKopi();

  // Mengubah jenis kopi
  cout << "\nMengubah jenis kopi..." << endl;
  robotKopi1.jenisKopi = "Latte"; // Akses langsung ke atribut public
  robotKopi1.getJenisKopi();

  // Mengubah size kopi
  cout << "\nMengubah size kopi..." << endl;
  robotKopi1.size = "Medium"; // Akses langsung ke atribut public
  robotKopi1.getSize();

  return 0;
}