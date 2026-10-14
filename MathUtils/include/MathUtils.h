#pragma once

namespace MathUtils {
    double Euler(double x0, double y0, double h, int n);

    double RungeKutta4(double x0, double y0, double h, int n);

    double solve(double x0, double y0, double h, int n);

    double estimateError(double x0, double y0, double h, int n);
}
