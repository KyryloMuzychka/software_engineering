#include <QFile>
#include <QTextStream>

//Завдання: Напишіть програму, яка використовує <QTextStream> для запису даних у текстовий файл.

int main()
{
    QFile file("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/output.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return 1;

    QTextStream out(&file);
    out << "Hello, world!\n";
    out << "This is a test.\n";

    file.close();
    return 0;
}

