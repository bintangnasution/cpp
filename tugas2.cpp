#include <conio.h>
#include <iostream.h>

void luas_persegi_panjang(int panjang, int lebar){
	int luas = panjang*lebar;
	cout<<"Luas persegi panjang adalah : "<<luas<<"\n";
}
int main(){
	int p,l;
	cout<<"Masukkan Panjang : ";
	cin>>p;
		cout<<"Masukkan Lebar : ";
	cin>>l;
	luas_persegi_panjang(p,l);
	
}
