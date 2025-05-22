#pragma once
#include <exception>
#include <string>
#include "ExampleClasses.h"


template<typename T>
DLL_EXPORT T* CreateSingleton(const std::string& configString) {
	throw std::exception("Not implement");
}

template<>
DLL_EXPORT BoxFilter* CreateSingleton<BoxFilter>(const std::string& configString);

template<>
DLL_EXPORT GaussianFilter* CreateSingleton<GaussianFilter>(const std::string& configString);