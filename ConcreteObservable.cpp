//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ConcreteObservable.h"


void ConcreteObservable::notifyObservers(string flag) {
    if (flag=="name"){
        for (auto obj: observers){
            obj->updateName(name);
        }
    }
    else if (flag=="size"){
        for (auto obj: observers){
            obj->updateSize(size);
        }
    }
}

void ConcreteObservable::unregisterObserver(IObserver *obs) {
    cout<<"Прекращена слежка за файлом "<<obs->getName()<<endl;
    observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());
}

void ConcreteObservable::registerObserver(IObserver *obs) {
    cout<<"Начинается слежка за файлом "<<obs->getName()<<endl;
    observers.push_back(obs);
}

void ConcreteObservable::changeFileName(string newName) {
    name = newName;
    notifyObservers("name");
}

void ConcreteObservable::changeFileSize(double newSize) {
    size = newSize;
    notifyObservers("size");
}
