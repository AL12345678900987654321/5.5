#include <iostream>
#include <cmath>

using namespace std;

int recursionDepth = 0;

double power(double x, int n, int currentDepth) {
    if (currentDepth > recursionDepth) {
        recursionDepth = currentDepth;
    }

    cout << "Рівень рекурсії: " << currentDepth << ", n = " << n << endl;

    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1 / power(x, -n, currentDepth + 1);
    }
    else {
        return x * power(x, n - 1, currentDepth + 1);
    }
}

int main() {
    double x;
    int n;

    cout << "Введіть дійсне число x: ";
    cin >> x;
    cout << "Введіть цілий показник степеня n: ";
    cin >> n;

    recursionDepth = 0;

    double result = power(x, n, 1);

    cout << x << " у степені " << n << " дорівнює " << result << endl;
    cout << "Максимальна глибина рекурсії: " << recursionDepth << endl;

    return 0;
}
