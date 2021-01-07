//
// Created by Александр Мангазеев on 07.01.2021.
//

#include "IFile.h"

IFile::IFile(std::string name):name(name) {}
IFile::~IFile() {cout<<"Good by "<<name<<endl;}