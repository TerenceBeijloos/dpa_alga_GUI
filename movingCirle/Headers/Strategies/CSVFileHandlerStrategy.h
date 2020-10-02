#pragma once

#include "iFileHandlerStrategy.h"
#include <sstream>

class CSVFileHandlerStrategy : public iFileHandler
{
public:
    CSVFileHandlerStrategy(const std::string& filename);
    virtual ~CSVFileHandlerStrategy();
    std::vector<std::vector<std::vector<std::string>>> getEnitityVectors() override;
    std::vector<std::string> getHeader();
private:
	std::ifstream loadFile;
    void openFile() override;
    void closeFile() override;
};

