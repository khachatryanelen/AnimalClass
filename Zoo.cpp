#include <iostream>
#include "Zoo.h"

Zoo::Zoo(Animal** animal){
    zooik=animal;
}
Zoo::~Zoo(){
    delete zooik;
    zooik=nullptr;
}
