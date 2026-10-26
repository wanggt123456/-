#include <iostream>
using namespace std;

int main()
{
    double I, bonus;

    cout << "Input profit I (yuan): ";
    cin >> I;

    if (I <= 0)
        bonus = 0;
    else if (I <= 100000)
        bonus = I * 0.10;
    else if (I <= 200000)
        bonus = 100000 * 0.10 + (I - 100000) * 0.075;
    else if (I <= 400000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + (I - 200000) * 0.05;
    else if (I <= 600000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
    else if (I <= 1000000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
    else
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;

    cout << "Bonus = " << bonus << " yuan" << endl;

    return 0;
}
