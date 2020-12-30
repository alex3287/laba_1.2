#include <QString>
#include <iostream>

int main() {
    QString russianString("Русский текст");
    std::cout << russianString.toStdString() << std::endl;
    return 0;
}
