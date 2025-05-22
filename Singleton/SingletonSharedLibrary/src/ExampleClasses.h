#pragma once

#include "Common.h"
#include <cmath>
#include <algorithm>
#include <iostream>
#include "Macro.h"

class Filter
{
protected:
	real radius;

public:
	Filter(const real rad)
		: radius(rad)
	{
	}
	virtual ~Filter() {}

	const real GetRadius() const
	{
		return radius;
	}
	virtual real Evaluate(const real dx, const real dy) const = 0;
};

class BoxFilter : public Filter
{
public:
	BoxFilter()
		: Filter(0.5)
	{
		std::cout << "\"Construct BoxFilter\"" << std::endl;
	}

public:
	real Evaluate(const real dx, const real dy) const override {
		return 1.0;
	}
};


class GaussianFilter : public Filter
{
private:
	real stdDev;
	real alpha;
	real expR;

public:
	GaussianFilter(const real stdDiv = 0.5f)
		: Filter(4 * stdDiv)
		, stdDev(stdDiv)
	{
		std::cout << "\"Construct GaussianFilter\"" << std::endl;
		alpha = -1.0f / (2.0f * stdDev * stdDev);
		expR = std::exp(alpha * radius * radius);
	}

public:
	real Evaluate(const real dx, const real dy) const override
	{
		auto Gaussian = [this](const real d)
			{
				return std::max(0.0f, std::exp(alpha * d * d) - expR);
			};

		return Gaussian(dx) * Gaussian(dy);
	}
};


class ExampleClass {
public:
	ExampleClass() {
		std::cout << "\"Construct ExampleClass\"" << std::endl;
	}
	~ExampleClass(){}
};

DLL_EXPORT ExampleClass* CreateExampleClass(const std::string& configString);