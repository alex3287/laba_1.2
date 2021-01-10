cmake_minimum_required(VERSION 3.17)
project(lab_1.2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_1.2 main.cpp IFile.h IFile.cpp File.h File.cpp
        Observable.h IObserver.h ObserverF_1.h ObserverF_1.cpp
        ConcreteObservable.h ConcreteObservable.cpp
        ObserverF_2.h ObserverF_2.cpp )