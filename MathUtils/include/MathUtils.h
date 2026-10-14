#pragma once

#ifdef _WIN32
    #ifdef MATHUTILS_EXPORTS
        #define MATHUTILS_API __declspec(dllexport)
    #else
        #define MATHUTILS_API __declspec(dllimport)
    #endif
#else
    #define MATHUTILS_API
#endif

namespace MathUtils {
    MATHUTILS_API double Euler(double x0, double y0, double h, int n);

    MATHUTILS_API double RungeKutta4(double x0, double y0, double h, int n);

    MATHUTILS_API double solve(double x0, double y0, double h, int n);

    MATHUTILS_API double estimateError(double x0, double y0, double h, int n);
}
