#include "StaticLibrary1.h"

HeadOnlyClass* GetHeadOnlyClassInStaticLibrary1() {
	return CreateHeadOnlyClass("StaticLibrary1 call to create HeadOnlyClass:");
}