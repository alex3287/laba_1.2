//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ObserverF_1.h"
ObserverF_1::~ObserverF_1() {
    //TODO возможно тут лучше уничтожить файл?
    cout<<"Good By!!! F_1"<<endl;
}

const void ObserverF_1::changeName(File *file, string newName) {
    file->setFileName(newName);
}