#pragma once
#include <cmath>
#include "functemplate.h"

// Класс для функции: y = a * x^2 * sin(b / x)
class FuncDamped : public FuncTemplate<double> {
public:
    FuncDamped(double a_val = 1.0, double b_val = 1.0)
        : FuncTemplate<double>(std::vector<double>{a_val, b_val}) {}

    double calc(double const &x) const override {
        if (x == 0.0) return 0.0;
        double a = (*m_koefs)[0];
        double b = (*m_koefs)[1];
        return a * x * x * std::sin(b / x);
    }
};
