//
// Created by Александр Мангазеев on 07.01.2021.
//

#ifndef LABA_1_2_IFILE_H
#define LABA_1_2_IFILE_H

#include <iostream>
// TODO поправить все это в UML диаграмме
using namespace std;
class IFile {

public:
    virtual ~IFile() {};
    virtual void setFileName(string name)=0;
    virtual string getFileName()=0;
};

#endif //LABA_1_2_IFILE_H
