#include <iostream>
#include <cmath>

using namespace std;

void name() {
    cout << "Благомир Бегизов" << endl;
}

void roots(double a, double b, double c) {
    if (a == 0 && b == 0 && c == 0) {
        cout << "x - lyuboe chislo" << endl;
    } else if (a == 0 && b == 0) {
        cout << "Korney net" << endl;
    } else if (a == 0) {
        cout << "x = " << -c / b << endl;
    } else {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
        } else if (d == 0) {
            cout << "x = " << -b / (2 * a) << endl;
        } else {
            cout << "Korney net" << endl;
        }
    }
}

void del() {
    int n;
    cout << "Vvedite chislo: ";
    cin >> n;
    if (n % 3 == 0) {
        cout << "Delitsya na 3" << endl;
    } else {
        cout << "Ne delitsya na 3" << endl;
    }
}

int main() {
    double a, b, c;
    char s;

    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    cout << "Vvedite simvol: ";
    cin >> s;

    if (s == 'C') {
        name();
    } else if (s == 'r') {
        roots(a, b, c);
    } else if (s == 's') {
        del();
    } else {
        cout << "Nevernyy simvol" << endl;
    }

    return 0;
}
