#include "../../Headers/Globals/TypeConverter.h"
#include <sstream>

//TODO: what happens upon error?
int TypeConverter::stringToInt(const std::string& _value, int _min, int _max) const
{
	if (!this->isValid<int>(_value)) {
		return 0;//error
	}

	int result = std::stoi(_value);
	if (result <= _max && result >= _min)
	{
		return result;
	}

	return 0; //Error
}

//TODO: what happens upon error?
float TypeConverter::stringToFloat(const std::string& _value, float _min, float _max) const
{
	if (!this->isValid<float>(_value)) {
		return 0.0f;//error
	}

	float result = std::stof(_value);

	if (result <= _max && result >= _min) {
		return result;
	}

	return 0.0f;//error

}

template<typename valuetype> bool TypeConverter::isValid(const std::string& _string) const
{
	std::istringstream iss(_string);
	valuetype f;
	iss >> std::noskipws >> f; // noskipws considers leading whitespace invalid
	// Check the entire string was consumed and if either failbit or badbit is set
	return iss.eof() && !iss.fail();
}
