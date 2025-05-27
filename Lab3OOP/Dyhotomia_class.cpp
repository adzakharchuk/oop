#include "Dyhotomia_class.hpp"

// Основна реалізація методу дихотомії
double BisectionMethod::solve(std::function<double(double)> func, double a, double b) {
    if (func(a) * func(b) >= 0) {
        std::cerr << "No root in the interval [" << a << ", " << b << "]\n";
        return NAN;
    }

    double c;
    while ((b - a) / 2 > epsilon) {
        c = (a + b) / 2;
        if (func(c) == 0.0) {
            break;
        } else if (func(a) * func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2;
}

// Метод Ньютона
double NewtonMethod::solve(std::function<double(double)> func, double initial) {
    double x = initial;
    double fx, dfx;
    do {
        fx = func(x);
        dfx = (func(x + epsilon) - func(x)) / epsilon; // чисельна похідна
        if (std::abs(dfx) < epsilon) {
            std::cerr << "Derivative near zero. Method fails.\n";
            return NAN;
        }
        x = x - fx / dfx;
    } while (std::abs(fx) > epsilon);
    return x;
}
