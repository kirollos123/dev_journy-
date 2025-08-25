#include <iostream>
using namespace std;
class box{
    double width;
    public:
    friend void printwidth(box objbox);// friend function
    void setwidth (double wid); 
};
void box::setwidth(double wid){
 width = wid; 

}
void printwidth(box objbox){
    cout << "width is :"<< objbox.width << endl;
}
int main (){
    box box1;
    box1.setwidth(10.0);
    printwidth(box1);
    return 0;
}