#pragma once

#include "iFileHandlerStrategy.h"
#include "../../Headers/External/tinyxml2.h"
#include <sstream>

class XMLFileHandlerStrategy : public iFileHandler
{
public:
    XMLFileHandlerStrategy(const std::string& filename);
    virtual ~XMLFileHandlerStrategy();
    std::vector<std::vector<std::vector<std::string>>> getEnitityVectors() override;
private:
	tinyxml2::XMLDocument xmlDoc;
    void openFile() override;
    void closeFile() override;
};

