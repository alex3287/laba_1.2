//
// Created by Александр Мангазеев on 08.01.2021.
//
// ПОДПИСЧИК

#ifndef LAB_1_2_OBSERVERF_2_H
#define LAB_1_2_OBSERVERF_2_H

#include "IObserver.h"
#include "Observable.h"
#include "File.h"

//TODO тут идет в разрез с моей UML диаграммой
class ObserverF_2: public IObserver {
private:
    File *file;
public:
    ObserverF_2(File *file);
    ~ObserverF_2();
    string getName();
    void updateName(string newName);
    void updateSize(double newSize);
};

#endif //LAB_1_2_OBSERVERF_2_H
