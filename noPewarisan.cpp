#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan() {
        cout << "halo saya function dari baseClass";

    }
};
class baseClass1{
    public:
    virtual void perkenalan() {
        cout << "Hallo saya funtion dari base class" << endl;
    }
};

class drivedClass : public baseClass1{
    public:
    void perkenalan() {
        cout << "Halo saya function dari driveClass" << endl;
    }

};
int main () {
    drivedClass a;
    a.perkenalan();
    return 0;
}