#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class file {
	public:
  	ifstream plik1;
    ofstream plik2;
    
    file();
    ~file();
};

file::file() { 
    plik1.open("c:\\palindromy.txt");
    plik2.open("c:\\wynikJSON.txt");
}

file::~file() {
	plik1.close();
    plik2.close();
}

class obiliczenia {
	public:
		file file;
		vector<int> pojedynicze_cyfry;
		vector<int> moc_cyfry;
		
		int power(int number);
		int wymnoz_cyfry(vector<int>);
		int rozbij_na_cyfry(int number);
};

int obiliczenia::rozbij_na_cyfry(int number) {
	int cyfra;
	
	for (int i=0; i<pojedynicze_cyfry.size(); i++) {
		pojedynicze_cyfry[i] = 0;
	};
		
	while (number > 0) {
		cyfra = number % 10;
		pojedynicze_cyfry.push_back(cyfra);
		number = number / 10;
	};
	
};

int main(int argc, char** argv) {	
	obiliczenia zad;
	
	zad.rozbij_na_cyfry(678);
	
	return 0;
}
