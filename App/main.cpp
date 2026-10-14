#include <iostream>
#include <iomanip>
#include "MathUtils.h"

int main() {
    double x0 = 0.0;
    double y0 = 1.0;
    double h = 0.1;
    int n = 10;

    double eulerResult =
        MathUtils::Euler(x0, y0, h, n);

    double rk4Result =
        MathUtils::RungeKutta4(x0, y0, h, n);

    double solution =
        MathUtils::solve(x0, y0, h, n);

    double error =
        MathUtils::estimateError(x0, y0, h, n);

    std::cout << std::fixed << std::setprecision(8);

    std::cout << "Euler: " << eulerResult << '\n';
    std::cout << "Runge-Kutta 4: " << rk4Result << '\n';
    std::cout << "Solve: " << solution << '\n';
    std::cout << "Estimated error: " << error << '\n';

    return 0;
}
