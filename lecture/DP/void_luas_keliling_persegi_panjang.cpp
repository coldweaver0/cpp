#include <iostream>
using namespace std;

void hitungLuas(double p, double l) {
    double Luas;
    Luas = p*l;
    cout<< "Luas: " <<Luas<<endl;
}

void hitungKeliling(double p, double l) {
    double Keliling;
    Keliling = 2*(p+l);
    cout<< "Keliling: " <<Keliling;
}

int main() {
    double p1,l1,p2,l2;
    p1 = 5;
    l1 = 3;
    p2 = 9;
    l2 = 7;
    hitungLuas(p1,l1);
    hitungKeliling(p2,l2);
    return 0;
}