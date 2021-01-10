//
// Created by Александр Мангазеев on 07.01.2021.
//

#include "File.h"

File::File(string name):name(name) {
    size = 10.5;
}

File::~File() {cout<<"Good by "<<name<<endl;}

string File::getFileName() {
    return name;
}
void File::setFileName(string newName) {
    name = newName;
}

void File::setFileSize(double newSize) {
    size = newSize;
}

double File::getFileSize() {
    return size;
}
