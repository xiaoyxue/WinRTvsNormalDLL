#pragma once
#include "Calculator.g.h"

namespace winrt::RuntimeComponent::implementation
{
    struct Calculator : CalculatorT<Calculator>
    {
        Calculator() = default;

        int32_t Add(int32_t a, int32_t b);
        int32_t Minus(int32_t a, int32_t b);
        int32_t Multiply(int32_t a, int32_t b);
    };
}
namespace winrt::RuntimeComponent::factory_implementation
{
    struct Calculator : CalculatorT<Calculator, implementation::Calculator>
    {
    };
}
