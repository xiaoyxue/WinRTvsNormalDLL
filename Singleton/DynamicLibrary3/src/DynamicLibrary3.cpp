#include "DynamicLibrary3.h"

DLL_EXPORT ExampleClass* GetExampleClassDynamicLibrary3() {
	return CreateExampleClass("DynamicLibrary3 call to create ExampleClass:");
}

