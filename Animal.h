#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
private:
    std::string name;
    int age;
    bool isWild;

public:
    Animal();
    Animal(const std::string& o_name);
    Animal(const std::string& o_name,int o_age,bool o_isWild);
    Animal(Animal&& other);
    Animal& operator=(Animal&& other);
    virtual ~Animal();

    std::string getName();
    virtual std::string getSound() const=0;
    int getAge();
    bool isWildAnimal();
    void printInfo();
};


class Cat : public Animal {
private:
    std::string breed;
    int numChildren;

public:
    Cat();
    Cat(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed, int children);
    std::string getSound()const override;
    ~Cat();
};

class Dog : public Animal {
public:
    std::string colour;
    int numChildren;

    Dog();
    Dog(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_colour, int children);
    std::string getSound()const override;
    ~Dog();
};

class Parrot : public Animal {
public:
    std::string breed;
    std::string language;

    Parrot();
    Parrot(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed,const std::string& o_language);
    std::string getSound()const override;
    ~Parrot();
};

class Fish : public Animal {
public:
    bool died;

    Fish();
    Fish(const std::string& o_name, int o_age, bool o_isWild,bool o_died);
    std::string getSound()const override;
    ~Fish();
};

class Rabbit : public Animal {
public:
    bool domestic;

    Rabbit();
    Rabbit(std::string o_name, int o_age, bool o_isWild,bool isDomestic);
    std::string getSound()const override;
    ~Rabbit();
};

class Lion : public Animal {
public:
    bool wounded;
    bool hungry;

    Lion();
    Lion(std::string o_name, int o_age, bool o_isWild,bool isWounded, bool isHungry);
    std::string getSound()const override;
    ~Lion();
};

#endif
