#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c;

    cout << "Enter side A: ";
    cin >> a;
    cout << endl << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "C = " << c;

    return 0;
}