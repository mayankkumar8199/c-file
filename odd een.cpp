#include<iostream>
using namespace std;

class Test {
    int num;
public:

    void input() {
        cout << "Enter a Number :";
        cin>>num;
    }

    void check() {
        if (num % 2 == 0) {
            cout << "\nNumber is Even :" << num;
        } else {
            cout << "\nNumber is Odd :" << num;
        }
    }
};

int main() {

    Test tt;

    tt.input();
    tt.check();

    return 0;
}
