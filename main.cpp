/* директива препроцессора #include - с помощью этой директивы мы подключаем заголовочный файл iostream
 * кот. позволяет работать с потоками ввода-вывода
 * using namespace std; - с помощью этой директивы мы устанавливаем стандартное пространство имен sstd
 * т.к. каждая программа и программная библиотека библиотека используют свое пространство имен
 * В C++ нет функци вывода-ввода, но есть операторы выводв-ввода: << и >>
 * cout - Console Out
 * cin - Console Input
 * код возврата 0 - соответсвует отсутствию ошибок, любое другое значение означает код ошибки
 */
#include <iostream>

using namespace std;

int main() {
    /*string name;
    cout << "Enter name:";
    cin >> name;
    cout << "Hello, " << name << "\n";

    int number;
    cout << "Type number:";
    cin >> number;
    cout << "You're input number is " << number << endl;

    int one = 7, sum = 0, two = 2;
    sum = one + two;
    cout << "Sum numbers is " << sum << endl;

    int first, second, summary;

    cout << "Input two integers:" << endl;
    cin >> first >> second;

    summary = first + second;
    cout << "Result: " << first << " + " << second << " = " << summary << endl;*/

    // модификатор endl означает конец строки и переход на новую строку

    /*
     * 7 базовых типов данных:
     * 1. char - символьный
     * 2. wchar_t - символьный двухбайтовый
     * 3. bool - логический
     * 4. int - целочисленный
     * 5. float - вещественный
     * 6. double - вещественный двойной точности
     * 7. void - пустой
     *
     * Модификаторы типа:
     * (ключевые слова, кот могут указываться перед именем базового типа и модифицировать его)
     * signed - значение со знаком
     * unsigned - значение без знака
     * short - укороченный
     * long - расширенный
     * long long - целевой тип, имеет размер не более 64 бит (С++ 11)
     *
     * Числовые литералы:
     * тип float 5.3F
     * тип long double 5.3L
     * тип long int 123L
     * целочисленный литерал без знака 123U
     */
    /*

    char parameter1 = 'A'; // символы должны быть заключены в одинарные кавычки
    char parameter2 = 'B';
    char result = parameter1 + parameter2;
    char g = 131;

    cout << "Your character is " << result << " has index " << parameter1 + parameter2 << endl; // Г
    cout << g << endl;

    bool flag;
    flag = true_type();

    //flag = 0;

    cout << "Flag is " << boolalpha << flag; // boolalpha - манипулятор для вывода именного значения true/false


    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " byte" << endl;
    cout << "Size of double: " << sizeof(double) << " byte" << endl;
    cout << "Size of long int: " << sizeof(long int) << " byte" << endl;

    const float gravity = 9.8;
    cout << "Gravity is " << gravity;

    // приведение типов

     char ch;
     cout << "Type symbol:";
     cin >> ch;
     cout << "ASCII: " << int(ch) << endl;
    */
}

