#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>

/*
 * 5. Напишіть програму, яка використовує <QTextStream> для зчитування даних з текстового файлу та запису даних у інший текстовий файл.
   Програма повинна зчитувати кожен рядок з файлу та записувати його до нового файлу, при цьому замінюючи усі входження певного слова на інше слово.
   Слова для заміни програма повинна запитувати у користувача.
*/


int main(int argc, char *argv[])
{
    qDebug() << "Enter a string for change: ";
    QTextStream s1(stdin);
    QString value = s1.readLine();

    qDebug() << "Enter a string for new value: ";
    QTextStream s2(stdin);
    QString newValue = s2.readLine();

    QFile fileRead("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/text.txt");
    if (!fileRead.open(QIODevice::ReadOnly | QIODevice::Text))
        return 1;
    QTextStream in(&fileRead);

    QFile fileWrite("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/output.txt");
    if (!fileWrite.open(QIODevice::WriteOnly | QIODevice::Text))
        return 1;
    QTextStream out(&fileWrite);

    QString line;

    while (!in.atEnd())
    {

        line = in.readLine();
        if (line == value)
        {
            out << newValue;
        }
        else
        {
            out << line;
        }
        out << "\n";
    }

    return 0;
}
