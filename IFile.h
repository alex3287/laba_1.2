//
// Created by Александр Мангазеев on 07.01.2021.
//

#ifndef LABA_1_2_IFILE_H
#define LABA_1_2_IFILE_H

#include <iostream>

class IFile {
    using namespace std;
private:
    String name;
public:
    IFile(String name);
    ~IFile();

};


#endif //LABA_1_2_IFILE_H
