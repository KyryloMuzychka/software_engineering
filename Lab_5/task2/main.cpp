#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>


/*2. Напишіть програму, яка використовує <QTextStream> для запису даних у текстовий файл.
Програма повинна запитувати користувача про введення рядка тексту, та записувати цей рядок у файл.*/

int main(int argc, char *argv[])
{
    qDebug() << "Enter a string: ";
    QTextStream s(stdin);
    QString value = s.readLine();

    QFile file("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/output.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return 1;

    QTextStream out(&file);
    out << value;
    out << "\n";
    out << value;

    file.close();

    return 0;
}
