//#include <iostream>
//using namespace std;
//
//class Time {
//public:
//    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}
//
//    Time& setTime(int h, int m, int s) {
//        hour = h;
//        minute = m;
//        second = s;
//        return *this;
//    }
//
//    Time& setHour(int h) {
//        hour = h;
//        return *this;
//    }
//
//    Time& setMinute(int m) {
//        minute = m;
//        return *this;
//    }
//
//    Time& setSecond(int s) {
//        second = s;
//        return *this;
//    }
//
//    int getHour() const {
//        return hour;
//    }
//
//    int getMinute() const {
//        return minute;
//    }
//
//    int getSecond() const {
//        return second;
//    }
//
//    void printUniversal() const {
//       cout << hour << ":" << minute << ":" << second << std::endl;
//    }
//
//private:
//    int hour;
//    int minute;
//    int second;
//};
//
//int main() {
//    Time t;
//    t.setTime(12, 34, 56).printUniversal(); // using cascading technique to set the time and print it
//    return 0;
//}
