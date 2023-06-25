#include <iostream>
#include <string>
using namespace std;

int main(){
	int broj_racuna;
	cout << "Unesi broj racuna: ";
	cin >> broj_racuna;
	float iznos;
	float ukupno = 0.0;
	float baksa;
	float ukupno_baksa;
	for (int i = 0; i < broj_racuna; i++) {
		cout << "Unesi iznos " << i + 1 << " racuna: ";
		cin >> iznos;
		ukupno = ukupno + iznos;
	}
	baksa = ukupno * 0.1;
	ukupno_baksa = ukupno + baksa;
	cout << "Iznos bez bakse" << ukupno<<endl;
	cout << "Baksa: " << baksa<<endl;
	cout << "Ukupno s baksom: " << ukupno_baksa << endl;
}
