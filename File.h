//
// Created by Александр Мангазеев on 07.01.2021.
//

#ifndef LABA_1_2_FILE_H
#define LABA_1_2_FILE_H

#include "IFile.h"

class File {
private:
    String name;
    // TODO тут добавить fileSize (и это же сделать в IFile)
public:
    File(String name);
    ~File();
};


#endif //LABA_1_2_FILE_H
