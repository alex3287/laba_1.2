//
// Created by Александр Мангазеев on 06.01.2021.
//

#include <iostream>
#include "File.h"
#include "ObserverF_1.h"
#include "ConcreteObservable.h"

using namespace std;

int main()
{
    ConcreteObservable superObserver;
    File A("testName_1");
    cout<<A.getFileName()<<endl;
    ObserverF_1 objF1(&A);
    superObserver.registerObserver(&objF1);
//    objF1.update(&A, "testName_1_change");
//    File B("testName_22");
//    cout<<A.getFileName()<<endl;


    superObserver.checkingCurrentStateFile("testName_1_change");
    superObserver.unregisterObserver(&objF1);
    superObserver.checkingCurrentStateFile("testName_2_change");
    cout<<"\nВывод диструкторов\n"<<endl;
    return 0;
}