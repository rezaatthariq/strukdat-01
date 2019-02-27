/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Program menampilkan angka 1-100 dengan ketentuan kelipatan 3 diganti fizz
			  dan kelipatan 5 diganti dengan buzz, dan kelipatan 15 diganti fizzbuzz
Tahun		: 2019
*/

#include<iostream>
using namespace std;

void fizzbuzz(int i);

int main(){
	int i;
	fizzbuzz(i);
}

void fizzbuzz(int i){
	for(int i=1;i<=100;i++){
		if(i%15==0){	//perlakuan untuk kondisi jika i bernilai kelipatan 15
			cout<<"fizzbuzz ";
		}
		else if(i%3==0){	//perlakuan untuk kondisi jika i bernilai kelipatan 3
			cout<<"fizz ";
		}
		else if(i%5==0){	//perlakuan untuk kondisi jika i bernilai kelipatan 5
			cout<<"buzz ";
		}
		else cout<<i<<" ";
	}
}
