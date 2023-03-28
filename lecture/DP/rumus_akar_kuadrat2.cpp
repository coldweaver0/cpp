#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	float a,b,c,d;
	float x1,x2;
	cout<<"Masukkan angka a (selain nol): ";
	cin>>a;
	
	if (a==0){
	cout<<"Mohon masukkan angka selain nol \nMenutup Program...";
	exit(1);
	}
	
	cout<<"Masukkan angka b: ";
	cin>>b;
	cout<<"Masukkan angka c: ";
	cin>>c;
	
	x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
	x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
	cout<<"Nilai dari x1: "<<setprecision(2)<<x1<<endl<<"Nilai dari x2: "<<setprecision(2)<<x2<<endl;
	
	if ((b*b-4*a*c) < 0){
		cout<<"b2-4ac < 0, maka akarnya imajiner";
	}
	else if ((b*b-4*a*c) > 0){
		cout<<"b2-4ac > 0, maka akarnya rill dan x1 tidak sama dengan x2";
	}
	else {
		cout<<"b2-4ac = 0, maka akarnya rill dan x1 sama dengan x2";
	}
}
