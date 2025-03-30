#include "Macro.h"

class Calculator {
public:
	int Add(int a, int b) {
		return a + b;
	}

	int Minus(int a, int b) {
		return a - b;
	}

	int Multilply(int a, int b) {
		return a * b;
	}
};

Calculator* GetCalculator() {
	static Calculator calcuator;
	return &calcuator;
}

extern "C" int DLL_EXPORT Add(int a, int b) {
	return GetCalculator()->Add(a, b);
}

extern "C" int DLL_EXPORT Minus(int a, int b) {
	return GetCalculator()->Minus(a, b);
}

extern "C" int DLL_EXPORT Multiply(int a, int b) {
	return GetCalculator()->Multilply(a, b);
}