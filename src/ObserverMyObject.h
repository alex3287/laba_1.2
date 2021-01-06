//
// Created by Александр Мангазеев on 05.01.2021.
//

#ifndef LABA_1_2_OBSERVERMYOBJECT_H
#define LABA_1_2_OBSERVERMYOBJECT_H
#include <QFileInfo>
#include "Observable.h"
#include "IFile.h"

class ObserverMyObject: public Observable<IFile> {
public:
    void checkingCurrentStatus();
};


#endif //LABA_1_2_OBSERVERMYOBJECT_H
