//
// Created by Александр Мангазеев on 05.01.2021.
//

#ifndef LABA_1_2_FILE_H
#define LABA_1_2_FILE_H

#include <QString>
//#include <QObject>
//#include "IFile.h"

class File  {
//Q_OBJECT
public:
    File(QString f_name) {name = f_name;};
    ~File(){};
    int newFileSize(void);
    QString getFileName();
//    {
//        return name;
//    };


//public slots:
//    void update_size(void);
private:
    QString name;
    int fileSize;
};


#endif //LABA_1_2_FILE_H
