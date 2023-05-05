#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>

/* 3. Напишіть програму, яка використовує <QTextStream> для зчитування даних з консолі та виводу їх на екран.
Програма повинна чекати введення користувача та виводити введений рядок на екран. */

int main(int argc, char *argv[])
{

    qDebug() << "Enter a string: ";
    QTextStream s(stdin);
    QString value = s.readLine();
    qDebug() << value;

    return 0;
}
