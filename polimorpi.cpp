#include <iostream>
using namespace std;

class seseorang {
    public:
    virtual void pesan() = 0;
    // virtual void pesn(){
    // cout << "pesan dari seseorang endl;"
    //
    // }

};
class joko : public seseorang{
    public: 
    void pesam() {
        cout << "Pesan dari joko" << endl;
    }
};
