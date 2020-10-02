#include "../../Headers/Strategies/XMLFileHandlerStrategy.h"
#include "../../Headers/Globals/Defines.h"

XMLFileHandlerStrategy::XMLFileHandlerStrategy(const std::string& _filename)
{
    filename = _filename;
}

XMLFileHandlerStrategy::~XMLFileHandlerStrategy()
{
}

std::vector<std::vector<std::vector<std::string>>> XMLFileHandlerStrategy::getEnitityVectors()
{	
	std::vector<std::vector<std::vector<std::string>>> entityList;
	std::vector<std::vector<std::string>> entity;
	std::vector<std::string> attribute;

	xmlDoc.LoadFile(filename.c_str());
	tinyxml2::XMLNode* root = xmlDoc.FirstChild();
	while (root->NoChildren())
	{
		root = root->NextSibling();
	}
	while (std::strcmp(root->ToElement()->Name(), "galaxy") != 0)
	{
		root = root->NextSibling();
	}

	tinyxml2::XMLNode* currentNode = root->FirstChild();
	tinyxml2::XMLNode* galaxyEntityNode = currentNode;
	tinyxml2::XMLNode* subNode = root->FirstChild();
	tinyxml2::XMLElement* currentEntityElement = currentNode->ToElement();
	

	while(currentNode != nullptr)
	{
		entity = {};
		attribute = {};
		currentEntityElement = currentNode->ToElement();
		attribute = {"type", currentEntityElement->Name()};
		entity.push_back(attribute);

		currentNode = currentNode->FirstChild();

		while(currentNode != nullptr)
		{

			currentEntityElement = currentNode->ToElement();
			if(currentNode->FirstChildElement() == nullptr)
			{
				attribute = {currentEntityElement->Name(), currentEntityElement->GetText()};
				entity.push_back(attribute);
			}
			else
			{
				subNode = currentNode->FirstChild();

				if(std::strcmp(currentEntityElement->Name(), STR_POSITION) == 0)
				{
					while(subNode != nullptr)
					{
						attribute = {subNode->ToElement()->Name(), subNode->ToElement()->GetText()};
						entity.push_back(attribute);
						subNode = subNode->NextSiblingElement();
					}
				}
				else if(std::strcmp(currentEntityElement->Name(), STR_SPEED) == 0)
				{
					attribute = {STR_VX, subNode->ToElement()->GetText()};
					entity.push_back(attribute);
					subNode = subNode->NextSiblingElement();
					attribute = {STR_VY, subNode->ToElement()->GetText()};
					entity.push_back(attribute);
				}
				else if(std::strcmp(currentEntityElement->Name(), STR_NEIGHBOURS) == 0)
				{
					attribute = {currentEntityElement->Name()};
					while(subNode != nullptr)
					{
						std::string neighboorPlanet = subNode->ToElement()->GetText();
						neighboorPlanet[0] = tolower(neighboorPlanet[0]);
						attribute.push_back(neighboorPlanet);
						subNode = subNode->NextSiblingElement();
					}
					entity.push_back(attribute);
				}
			}

			currentNode = currentNode->NextSibling();
		}
		galaxyEntityNode = galaxyEntityNode->NextSibling();
		currentNode = galaxyEntityNode;
		entityList.push_back(entity);
	}
	// closeFile();
	return entityList;
}

void XMLFileHandlerStrategy::openFile()
{
//     //TODO: error handler
// 	if (!loadFile.is_open())
// 	{
// 		loadFile.open(filename);
// 	}
}

void XMLFileHandlerStrategy::closeFile()
{
//     //TODO: error handler
// 	if (loadFile.is_open())
// 	{
// 		loadFile.close();
// 	}
}
