#include "ExampleClasses.h"

DLL_EXPORT ExampleClass* CreateExampleClass(const std::string& configString) {
	std::cout << configString << std::endl;
	static ExampleClass instance;
	return &instance;
}
