#include <conio.h>
#include <iostream.h>

void cek_bil(int sample){
	if(sample % 2 == 1){
		cout<<"Ganjil\n";
	}else{
	cout<<"Genap\n";
	}
	
}
int main(){
	int input_bil;
	cout<<"Masukkan bilangan : ";
	cin>> input_bil;
	cek_bil(input_bil);
}
