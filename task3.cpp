#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("in3.dat");
    ofstream fout("out3.dat");

    double alpha, beta, c;
    fin >> alpha >> beta >> c;

    cout << "alpha = " << alpha << " beta = " << beta << " c = " << c << endl;

    double gamma = 180 - alpha - beta;

    double rad = 3.141592653589793 / 180;
    double A = alpha * rad;
    double B = beta * rad;
    double C = gamma * rad;

    double a = c * sin(A) / sin(C);
    double b = c * sin(B) / sin(C);

    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    double R = a * b * c / (4 * S);
    double r = S / p;

    fout << "R = " << R << endl;
    fout << "r = " << r << endl;

    fin.close();
    fout.close();
    return 0;
}