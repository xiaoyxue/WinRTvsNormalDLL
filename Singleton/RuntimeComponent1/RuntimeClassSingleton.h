#pragma once
#include "RuntimeClassSingleton.g.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct RuntimeClassSingleton : RuntimeClassSingletonT<RuntimeClassSingleton>
    {
        RuntimeClassSingleton();
        static winrt::RuntimeComponent1::RuntimeClassSingleton GetInstance();
        void Foo();
    };
}
namespace winrt::RuntimeComponent1::factory_implementation
{
    struct RuntimeClassSingleton : RuntimeClassSingletonT<RuntimeClassSingleton, implementation::RuntimeClassSingleton, winrt::static_lifetime>
    {
        winrt::RuntimeComponent1::RuntimeClassSingleton GetInstance() 
        {
			static winrt::RuntimeComponent1::RuntimeClassSingleton instance = make<implementation::RuntimeClassSingleton>();
			return instance;
        }
    };
}
