#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

using namespace std;

/*1. Напишіть програму, яка використовує <QTextStream> для зчитування даних з текстового файлу.
Програма повинна зчитувати кожен рядок з файлу та виводити його на екран консолі.*/


int main(int argc, char *argv[])
{

    QFile file("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/text.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return 1;

    QTextStream in(&file);
    QString line;

    while (!in.atEnd())
    {
        line = in.readLine();
        qDebug() << line;
    }

    return 0;
}
