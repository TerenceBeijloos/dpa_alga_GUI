#pragma once
#include <string>
#include <limits>

class TypeConverter
{
public:
	TypeConverter() {};
	virtual ~TypeConverter() {};

	int stringToInt(const std::string& _value, int _min = INT_MIN, int _max = INT_MAX) const;
	float stringToFloat(const std::string& _value, float _min = std::numeric_limits<float>::min(), float _max = std::numeric_limits<float>::max()) const;

private:
	template<typename valueType>bool isValid(const std::string&) const;
};


