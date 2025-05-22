#include "Macro.h"
#include "HeadOnlyExample.h"

DLL_EXPORT HeadOnlyClass* GetHeadOnlyClassDynamicLibrary2() {
	return CreateHeadOnlyClass("DynamicLibrary2 call:");
}