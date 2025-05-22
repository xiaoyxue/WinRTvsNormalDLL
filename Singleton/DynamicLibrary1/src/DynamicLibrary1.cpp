#include "DynamicLibrary1.h"

DLL_EXPORT HeadOnlyClass* GetHeadOnlyClassDynamicLibrary1()
{
	return CreateHeadOnlyClass("DynamicLibrary1 call:");
}
