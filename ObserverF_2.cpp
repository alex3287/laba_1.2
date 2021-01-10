//
// Created by Александр Мангазеев on 08.01.2021.
//

#include "ObserverF_2.h"
ObserverF_2::~ObserverF_2() {
    cout<<"Good By!!! F_2"<<endl;
}

void ObserverF_2::updateName(string newName) {
    cout<<"Файл "<<file->getFileName()<<" изменил свое имя на "<<newName<<endl;
    file->setFileName(newName);
}

ObserverF_2::ObserverF_2(File *file):file(file) { }

string ObserverF_2::getName() {
    return file->getFileName();
}

void ObserverF_2::updateSize(double newSize) {
    cout<<"Файл "<<file->getFileName()<<" изменил совой размер "<<file->getFileSize()<<" и теперь имеет новый размер "<<newSize<<endl;
    file->setFileSize(newSize);
}
