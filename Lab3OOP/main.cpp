#include <iostream>
#include <cmath>
#include "Dyhotomia_class.hpp"

int main() {
    double epsilon;
    std::cout << "Enter the precision (epsilon): ";
    std::cin >> epsilon;

    // --- Перевірка для функції з відомим коренем ---
    auto func_known = [](double x) { return x * x - 4; };
    std::cout << "\n=== Checking function: f(x) = x^2 - 4 ===\n";
    BisectionMethod bisection_known(epsilon);
    double root_bisection_known = bisection_known.solve(func_known, 0, 3);
    if (!std::isnan(root_bisection_known)) {
        std::cout << "Root (Bisection): " << root_bisection_known << "\n";
        std::cout << "f(" << root_bisection_known << ") = " << func_known(root_bisection_known) << "\n";
    }
    NewtonMethod newton_known(epsilon);
    double root_newton_known = newton_known.solve(func_known, 3);
    if (!std::isnan(root_newton_known)) {
        std::cout << "Root (Newton): " << root_newton_known << "\n";
        std::cout << "f(" << (root_newton_known) << ") = " << func_known(root_newton_known) << "\n";
    }

    // --- Oсновна функція ---
    auto func = [](double x) { return x - 2 + std::sin(1.0 / x); };
    double a, b;
    std::cout << "\nEnter the interval [a, b] for the Bisection Method:\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    BisectionMethod bisection(epsilon);
    double root_bisection = bisection.solve(func, a, b);
    if (!std::isnan(root_bisection)) {
        std::cout << "Root (Bisection): " << root_bisection << "\n";
        std::cout << "f(" << root_bisection << ") = " << func(root_bisection) << "\n";
    }

    double x0;
    std::cout << "Enter the initial approximation (x0) for the Newton Method: ";
    std::cin >> x0;

    NewtonMethod newton(epsilon);
    double root_newton = newton.solve(func, x0);
    if (!std::isnan(root_newton)) {
        double check_newt = func(root_newton);
        std::cout << "Root (Newton): " << root_newton << "\n";
        std::cout << "f(" << root_newton << ") = " << func(root_newton) << "\n";
        if (std::abs(check_newt) < epsilon)
            std::cout << "Перевірка: f(x) ≈ 0 (корінь знайдено правильно)\n";
        else
            std::cout << "Перевірка: f(x) не близько до 0 (корінь неточний)\n";
    }

    return 0;
}
