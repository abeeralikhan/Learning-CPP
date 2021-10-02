#include <iostream>

using namespace std;

class Time{
    int hour, min, sec;

    public:
        friend Time addTime(Time t1, Time t2);
        void setTime(int hour, int min, int sec) {
            this->hour = hour;
            this->min = min;
            this->sec = sec;
        }

        void displayTime() {
            cout << hour << ":" << min << ":" << sec << endl;
        }
};

// Foreign Function
Time addTime(Time t1, Time t2) {
    Time t3;
    t3.setTime(t1.hour+t2.hour, t1.min+t2.min, t1.sec+t2.sec);
    return t3;
}

int main() {
    Time t1, t2, t3;
    t1.setTime(2, 20, 10);
    t1.displayTime();
    t2.setTime(5, 10, 0);
    t2.displayTime();

    t3 = addTime(t1, t2);
    t3.displayTime();
    return 0;
}