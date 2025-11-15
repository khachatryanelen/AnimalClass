#ifndef ZOO_H
#define ZOO_H
#include "Animal.h"

class Zoo{
public:
    Animal** zooik;
    Zoo(Animal** animal);
    Zoo(const Zoo& other)=delete;
    Zoo& operator=(const Zoo& other)=delete;
    ~Zoo();

};


#endif // ZOO_H