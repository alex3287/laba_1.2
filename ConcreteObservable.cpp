//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ConcreteObservable.h"

void ConcreteObservable::checkingCurrentStateFile() {
    cout<<"check done!"<<endl;
    cout<<"I have problem here"<<endl;
    notifyObservers();
}

void ConcreteObservable::notifyObservers() {
    cout<<"notify done!"<<endl;
}