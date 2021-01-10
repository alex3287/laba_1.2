//
// Created by Александр Мангазеев on 08.01.2021.
//

#ifndef LAB_1_2_IOBSERVER_H
#define LAB_1_2_IOBSERVER_H

#include <iostream>

class IObserver {
public:
    virtual ~IObserver(){};
    virtual std::string getName()=0;
    virtual void updateName(std::string newName)=0;
    virtual void updateSize(double newSize)=0;
};


#endif //LAB_1_2_IOBSERVER_H
