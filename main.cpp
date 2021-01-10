//
// Created by Александр Мангазеев on 06.01.2021.
//

#include <iostream>
#include "File.h"
#include "ObserverF_1.h"
#include "ObserverF_2.h"
#include "ConcreteObservable.h"

using namespace std;

int main()
{
//    Создание объектов
    ConcreteObservable superObserver;
    File A("testName_1");
    ObserverF_1 objF1(&A);
    superObserver.registerObserver(&objF1);

//    Тестируем наблюдение
    superObserver.changeFileName("testName_1_change");
    superObserver.changeFileSize(25);
    superObserver.unregisterObserver(&objF1);
    superObserver.changeFileName("testName_2_change");
    superObserver.changeFileSize(344);
    superObserver.registerObserver(&objF1);
    superObserver.changeFileName("testName_3_change");
    cout<<A.getFileSize()<<endl;
    cout<<"\nВывод диструкторов\n"<<endl;
    return 0;
}