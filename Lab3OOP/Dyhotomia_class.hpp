#ifndef DYHOTOMIA_CLASS_HPP
#define DYHOTOMIA_CLASS_HPP

#include <functional>
#include <iostream>
#include <cmath>

class NonlinearSolver {
protected:
    double epsilon; // Точність
public:
    NonlinearSolver(double eps) : epsilon(eps) {}
    double getEpsilon() const { return epsilon; }
};

class BisectionMethod {
private:
    double epsilon; // Точність
public:
    BisectionMethod(double eps) : epsilon(eps) {}
    double solve(std::function<double(double)> func, double a, double b);
};

class NewtonMethod {
private:
    double epsilon; // Точність
public:
    NewtonMethod(double eps) : epsilon(eps) {}
    double solve(std::function<double(double)> func, double initial);
};

#endif