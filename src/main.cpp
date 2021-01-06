#include <QString>
//#include <String>
#include <iostream>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include "ObserverMyObject.h"
#include "File.h"
using namespace std;

int main() {
    QTextStream out(stdout);
    QTextStream in(stdin);
//    QCoreApplication a(argc, argv); TODO вот тут проверить

// Сделаю для 2-х файлов, пока не могу хранить файлы в контейнере
// Файлы должны быть на диске созданы заранее
    QString fileName;
    QString fileName2;
    out<<"Enter file name 1 -> "<<endl;
    in >> fileName;
    out<<"Enter file name 2 -> "<<endl;
    in >> fileName2;
// Проверяем существование файла
    if ((!QFile(fileName).exists()) || (!QFile(fileName2).exists())) {
        qWarning("The file does not exist"); // если файл не найден, то выводим предупреждение и завершаем работу программы
        return 1;
    }
    QString s = "asdf";
    ObserverMyObject myObj;
    File objA(fileName);
    out<<objA.getFileName()<<endl;
//    File objB(fileName2);
//    myObj.registerObserver(&objA);
//    myObj.registerObserver(&objB);
//    myObj.checkingCurrentStatus();
//    myObj.unregisterObserver(&objB);
//    myObj.CheckingCurrentStateObj();
//    myObj.unregisterObserver(&objA);
//    myObj.CheckingCurrentStateObj();

    return 0;
}
