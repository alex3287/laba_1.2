//
// Created by Александр Мангазеев on 08.01.2021.
//

#ifndef LAB_1_2_OBSERVERF_1_H
#define LAB_1_2_OBSERVERF_1_H

#include "IObserver.h"
//TODO тут идет в разрез с моей UML диаграммой
class ObserverF_1: public IObserver {
public:
    ~ObserverF_1();
    const void changeName(File *file, string newName);
};


#endif //LAB_1_2_OBSERVERF_1_H
