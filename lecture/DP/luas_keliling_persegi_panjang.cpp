#include <iostream>
using namespace std;

double hitungLuas(double p,double l) {
    double Luas;
    Luas = p*l;
    return Luas;
}

double hitungKeliling(double p,double l) {
    double Keliling;
    Keliling = 2*(p+l);
    return Keliling;
}

int main() {
    double p1,l1,Luas1,p2,l2,Keliling1;
    p1 = 5;
    l1 = 3;
    Luas1 = hitungLuas(p1,l1);
    cout << "luas: " <<Luas1<<endl;
    p2 = 7;
    l2 = 4;
    Keliling1 = hitungKeliling(p2,l2);
    cout << "keliling: " <<Keliling1;
    return 0;
}