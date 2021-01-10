//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "Observer.h"
Observer::~Observer() {
    cout<<"Good By!!! F_1"<<endl;
}

void Observer::updateName(string newName) {
    cout<<"Файл "<<file->getFileName()<<" изменил свое имя на "<<newName<<endl;
    file->setFileName(newName);
}

Observer::Observer(File *file): file(file) { }

string Observer::getName() {
    return file->getFileName();
}

void Observer::updateSize(double newSize) {
    cout<<"Файл "<<file->getFileName()<<" изменил совой размер "<<file->getFileSize()<<" и теперь имеет новый размер "<<newSize<<endl;
    file->setFileSize(newSize);
}
