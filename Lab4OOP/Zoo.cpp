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
void Animal::doTrick(){
    cout << "no special trick" << endl;
}
void Animal::fly(){
    cout << "can't fly :(" << endl;
}
void Animal::eatFood(){
    cout << "just eating basic food" << endl;
}
void Animal::eatFood(int energy) {
    if(!energy)
        cout << "no energy for food" << endl;
    else
        cout << "eating food with energy" << endl;
}
void Animal::throwBanana(){
    cout << "no banana to throw" << endl;
}

Mammal::Mammal(string n, int e, int h) : Animal(n, e, h) {}

void Mammal::makeSound() {
    cout << "mammal sound" << endl;
}

void Mammal::eatFood() {
    cout << "mammal is eating" << endl;
}

Monkey::Monkey(string n, int e, int h) : Mammal(n, e, h) {}

void Monkey::makeSound() {
    cout << "Ooh ooh aah aah!" << endl;
}

void Monkey::throwBanana() {
    cout << "Monkey throws a banana!" << endl;
}

Chimpanzee::Chimpanzee(string n, int e, int h) : Monkey(n, e, h) {}

void Chimpanzee::makeSound() {
    cout << "Chimpanzee chatters!" << endl;
}

void Chimpanzee::doTrick() {
    cout << "Chimpanzee does a backflip!" << endl;
}

Bird::Bird(string n, int e, int h) : Animal(n, e, h) {}

void Bird::makeSound() {
    cout << "Chirp chirp!" << endl;
}

void Bird::fly() {
    cout << "Bird is flying!" << endl;
}

Parrot::Parrot(string n, int e, int h) : Bird(n, e, h) {}

void Parrot::makeSound() {
    cout << "Parrot says: 'Hello!'" << endl;
}

void Parrot::doTrick() {
    cout << "Parrot rides a tiny bicycle!" << endl;
}
