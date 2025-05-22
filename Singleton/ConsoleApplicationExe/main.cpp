#include "pch.h"
#include "StaticLibrary1.h"
#include "StaticLibrary2.h"
#include "DynamicLibrary1.h"
#include "DynamicLibrary3.h"
#include "ExampleClasses.h"
#include "Interfaces.h"
#include <winrt/RuntimeComponent1.h>

using namespace winrt;
using namespace Windows::Foundation;

HeadOnlyClass* GetHeadOnlyClass() {
    return CreateHeadOnlyClass("Exe call to create HeadOnlyClass:");
}

HeadOnlyClass* GetHeadOnlyClassDynamicLibrary2();

int main()
{
    init_apartment();
    std::cout << "Singleton in static, dynamic libraries and C++WinRT component\n\n";
    std::cout << "inline function across static libraries and execution file:\n";
    auto staticLibrary1Instance = GetHeadOnlyClassInStaticLibrary1();
    auto staticLibrary2Instance = GetHeadOnlyClassInStaticLibrary2();
    auto instance = GetHeadOnlyClass();
    std::cout << std::endl;

    std::cout << "inline function across dynamic libraries(wrong):\n";
    auto dynamicLibrary1Instance = GetHeadOnlyClassDynamicLibrary1();
    auto dynamicLibrary2Instance = GetHeadOnlyClassDynamicLibrary2();
    std::cout << std::endl;

    std::cout << "Correct singleton pattern (wrap into dll):\n";
    std::cout << "1. ExampleClass example:\n";
    auto dynamicLibrary3Instance = GetExampleClassDynamicLibrary3();
    auto exampleClassInstance = CreateExampleClass("Exe call to create ExampleClass:");
    std::cout << std::endl;

    std::cout << "2. Filter examples:\n";
    Filter* boxFilter = CreateSingleton<BoxFilter>("Exe call to create BoxFilter:");
    Filter* gaussianFilter = CreateSingleton<GaussianFilter>("Exe Call to create GaussianFilter:");
	Filter* boxFilter2 = CreateSingleton<BoxFilter>("Exe call to create BoxterFilter:");
	Filter* gaussianFilter2 = CreateSingleton<GaussianFilter>("Exe call to create GaussianFilter:");
    std::cout << std::endl;

    std::cout << "Singleton in C++WinRT\n";
    std::cout << "GetInstace1:\n";
    auto winrtComponentInstance1 = winrt::RuntimeComponent1::RuntimeClassSingleton::GetInstance();
    std::cout << "GetInstace2:\n";
    auto winrtComponentInstance2 = winrt::RuntimeComponent1::RuntimeClassSingleton::GetInstance();
}
