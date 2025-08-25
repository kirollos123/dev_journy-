#include <iostream>
using namespace std;
class thisPointer{
    public:
    void dispaly (){
        cout <<" this pointer holds:"<< this<< endl;
    }
};
int main (){
    thisPointer obj;
   
      thisPointer obj2;
    obj.dispaly();
        obj.dispaly();
        obj2.dispaly();
    return 0;
}
