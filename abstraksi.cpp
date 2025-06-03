#include <iostream>
using namespace std;

class AbstraksiKlas{
    private: string X,Y;

    public:
    //method untuk mengisi nilai
    // private member
    void setXY(string a, string b) {
        X = a;
        Y = b;

    }
    //menampilkan nilai
    void display() {
        cout << "X = " << X << endl;
        cout << "X = " << Y << endl;
    }
};

int main() {
    AbstraksiKlas ak;
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();

    return 0;

}