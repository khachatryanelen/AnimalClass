#include <iostream>
#include <string>
#include "Animal.h"

Animal::Animal() : name("undefined"), age(-1), isWild(false) {}
Animal::Animal(const std::string& o_name) : name(o_name), age(-1), isWild(false) {}
Animal::Animal(const std::string& o_name,int o_age,bool o_isWild): name(o_name), age(o_age), isWild(o_isWild) {}
Animal::Animal(Animal&& other){
    name=other.name;
    age=other.age;
    isWild=other.isWild;

    other.name="";
    other.age=0;
    other.isWild=false;
}
Animal& Animal::operator=(Animal&& other){
    if(this!=&other){
        name=other.name;
        age=other.age;
        isWild=other.isWild;

        other.name="";
        other.age=0;
        other.isWild=false;
    }
    return *this;
}

Animal::~Animal() {}

std::string Animal::getName() { 
    return name; }
int Animal::getAge() { 
    return age; }
bool Animal::isWildAnimal() { 
    return isWild; }

void Animal::printInfo() {
    std::cout << "Name is: " << name << std::endl;
    std::cout << "Age is: " << age << std::endl;
    std::cout << "Sound is: " << "???" << std::endl;
    std::cout << "Is Wild ?: " << (isWild ? "true" : "false") << std::endl;
}

Cat::Cat() : Animal(), breed("unknown"), numChildren(-1) {}
Cat::Cat(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed, int children): Animal(o_name, o_age,  o_isWild), breed(o_breed), numChildren(children) {}
std::string Cat::getSound() const  { return "CatVoice"; }
Cat::~Cat() {}

Dog::Dog() : Animal(), colour("unknown"), numChildren(-1) {}
Dog::Dog(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_colour, int children): Animal(o_name, o_age, o_isWild), colour(o_colour), numChildren(children) {}
std::string Dog::getSound() const { return "DogVoice"; }
Dog::~Dog() {}

Parrot::Parrot() : Animal(), breed("unknown"), language("unknown") {}
Parrot::Parrot(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed,const std::string& o_language): Animal(o_name, o_age, o_isWild), breed(o_breed), language(o_language) {}
std::string Parrot::getSound() const { return "parrotVoice"; }
Parrot::~Parrot() {}

Fish::Fish() : Animal(), died(false) {}
Fish::Fish(const std::string& o_name, int o_age, bool o_isWild,bool o_died) : Animal(o_name, o_age, o_isWild), died(o_died) {}
std::string Fish::getSound() const { return "fishVoice"; }
Fish::~Fish() {}

Rabbit::Rabbit() : Animal(), domestic(false) {}
Rabbit::Rabbit(std::string o_name, int o_age, bool o_isWild,bool isDomestic): Animal(o_name, o_age, o_isWild), domestic(isDomestic) {}
std::string Rabbit::getSound() const { return "rabitVoice"; }
Rabbit::~Rabbit() {}

Lion::Lion() : Animal(), wounded(false), hungry(false) {}
Lion::Lion(std::string o_name, int o_age,bool o_isWild,bool isWounded, bool isHungry): Animal(o_name, o_age, o_isWild), wounded(isWounded), hungry(isHungry) {}
std::string Lion::getSound() const { return "lionVoice"; }
Lion::~Lion() {}
