#include <iostream>
#include <string>

using namespace std;

void tampil(int bil1, int bil2, int hasil,string operasi) {
  cout << bil1 <<operasi<< bil2 << " = " << hasil << endl;
}
int perkalian(int bil1,int bil2){
	int hasil = bil1*bil2;
	return hasil;
}

int pertambahan(int bil1, int bil2){
    int hasil = bil1+bil2;
    return hasil;
}

int pengurangan(int bil1, int bil2){
    int hasil = bil1-bil2;
    return hasil;
}

int pembagian(int bil1, int bil2){
    int hasil = bil1/bil2;
    return hasil;
}

int main() {
  int a,b,c;
  string input;

  cout << "Pilih operasi : +,-,*,/" << endl;
  cin >> input;
  if (input == "+"){
  	cout<<"Masukkan bilangan 1 : ";
  	cin >> a;
  	cout<<"Masukkan bilangan 2 : ";
  	cin >> b;
    c = pertambahan(a,b);
    tampil(a, b, c,input);
  }
  else if (input == "-"){
    cout<<"Masukkan bilangan 1 : ";
  	cin >> a;
  	cout<<"Masukkan bilangan 2 : ";
  	cin >> b;
    c = pengurangan(a,b);
    tampil(a, b, c,input);
  }
  else if (input == "*"){
    cout<<"Masukkan bilangan 1 : ";
  	cin >> a;
  	cout<<"Masukkan bilangan 2 : ";
  	cin >> b;
    c = perkalian(a,b);
    tampil(a, b, c,input);
  }
  else if (input == "/"){
    cout<<"Masukkan bilangan 1 : ";
  	cin >> a;
  	cout<<"Masukkan bilangan 2 : ";
  	cin >> b;
    c = pembagian(a,b);
    tampil(a, b, c,input);
  }
  else{
    cout << "Input operasi bilangan salah" << endl;
  }


}