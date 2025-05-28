#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    int energy;
    int happiness;

public:
    Animal(string n, int e, int h);
    virtual ~Animal();

    void setEnergy(int newEnergy);
    void setHappiness(int newHappiness);
    int getEnergy() const;
    int getHappiness() const;
    void showStatus() const;

    virtual void makeSound();
    virtual void doTrick();
    virtual void fly();
    virtual void eatFood();
    virtual void eatFood(int energy);
    virtual void throwBanana() {}
};

class Mammal : virtual public Animal 
{
public:
    Mammal(string n, int e, int h);
    virtual ~Mammal();
    void makeSound() override;
    void eatFood() override;
};

class Bird : virtual public Animal 
{
public:
    Bird(string n, int e, int h);
    virtual ~Bird();
    void makeSound() override;
    void fly() override;
};

class Monkey : public Mammal
{
public:
    Monkey(string n, int e, int h);
    virtual ~Monkey();
    void makeSound() override;
    void throwBanana() override;
};

class Chimpanzee : public Monkey
{
public:
    Chimpanzee(string n, int e, int h);
    virtual ~Chimpanzee();
    void makeSound() override;
    void doTrick() override;
};

class Parrot : public Bird
{
public:
    Parrot(string n, int e, int h);
    virtual ~Parrot();
    void makeSound() override;
    void doTrick() override;
};

class FlyingMonkey : public Monkey, public Bird
{
public:
    FlyingMonkey(string n, int e, int h);
    virtual ~FlyingMonkey();
    void makeSound() override;
    void fly() override;
    void doTrick() override;
};

#endif // ZOO_H