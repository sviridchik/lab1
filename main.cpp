#include <iostream>
#include <cmath>

using namespace std;


bool if_acceptable(int &i, int &k) {
    int exp = i * i + k * k;
    if (sqrt(exp) == int(sqrt(exp))) {
        return true;
    } else {
        return false;
    }
}


void pif() {
    int count = 0, i = 3, k, m, multip = 2;
    while (count < 10) {
        bool flag = false;
        if (i % 4 != 0) {
            k = (i * i - 1) / 2;
            m = (i * i + 1) / 2;
        } else {
            k = (i * multip - 1);
            m = (i * multip + 1);
            flag = true;
        }
        if (if_acceptable(i, k)) {
            cout << i << "^2\t" << k << "^2\t" << m << "^2\t" << endl;
            count++;
            if (flag) {
                multip++;
            }
        }

        i++;
    }

}


int main() {
    pif();


    return 0;
}