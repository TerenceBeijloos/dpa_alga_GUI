#include "../../Headers/Strategies/CSVFileHandlerStrategy.h"

CSVFileHandlerStrategy::CSVFileHandlerStrategy(const std::string& _filename)
{
	filename = _filename;
}

CSVFileHandlerStrategy::~CSVFileHandlerStrategy()
{
}

std::vector<std::vector<std::vector<std::string>>> CSVFileHandlerStrategy::getEnitityVectors()
{
	//Skip the header
	std::vector<std::string> header = getHeader();
	std::vector<std::vector<std::vector<std::string>>> entityList;
	std::vector<std::vector<std::string>> entity;
	std::vector<std::string> attribute;
	std::string line;
	std::string value;
	std::string valueEntity;

	while(std::getline(loadFile, line))
	{
		entity.clear();
		attribute.clear();
		std::stringstream row(line);
		int attributeNumber = 0;

		while(std::getline(row, value, ';'))
		{
			if(value == "")
			{
				attributeNumber++;
				continue;
			}

			attribute = {header[attributeNumber]};
			std::stringstream valueSet(value);

			while(std::getline(valueSet, valueEntity, ','))
			{
				for(int i = 0; i <valueEntity.length(); i++)
				{
					valueEntity[i] = tolower(valueEntity[i]);
				}
				attribute.push_back(valueEntity);
			}
			entity.push_back(attribute);
			attributeNumber++;
		}

		for(int i = 0; i < entity.size(); i++)
		{
			if(entity[i][0] == "type")
			{
				std::vector<std::string> replacingAttribute = entity[0];
				entity[0] = entity[i];
				entity[i] = replacingAttribute;
				break;
			}
		}
		//Put type on place 0 in entitylist
		entityList.push_back(entity);
	}
	closeFile();
	return entityList;
}


std::vector<std::string> CSVFileHandlerStrategy::getHeader() 
{
	closeFile();
	openFile();
	std::vector<std::string> header;
	std::string attributename;
	std::string headline;

	std::getline(loadFile, headline);
	std::stringstream headlineStream(headline);

	while(std::getline(headlineStream, attributename, ';'))
	{

		header.push_back(attributename);
	}

	return header;
}




void CSVFileHandlerStrategy::openFile()
{
	//TODO: check file format and handle error
	if (!loadFile.is_open())
	{
		loadFile.open(filename);
	}
}

void CSVFileHandlerStrategy::closeFile()
{
	//TODO: error handler
	if (loadFile.is_open())
	{
		loadFile.close();
	}
}


