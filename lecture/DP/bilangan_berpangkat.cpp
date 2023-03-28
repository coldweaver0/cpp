#include <iostream>
using namespace std;

int main(){
	int a,n;
	cout<<"Masukkan bilangan positif: ";
	cin>>a;
	
	if (a<0){
		cout<<"Mohon masukkan bilangan positif \nMenutup Program...";
		exit(1);
	}
	
	cout<<"Masukkan nilai n (n>=0): ";
	cin>>n;
	
	if (n<0){
		cout<<"Mohon masukkan nilai n, dengan n>=0 \nMenutup Program...";
		exit(1);
	}
	
	int b=a;	
	if (n==0){
		b=1;
	}
	
	for (int i=1;i<n;++i){
		b*=a;
	}
	
	cout<<"Hasil dari "<<a<<" pangkat "<<n<<" adalah "<<b;
}

