//
// Created by Александр Мангазеев on 08.01.2021.
//
// ПОДПИСЧИК

#ifndef LAB_1_2_OBSERVER_H
#define LAB_1_2_OBSERVER_H

#include "IObserver.h"
#include "Observable.h"
#include "File.h"

class Observer: public IObserver {
private:
    File *file;
public:
    Observer(File *file);
    ~Observer();
    string getName();
    void updateName(string newName);
    void updateSize(double newSize);
};

#endif //LAB_1_2_OBSERVER_H
