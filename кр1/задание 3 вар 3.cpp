#include <iostream>
#include <iomanip>

using namespace std;

double calc(double x) {
    return 6.4 * x - 8;
}

int main() {
    double x;

    cout << "Введите x: ";
    cin >> x;

    double result = calc(x);

    cout << fixed << setprecision(2);
    cout << "Результат: " << result << endl;

    return 0;
}
