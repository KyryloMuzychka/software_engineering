#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>

/*
  4. Напишіть програму, яка використовує <QTextStream> для зчитування чисел з текстового файлу та знаходження їх середнього арифметичного.
  Програма повинна зчитувати кожне число з файлу та додавати його до змінної, яка зберігає загальну суму чисел.
  Після цього програма повинна обчислити середнє арифметичне
  за допомогою формули sum / n, де sum - загальна сума чисел, а n - кількість чисел.
*/

int main(int argc, char *argv[])
{

    int sum = 0, n = 0;

    QFile file("C:/Kyrylo/dstu/pzs/software_engineering/5 CSVReadOnlyWithDisplay/text.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return 1;

    QTextStream in(&file);
    QString line;

    while (!in.atEnd())
    {
        line = in.readLine();
        sum += line.toInt();
        n++;
    }

    file.close();

    qDebug() << "sum: " << sum;
    qDebug() << "res: " << sum / n;

    return 0;
}
