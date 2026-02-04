#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("in2.dat");
    double a;
    fin >> a;

    cout << "a = " << a << endl;

    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a4;
    double a12 = a8 * a4;
    double a13 = a12 * a;

    cout << "a^13 = " << a13 << endl;

    fin.close();
    return 0;
}