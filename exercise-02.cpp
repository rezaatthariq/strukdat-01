/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Menghitung hasil konversi Celcius ke Fahrenheit dengan menggunakan Function
Tahun		: 2019
*/

#include<iostream>
using namespace std;

float cel2fah(float temp){
	return (temp*9)/5+32;	//rumus konversi celcius ke fahrenheit
}

int main(){
	int celcius=9;
	float fahrenheit = cel2fah(celcius);	//return hasil konversi ke variable fahrenheit
	cout<<"temp is "<<fahrenheit;
}

