#include "pch.h"
#include "Macro.h"
#include <iostream>
#include <winrt/RuntimeComponent.h>

using namespace winrt;
using namespace winrt::RuntimeComponent;
using namespace Windows::Foundation;

extern "C" int DLL_IMPORT Add(int a, int b);
extern "C" int DLL_IMPORT Minus(int a, int b);
extern "C" int DLL_IMPORT Multiply(int a, int b);

int main()
{
    init_apartment();

    int a = 3, b = 2;
    std::cout << "Normal DLL: " << std::endl;
    std::cout << "a + b (Add(a, b)): " << Add(a, b) << std::endl;
    std::cout << "a - b (Minus(a, b)): " << Minus(a, b) << std::endl;
    std::cout << "a * b (Multiply(a, b)): " << Multiply(a, b) << std::endl;

    std::cout << std::endl << std::endl;

    Calculator calculator;
	std::cout << "WinRT Component(RuntimeComponent): " << std::endl;
	std::cout << "a + b (calculator.Add(a, b)): " << calculator.Add(a, b) << std::endl;
	std::cout << "a - b (calculator.Minus(a, b)): " << calculator.Minus(a, b) << std::endl;
	std::cout << "a * b (calculator.Multiply(a, b)): " << calculator.Multiply(a, b) << std::endl;
}
