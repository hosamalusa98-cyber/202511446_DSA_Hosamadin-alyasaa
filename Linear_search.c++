#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> row1;
    vector<int> row2;

    int i;
    cout << "Enter the number of your famliy: ";
    cin >> i;

    for (int t = 0; t < i; t++) {

        string name;
        int age;

        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the age: ";
        cin >> age;

        row1.push_back(name);
        row2.push_back(age);
    }

    while (true) {

        int f = 0;

        cout << "1. Search for a member of the famliy" << endl;
        cout << "2. Exit" << endl;

        string in_put;

        cout << "Enter your option: ";
        cin >> in_put;

        if (in_put == "1") {

            string nameser;

            cout << "Enter the name: ";
            cin >> nameser;

            int n = 0;

            for (string i : row1) {

                if (i == nameser) {

                    f = 1;

                    cout << i << " is found and aged is " << row2[n] << endl;
                }

                n += 1;
            }

            if (f == 0) {

                cout << "Not found" << endl;
            }
        }

        else if (in_put == "2") {

            cout << "Bye!!!" << endl;
            break;
        }
    }

    return 0;
}