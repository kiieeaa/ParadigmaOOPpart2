#include <iostream>
using namespace std;

class remoteLampu {
    private:
    string saklarNo[10] ;
    public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSatlarNo(int i) {
        return saklarNo [i];
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0,"lampu teras rumah");
    lampuRumah.setSaklarNo(1, "lampu rumah tamu");
    lampuRumah.setSaklarNo(2, "lampu kamar tidur");
    lampuRumah.setSaklarNo(3, "lampu dapur");

    cout << lampuRumah.getSatlarNo(0) << endl;
    cout << lampuRumah.getSatlarNo(1) << endl;
    cout << lampuRumah.getSatlarNo(2) << endl;
    cout << lampuRumah.getSatlarNo(3) << endl;

    return 0;
    
}