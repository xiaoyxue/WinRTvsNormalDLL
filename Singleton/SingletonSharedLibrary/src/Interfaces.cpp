#include "Macro.h"
#include "Interfaces.h"

template<>
DLL_EXPORT BoxFilter* CreateSingleton<BoxFilter>(const std::string& configString) {
	std::cout << configString << std::endl;
	static BoxFilter instance;
	return &instance;
}

template<>
DLL_EXPORT GaussianFilter* CreateSingleton<GaussianFilter>(const std::string& configString) {
	std::cout << configString << std::endl;
	static GaussianFilter instance;
	return &instance;
}