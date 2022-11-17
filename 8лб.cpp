#include "Header.h"
double secondA(double x, double y)
{
    double a;
    if ((pow(M_E, ((-x) - 2)) + 1 / (pow(x, 2) + 4)) != 0) {
        a = (1 + y) * (x + y / (pow(x, 2) + 4)) / (pow(M_E,((-x) - 2)) + 1 / (pow(x, 2) + 4));
        return a;
    }
    else {
        cout << "Значення змінних у першому рівнянні не відповідають ОДЗ!";
        return 0;
    }
}

double secondB(double x, double y, double z)
{
    double a;
    if ((pow(x, 4) / 2 + pow(sin(z), 2)) != 0) {
        a = ((1 + cos(y - 2)) / (pow(x, 4) / 2 + pow(sin(z), 2))) - cos(13);
        return a;
    }
    else {
        cout << "Значення змінних у другому рівнянні не відповідають ОДЗ!";
        return 0;
    }
}
