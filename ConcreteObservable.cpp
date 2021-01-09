//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ConcreteObservable.h"


void ConcreteObservable::notifyObservers() {
    for (auto obj: observers){
        obj->update(name);
    }
}

void ConcreteObservable::checkingCurrentStateFile(string newName) {
    name = newName;
    notifyObservers();
}

void ConcreteObservable::unregisterObserver(IObserver *obs) {
    observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());
}

void ConcreteObservable::registerObserver(IObserver *obs) {
    observers.push_back(obs);
}
