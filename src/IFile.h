//
// Created by Александр Мангазеев on 05.01.2021.
//

#ifndef LABA_1_2_IFILE_H
#define LABA_1_2_IFILE_H

#include <QObject>
#include <QString>
//Класс интерфейс, от которого будет наследоваться класс File


//наследуем от QObject чтобы можно было работать со slots и signal
class IFile: public QObject {
Q_OBJECT
public:
    ~IFile() {};
public slots: //слот отвечающий за обновления размера файла
    virtual void update_size(void) {};
};


#endif //LABA_1_2_IFILE_H
