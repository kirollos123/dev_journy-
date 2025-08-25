#include <iostream>
using namespace std;
class chain{
    private:
    int value;
    public:
    chain& setvalue(int v){
        this->value =v ;
        return * this;

    }
    void display (){
        cout << "valueis :"<< value << endl;
    }
};
int main (){
    chain obj; 
    obj.setvalue(100).display();
    return 0;
}