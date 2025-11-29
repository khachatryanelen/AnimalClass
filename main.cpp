#include <iostream>
#include "Animal.h"
#include "Zoo.h"

int main(int argc,const char* argv[]){
    Animal** myZoo=new Animal*[3];
    Cat* kitty=new Cat("Kitty", 2, false, "Persian", 3,10);
    Dog* dogik=new Dog("Dogik", 3, false,"red", 4,8);
    Rabbit* lissy=new Rabbit("Lissy", 15, true,false,15);
    myZoo[0]=kitty;
    myZoo[1]=dogik;
    myZoo[2]=lissy;
    for(int i=0;i<3;i++){
        std::cout<<myZoo[i]->getSound()<<std::endl;
    }
    bool bigger=(*kitty>*dogik);
    std::cout <<"Cat is heavier then dog: "<<(bigger==false?"false":"true")<<std::endl;
    std::cout<<"Count of the animals is: "<<Animal::getCount()<<std::endl;
    return 0;
}