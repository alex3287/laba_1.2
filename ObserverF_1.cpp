//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ObserverF_1.h"
ObserverF_1::~ObserverF_1() {
    //TODO возможно тут лучше уничтожить файл?
    cout<<"Good By!!! F_1"<<endl;
}

void ObserverF_1::update(string newName) {
    file->setFileName(newName);
    cout<<"файл изменил свое имя на "<<newName<<endl;
}

ObserverF_1::ObserverF_1(File *file):file(file) { }
