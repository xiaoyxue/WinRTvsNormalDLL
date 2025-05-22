#pragma once
#include <iostream>
#include <string>

class HeadOnlyClass {
public:
	HeadOnlyClass() {
		std::cout << "\"Construct HeadOnlyClass\"" << std::endl;
	}
	~HeadOnlyClass(){}
};


inline HeadOnlyClass* CreateHeadOnlyClass(const std::string& configString) {
	std::cout << configString << std::endl;
	static HeadOnlyClass instance;
	return &instance;
}