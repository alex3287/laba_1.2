//
// Created by Александр Мангазеев on 08.01.2021.
//
// ПОДПИСЧИК

#ifndef LAB_1_2_OBSERVERF_1_H
#define LAB_1_2_OBSERVERF_1_H

#include "IObserver.h"
#include "Observable.h"
#include "File.h"

//TODO тут идет в разрез с моей UML диаграммой
class ObserverF_1: public IObserver {
private:
    File *file;
public:
    ObserverF_1(File *file);
    ~ObserverF_1();
    string getName();
    void updateName(string newName);
    void updateSize(double newSize);
};

#endif //LAB_1_2_OBSERVERF_1_H
