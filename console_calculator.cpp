#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите оператор (+ - * /): ";
    cin >> op;

    cout << "Введите второе число: ";
    cin >> b;

    switch (op) {
        case '+': cout << "Результат: " << (a + b) << endl; break;
        case '-': cout << "Результат: " << (a - b) << endl; break;
        case '*': cout << "Результат: " << (a * b) << endl; break;
        case '/':
            if (b != 0)
                cout << "Результат: " << (a / b) << endl;
            else
                cout << "Ошибка: деление на 0" << endl;
            break;
        default: cout << "Неверный оператор" << endl;
    }

    system("pause");
    return 0;
}
