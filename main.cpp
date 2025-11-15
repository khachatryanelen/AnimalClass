#include <iostream>
#include "Animal.h"
#include "Zoo.h"

int main(int argc,const char* argv[]){
    Animal** myZoo=new Animal*[3];
    myZoo[0]=new Cat("Kitty", 2, false, "Persian", 3);
    myZoo[1]=new Dog("Dogik", 3, false,"red", 4);
    myZoo[2]=new Rabbit("Lissy", 15, true,false);

    for(int i=0;i<3;i++){
        std::cout<<myZoo[i]->getSound()<<std::endl;
    }
    return 0;
}