#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() {
        cout << "halo saya function dari baseClass";

    }
};
class drivedClass : public baseClass{
    public:
    void perkenalan() {
        cout << "Halo saya function dari driveClass";
    }

};
int main () {
    drivedClass a;
    a.perkenalan();
    return 0;
}