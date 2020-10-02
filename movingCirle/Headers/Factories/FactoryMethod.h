#pragma once

#include <map>

namespace Factory
{
    template <typename type, typename Class>
    class FactoryMethod
    {
    private:
        FactoryMethod() = default;
        virtual            ~FactoryMethod() = default;

    private:
        static  void        assign(const type&, const Class*);
    public:
        static  Class* create(const type&);

    private:
        typedef std::map<type, const Class*> FactoryMap;

        static  FactoryMap& getMap();
    private:
        friend Class;
    };
#include "factoryMethod.hpp"
}