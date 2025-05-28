#include "Zoo.h"

Animal::Animal(string n, int e, int h) : name(n), energy(e), happiness(h) {}

Animal::~Animal() {
    cout << "calling destructor of " << name << endl;
}

void Animal::setEnergy(int newEnergy) {
    energy = newEnergy;
}

void Animal::setHappiness(int newHappiness) {
    happiness = newHappiness;
}

int Animal::getEnergy() const {
    return energy;
}

int Animal::getHappiness() const {
    return happiness;
}

void Animal::showStatus() const {
    cout << "Name: " << name << ", Energy: " << energy << ", Happiness: " << happiness << endl;
}

void Animal::makeSound() {
    cout << "animal sound" << endl;
}

void Animal::doTrick() {
    cout << "no special trick" << endl;
}

void Animal::fly() {
    cout << "can't fly :(" << endl;
}

void Animal::eatFood() {
    cout << "just eating basic food" << endl;
}

void Animal::eatFood(int energy) {
    if (!energy)
        cout << "no energy for food" << endl;
    else
        cout << "eating food with energy" << endl;
}

Mammal::Mammal(string n, int e, int h) : Animal(n, e, h) {}

Mammal::~Mammal() {
    cout << "calling destructor of Mammal" << endl;
}

void Mammal::makeSound() {
    cout << "mammal sound" << endl;
}

void Mammal::eatFood() {
    cout << "mammal is eating" << endl;
}

Monkey::Monkey(string n, int e, int h) : Animal(n, e, h), Mammal(n, e, h) {}

Monkey::~Monkey() {
    cout << "calling destructor of Monkey" << endl;
}

void Monkey::makeSound() {
    cout << "Ooh ooh aah aah!" << endl;
}

void Monkey::throwBanana() {
    cout << name << " кидає банан!" << endl;
}

Chimpanzee::Chimpanzee(string n, int e, int h) : Animal(n, e, h), Monkey(n, e, h) {}

Chimpanzee::~Chimpanzee() {
    cout << "calling destructor of Chimpanzee" << endl;
}

void Chimpanzee::makeSound() {
    cout << "Chimpanzee chatters!" << endl;
}

void Chimpanzee::doTrick() {
    cout << "Chimpanzee does a backflip!" << endl;
}

Bird::Bird(string n, int e, int h) : Animal(n, e, h) {}

Bird::~Bird() {
    cout << "calling destructor of Bird" << endl;
}

void Bird::makeSound() {
    cout << "Chirp chirp!" << endl;
}

void Bird::fly() {
    cout << "Bird is flying!" << endl;
}

Parrot::Parrot(string n, int e, int h) : Animal(n, e, h), Bird(n, e, h) {}

Parrot::~Parrot() {
    cout << "calling destructor of Parrot" << endl;
}

void Parrot::makeSound() {
    cout << "Parrot says: 'Hello!'" << endl;
}

void Parrot::doTrick() {
    cout << "Parrot rides a tiny bicycle!" << endl;
}

FlyingMonkey::FlyingMonkey(string n, int e, int h) : Animal(n, e, h), Monkey(n, e, h), Bird(n, e, h) {}

FlyingMonkey::~FlyingMonkey() {
    cout << "calling destructor of FlyingMonkey" << endl;
}

void FlyingMonkey::makeSound() {
    cout << "FlyingMonkey: Ooh ooh aah aah and screech!" << endl;
}

void FlyingMonkey::fly() {
    cout << name << " spreads wings and flies!" << endl;
}

void FlyingMonkey::doTrick() {
    cout << name << " does a flying somersault!" << endl;
}