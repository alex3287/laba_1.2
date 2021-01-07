//
// Created by Александр Мангазеев on 07.01.2021.
//

#ifndef LABA_1_2_FILE_H
#define LABA_1_2_FILE_H

#include "IFile.h"

class File: IFile {
private:
    string name;
    // TODO тут добавить fileSize (и это же сделать в IFile)
public:
    File(string name);
    ~File();
    void setFileName(string newName);
    string getFileName();
};


#endif //LABA_1_2_FILE_H
