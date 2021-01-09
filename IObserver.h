//
// Created by Александр Мангазеев on 08.01.2021.
//

#ifndef LAB_1_2_IOBSERVER_H
#define LAB_1_2_IOBSERVER_H

#include "IFile.h"

class IObserver {
public:
    virtual ~IObserver(){};
    // TODO возможно нужно еще что-то передать??
//    virtual void update(IFile *file)=0;
    virtual void update(string newName)=0;
//    virtual void changeSize(File *file, string newSize)=0;
};


#endif //LAB_1_2_IOBSERVER_H
