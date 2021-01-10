//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ObserverF_1.h"
ObserverF_1::~ObserverF_1() {
    cout<<"Good By!!! F_1"<<endl;
}

void ObserverF_1::updateName(string newName) {
    cout<<"Файл "<<file->getFileName()<<" изменил свое имя на "<<newName<<endl;
    file->setFileName(newName);
}

ObserverF_1::ObserverF_1(File *file):file(file) { }

string ObserverF_1::getName() {
    return file->getFileName();
}

void ObserverF_1::updateSize(double newSize) {
    cout<<"Файл "<<file->getFileName()<<" изменил совой размер "<<file->getFileSize()<<" и теперь имеет новый размер "<<newSize<<endl;
    file->setFileSize(newSize);
}
