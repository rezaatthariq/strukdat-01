/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: meng-swap nilai x dengan y menggunakan swap
Tahun		: 2019
*/

#include<iostream>
using namespace std;

void swap(int& x,int& y);

int main(){
	int x=5;
	int y=4;
	cout<<"x is "<<x<<endl;	
	cout<<"y is "<<y<<endl;
	swap (x,y);
	cout<<"After swap"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
}

void swap(int& x,int& y){
	int temp;	
	temp=x;		//masukkan nilai x ke wadah kosong,sehingga nilai x kosong, temp berisi
	x=y;		//masukkan nilai y ke dalam x
	y=temp;		//masukkan nilai temp ke dalam y
}
