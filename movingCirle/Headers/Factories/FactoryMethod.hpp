#pragma once
#include <assert.h>

template <typename type, typename Class>
void
FactoryMethod<type, Class>::assign(const type& chosentype, const Class* pClass)
{
    static  FactoryMap& cMap = getMap();

    assert(cMap.find(chosentype) == cMap.end());

    cMap[chosentype] = pClass;
}

template <typename type, typename Class>
Class*
FactoryMethod<type, Class>::create(const type& chosentype)
{
    static  FactoryMap& cMap = getMap();
    typename FactoryMap::iterator   iFind = cMap.find(chosentype);

    if (iFind == cMap.end())
        return nullptr;
    else
        return iFind->second->clone();
}

template <typename type, typename Class>
typename FactoryMethod<type, Class>::FactoryMap&
FactoryMethod<type, Class>::getMap()
{
    static  FactoryMap  cMap;
    return cMap;
}
