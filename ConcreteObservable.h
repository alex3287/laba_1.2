//
// Created by Александр Мангазеев on 08.01.2021.
//
// ИЗДАТЕЛЬ

#ifndef LAB_1_2_CONCRETEOBSERVABLE_H
#define LAB_1_2_CONCRETEOBSERVABLE_H

#include "Observable.h"
#include "IObserver.h"
#include "File.h"
#include "IFile.h"

// TODO тут нужно дописать необходимые методы в UML
class ConcreteObservable: public Observable<IObserver> {
private:
    vector<IObserver*> observers;
    string name;
    double size;
public:
    void registerObserver(IObserver *obs);
    void unregisterObserver(IObserver *obs);
    void changeFileName(string newName);
    void changeFileSize(double newSize);
    void notifyObservers(string flag);
};


#endif //LAB_1_2_CONCRETEOBSERVABLE_H
