#include "MathUtils.h"
#include <cmath>

namespace MathUtils {

    double f(double x, double y) {
        return x * x * y;
    }

    double Euler(double x0, double y0, double h, int n) {
        double x = x0;
        double y = y0;
        for (int i = 0; i < n; i++) {
            y += h * f(x, y);
            x += h;
        }
        return y;
    }

    double RungeKutta4(double x0, double y0, double h, int n) {
        double x = x0;
        double y = y0;
        for (int i = 0; i < n; i++) {
            double k1 = f(x, y);
            double k2 = f(x + h / 2.0, y + h * k1 / 2.0);
            double k3 = f(x + h / 2.0, y + h * k2 / 2.0);
            double k4 = f(x + h, y + h * k3);

            y += h / 6.0 * (k1 + 2*k2 + 2*k3 + k4);
            x += h;
        }
        return y;
    }

    double solve(double x0, double y0, double h, int n) {
        return RungeKutta4(x0, y0, h, n);
    }

    double estimateError(double x0, double y0, double h, int n) {
        double eulerResult = Euler(x0, y0, h, n);
        double rk4Result = RungeKutta4(x0, y0, h, n);
        return std::abs(rk4Result - eulerResult);
    }
}
