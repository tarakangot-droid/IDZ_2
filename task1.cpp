#include <iostream>
using namespace std;

int main() {
    double v0, v, S;
    cin >> v0 >> v >> S;

    v0 = v0 * 1000 / 3600;
    v = v * 1000 / 3600;

    double a = (v * v - v0 * v0) / (2 * S);
    double t = (v - v0) / a;

    cout << "a = " << a << " m/s^2" << endl;
    cout << "t = " << t << " s" << endl;

    return 0;
}