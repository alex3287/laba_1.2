//
// Created by Александр Мангазеев on 08.01.2021.
//

#ifndef LAB_1_2_CONCRETEOBSERVABLE_H
#define LAB_1_2_CONCRETEOBSERVABLE_H

#include "Observable.h"
#include "IObserver.h"

// TODO тут нужно дописать необходимые методы в UML
class ConcreteObservable: public Observable<IObserver> {
public:
    void checkingCurrentStateFile();
    void notifyObservers();
};


#endif //LAB_1_2_CONCRETEOBSERVABLE_H
