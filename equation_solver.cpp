#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
    int degree;
    cout << "Choose the degree of the equation (2 for quadratic, 3 for cubic): ";
    cin >> degree;

    if (degree == 2) {
        double a, b, c;
        cout << "Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): ";
        cin >> a >> b >> c;

        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real roots: " << root1 << " and " << root2 << endl;
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "One real root: " << root << endl;
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and "
                 << realPart << " - " << imaginaryPart << "i" << endl;
        }
    } else if (degree == 3) {
        double a, b, c, d;
        cout << "Enter the coefficients a, b, c, and d for the cubic equation (ax^3 + bx^2 + cx + d): ";
        cin >> a >> b >> c >> d;

        if (a == 0) {
            cout << "Invalid input. 'a' coefficient cannot be zero for a cubic equation." << endl;
        } else {
            // Calculate discriminant
            double p = (3 * a * c - b * b) / (3 * a * a);
            double q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);
            double discriminant = q * q / 4 + p * p * p / 27;

            if (discriminant > 0) {
                double root1 = cbrt(-q / 2 + sqrt(discriminant)) + cbrt(-q / 2 - sqrt(discriminant)) - b / (3 * a);
                cout << "One real root: " << root1 << endl;
            } else if (discriminant == 0) {
                double root1 = 2 * cbrt(-q / 2) - b / (3 * a);
                double root2 = -cbrt(-q / 2) - b / (3 * a);
                cout << "One real root (with multiplicity 2): " << root1 << endl;
                cout << "One real root: " << root2 << endl;
            } else {
                complex<double> root1 = cbrt(-q / 2 + sqrt(-discriminant));
                complex<double> root2 = cbrt(-q / 2 - sqrt(-discriminant));
                complex<double> root3 = -b / (3 * a);
                cout << "Three complex roots: " << root1 << ", " << root2 << ", " << root3 << endl;
            }
        }
    } else {
        cout << "Invalid degree entered. This program supports degrees 2 (quadratic) and 3 (cubic) only." << endl;
    }

    return 0;
}
