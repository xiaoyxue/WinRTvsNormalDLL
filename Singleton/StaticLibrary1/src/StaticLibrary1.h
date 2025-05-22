#pragma once
#include "HeadOnlyExample.h"

HeadOnlyClass* GetHeadOnlyClassInStaticLibrary1() {
	return CreateHeadOnlyClass("StaticLibrary1 call to create HeadOnlyClass:");
}