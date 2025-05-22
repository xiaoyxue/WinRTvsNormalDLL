#include "pch.h"
#include "RuntimeClassSingleton.h"
#include "RuntimeClassSingleton.g.cpp"
#include <iostream>

namespace winrt::RuntimeComponent1::implementation
{
    RuntimeClassSingleton::RuntimeClassSingleton() 
    {
        std::cout << "\"Construct RuntimeClassSingleton\"" << std::endl;
    }

	winrt::RuntimeComponent1::RuntimeClassSingleton RuntimeClassSingleton::GetInstance()
	{
		auto factory = winrt::make<winrt::RuntimeComponent1::factory_implementation::RuntimeClassSingleton>().as<winrt::RuntimeComponent1::IRuntimeClassSingletonStatics>();
        return factory.GetInstance();
    }

    void RuntimeClassSingleton::Foo()
    {
        throw hresult_not_implemented();
    }
}
