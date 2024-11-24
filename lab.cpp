#include <iostream>
#include <cmath>

using namespace std;

int recursionDepth = 0;

double power(double x, int n, int currentDepth) {
    if (currentDepth > recursionDepth) {
        recursionDepth = currentDepth;
    }

    cout << "г���� ������: " << currentDepth << ", n = " << n << endl;

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

    cout << "������ ����� ����� x: ";
    cin >> x;
    cout << "������ ����� �������� ������� n: ";
    cin >> n;

    recursionDepth = 0;

    double result = power(x, n, 1);

    cout << x << " � ������ " << n << " ������� " << result << endl;
    cout << "����������� ������� ������: " << recursionDepth << endl;

    return 0;
}
