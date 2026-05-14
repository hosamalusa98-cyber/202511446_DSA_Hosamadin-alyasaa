#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> row = {109,99,23,45,23,2,5,1};

    int lenth = row.size();

    int i = 0;
    int j = 1;
    int out = 0;

    while (true) {

        if (row[i] > row[j]) {

            out = 0;

            int a = row[i];
            int b = row[j];

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

    for (int x : row) {

        cout << x << " ";
    }

    return 0;
}