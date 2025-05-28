#include "Zoo.h"

int main() {
    Animal *animal0 = new Monkey("George", 50, 70);
    animal0->showStatus();
    animal0->makeSound();
    animal0->throwBanana();
    cout << "\n";

    Animal *animal1 = new Chimpanzee("Coco", 90, 110);
    animal1->showStatus();
    animal1->makeSound();
    animal1->eatFood(animal1->getEnergy());
    animal1->doTrick();
    cout << "\n";

    Animal *animal2 = new Parrot("Polly", 66, 66);
    animal2->showStatus();
    animal2->makeSound();
    animal2->fly();
    animal2->doTrick();
    cout << "\n";

    FlyingMonkey *fm = new FlyingMonkey("Wizard", 100, 120);
    fm->showStatus();
    fm->makeSound();
    fm->fly();
    fm->throwBanana();
    fm->doTrick();
    cout << "\n";

    delete animal0;
    delete animal1;
    delete animal2;
    delete fm;

    return 0;
}