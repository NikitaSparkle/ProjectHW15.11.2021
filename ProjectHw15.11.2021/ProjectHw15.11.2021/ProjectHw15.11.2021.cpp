#include <iostream>

using namespace std;

int main()
{
    system("color 02");

    int action = 0;

    while (action != 5) {
        cout << "1 - '+'" << endl;
        cout << "2 - '-'" << endl;
        cout << "3 - '*'" << endl;
        cout << "4 - '/'" << endl;
        cout << "5 - '>'" << endl;
        cout << "6 - '<'" << endl;
        cout << "7 - '>='" << endl;
        cout << "8 - '<='" << endl;
        cout << "9 - Exit" << endl;
        cout << ">> ";
        cin >> action;

        if (action == 9) {
            break;
        }

        double valueA;
        cout << "Enter Value A: ";
        cin >> valueA;

        double valueB;
        cout << "Enter Value B: ";
        cin >> valueB;

        if (valueB == 0 && action == 4) {
            cout << "Error. You cannot do this." << endl;
            continue;
        }

        double result;

        switch (action) {
        case 1:
            result = valueA;
            result = result + valueB;
            cout << endl;
            cout << "Result: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            result = valueA;
            result = result - valueB;
            cout << endl;
            cout << "Result: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            result = valueA;
            result = result * valueB;
            cout << endl;
            cout << "Result: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            result = valueA;
            result = result / valueB;
            cout << endl;
            cout << "Result: " << result << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            if (valueA > valueB) {
                cout << endl;
                cout << "Result: True" << result << endl;
            }
            else {
                cout << endl;
                cout << "Result: False" << result << endl;
            }
            system("pause");
            system("cls");
            break;
        case 6:
            if (valueA < valueB) {
                cout << endl;
                cout << "Result: True" << result << endl;
            }
            else {
                cout << endl;
                cout << "Result: False" << result << endl;
            }
            system("pause");
            system("cls");
        case 7:
            if (valueA >= valueB) {
                cout << endl;
                cout << "Result: True" << result << endl;
            }
            else {
                cout << endl;
                cout << "Result: False" << result << endl;
            }
            system("pause");
            system("cls");
            break;
        case 8:
            if (valueA <= valueB) {
                cout << endl;
                cout << "Result: True" << result << endl;
            }
            else {
                cout << endl;
                cout << "Result: False" << result << endl;
            }
            system("pause");
            system("cls");
            break;
        case 9:
            action = 5;
            break;
        }
    }
}
