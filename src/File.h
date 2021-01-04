//
// Created by Александр Мангазеев on 05.01.2021.
//

#ifndef LABA_1_2_FILE_H
#define LABA_1_2_FILE_H

#include <QObject>
#include <QString>
#include "IFile.h"

class File: public IFile {
Q_OBJECT
public:
    File(QString name);
    ~File();
    int newFileSize(void);
    QString getFileName();
public slots:
    void update_size(void);
private:
    QString name;
    int fileSize;
};


#endif //LABA_1_2_FILE_H
