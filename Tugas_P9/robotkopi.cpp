#include <iostream>
#include <string>

using namespace std;

class RobotKopi {
private:
  // Atribut private
  string _jenisKopi;
  string _size;

public:
  // Constructor
  RobotKopi(string jenisKopi, string size) {
    _jenisKopi = jenisKopi;
    _size = size;
  }

  // Method public
  void pesanKopi() {
    cout << "Robot memesan kopi " << _jenisKopi << " size " << _size << "." << endl;
  }

  void setJenisKopi(string jenisKopi) {
    _jenisKopi = jenisKopi;
  }

  void getJenisKopi() const {
    cout << "Jenis kopi yang dipesan: " << _jenisKopi << endl;
  }

  void setSize(string size) {
    _size = size;
  }

  void getSize() const {
    cout << "Size kopi yang dipesan: " << _size << endl;
  }
};

int main() {
  // Membuat objek robot kopi
  RobotKopi robotKopi1("Espresso", "Small");

  // Memesan kopi
  robotKopi1.pesanKopi();

  // Mengubah jenis kopi
  cout << "\nMengubah jenis kopi..." << endl;
  robotKopi1.setJenisKopi("Latte");
  robotKopi1.getJenisKopi();

  // Mengubah size kopi
  cout << "\nMengubah size kopi..." << endl;
  robotKopi1.setSize("Medium");
  robotKopi1.getSize();

  return 0;
}