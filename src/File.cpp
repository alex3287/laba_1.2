//
// Created by Александр Мангазеев on 05.01.2021.
//

//#include <QTextStream>
//#include <QFileInfo>
#include "File.h"
#include <QString>

QString File::getFileName() {
    return name;
}
//#include "client.h" // TODO тут необходимо изменить

//QTextStream out(stdout);
//QTextStream in(stdin);

//File::File(QString name): name(name){};
//File::File(): {
//    name = "hello";
//};


//Client *ptrClient = new(Client);

// Возвращает имя файла
//QString File::getFileName()
//{
//    return name;
//};

// Обновляем размер файла
//void File::update_size(void)
//{
//    int newSize = newFileSize();
//    if (fileSize != newSize){
//        fileSize = newSize;
//        emit ptrClient -> size_change();
//    }
//    out<<"Size at "<<name<<" is now "<<fileSize<<endl;
//}

// Получаем размер файла
//int File::newFileSize(void)
//{
//    // Создаем объект
//    QFileInfo fileinfo(name);
//
//    // Определяем размер файла с помощью метода size()
//    qint64 size = fileinfo.size();
//    return size;
//}

