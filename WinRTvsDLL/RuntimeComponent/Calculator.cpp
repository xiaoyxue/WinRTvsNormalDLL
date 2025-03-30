#include "pch.h"
#include "Calculator.h"
#include "Calculator.g.cpp"

namespace winrt::RuntimeComponent::implementation
{
    int32_t Calculator::Add(int32_t a, int32_t b)
    {
        return a + b;
    }
    int32_t Calculator::Minus(int32_t a, int32_t b)
    {
        return a - b;
    }
    int32_t Calculator::Multiply(int32_t a, int32_t b)
    {
        return a * b;
    }
}
