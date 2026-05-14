#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> row = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};

    int lenth = row.size();

    int i = 0;
    int j = 1;
    int out = 0;

    while (true) {

        if (row[i] > row[j]) {

            out = 0;

            string a = row[i];
            string b = row[j];

            row[i] = b;
            row[j] = a;
        }

        i += 1;
        j += 1;

        if (lenth == i + 1) {

            i = 0;
        }

        if (lenth == j) {

            j = 1;
        }

        if (out == lenth) {

            break;
        }

        out += 1;
    }

    for (string x : row) {

        cout << x << " ";
    }

    return 0;
}