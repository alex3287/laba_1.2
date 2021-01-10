//
// Created by Александр Мангазеев on 06.01.2021.
//

#include <iostream>
#include "File.h"
#include "Observer.h"
#include "ConcreteObservable.h"

using namespace std;

void split(string description){
//    процедура разделитель
    cout<<"\n"<<description<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
};

int main()
{
//    Создание объекты Издатели
    ConcreteObservable superObserver;
    ConcreteObservable superObserver2;

//    Создание файлов имена задаю, а размер по умолчанию 10.5
    File A("file_A_v1");
    File B("file_B_v1");

//  Создание двух подписчиков, которые будут следить за разными издателями
    Observer objF1(&A);
    Observer objF2(&B);
    split("Начинаем слежку");

//  Начинаем слежку
    superObserver.registerObserver(&objF1);
    superObserver2.registerObserver(&objF2);
    split("Меняем имена и размеры файлов");

//  Меняем имена и размеры файлов
    superObserver.changeFileName("file_A_v2");
    superObserver.changeFileSize(25);
    superObserver2.changeFileName("file_B_v2");
    superObserver2.changeFileSize(65);
    split("Отменяем слежку за файлами");

//  Отменяем слежку за файлами
    superObserver.unregisterObserver(&objF1);
    superObserver2.unregisterObserver(&objF2);
    split("Меняем имена и размеры файлов (они не должны будут измениться)");

//  Меняем имена и размеры файлов (они не должны будут измениться)
    superObserver.changeFileName("file_A_v3");
    superObserver2.changeFileSize(344);
    split("Проверяем имя и размер");

//  Проверяем имя и размер
    cout<<A.getFileName()<<endl;
    cout<<B.getFileSize()<<endl;
    split("Снова начинаем слежку");

//  Снова начинаем слежку
    superObserver.registerObserver(&objF1);
    superObserver2.registerObserver(&objF2);
    split("Меняем имя и размер");

//  Меняем имя и размер
    superObserver.changeFileName("file_A_v4");
    superObserver2.changeFileSize(100);
    split("Проверяем имя и размер");

//  Проверяем имя и размер
    cout<<A.getFileName()<<endl;
    cout<<B.getFileSize()<<endl;
    split("Вывод диструкторов");

//    cout<<"\nВывод диструкторов\n"<<endl;
    return 0;
}