#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream> 

class iFileHandler
{
public:

	virtual std::vector<std::vector<std::vector<std::string>>> getEnitityVectors() = 0;
protected:
	std::string filename;
	virtual void openFile() = 0;
	virtual void closeFile() = 0;
private:

};