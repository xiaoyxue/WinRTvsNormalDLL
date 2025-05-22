#include "StaticLibrary2.h"

HeadOnlyClass* GetHeadOnlyClassInStaticLibrary2() {
	return CreateHeadOnlyClass("StaticLibrary2 call to create HeadOnlyClass:");
}