#include <iostream>
using namespace std;

class PolymorphismExample {
    public:
    void fun (int x) {
        cout << "Called fun() with int: "<< x << endl;
    }
    void fun (float y) {
        cout << "Called fun() with float: " << y << endl;
    }
};

int main (){
    PolymorphismExample obj;
    obj.fun(55);        // Calls fun(int)
    obj.fun(45.55);     // Calls fun(float)
    return 0;           // Corrected typo here
}
