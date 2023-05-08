#include <iostream>

using namespace std;

class TimeBomb {
private:
    int sec;
    int dmg;

public:
    TimeBomb() {
        sec = 5;
        dmg = 10;
        cout << sec << " " << dmg << endl;
        Timer();
        delete this;
    }

    TimeBomb(int x) {
        sec = x;
        dmg = 10;
        cout << sec << " " << dmg << endl;
        Timer();
        delete this;
    }

    TimeBomb(int x, int y) {
        sec = x;
        dmg = y;
        cout << sec << " " << dmg << endl;
        Timer();
    }

    ~TimeBomb() {
        cout << "BOOOOOM" << endl;
    }

    void Timer() {
        if(--sec <= 0) return;
        cout << sec << " seconds left" <<endl;
        Timer();
    }
};


int main(int argc, char *argv[]) {
    TimeBomb *bomb1;
    cout << "Bomb 1 start up" << endl;
    bomb1 = new TimeBomb;

    TimeBomb *bomb2;
    cout << "Bomb 2 start up" << endl;
    bomb2 = new TimeBomb(6);

    TimeBomb *bomb3;
    cout << "Bomb 3 start up" << endl;
    bomb3 = new TimeBomb(6, 20);

    return 0;
}
