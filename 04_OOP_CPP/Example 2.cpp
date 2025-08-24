#include <iostream>
using namespace std;
class line
{
public:
    void setlength(double len); // method prototype
    double getlength(void);     // method prototype
    line(double len);

private:
    double length;
};
line ::line(double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}
void line::setlength(double len)
{
    length = len;
}
double line::getlength(void){
    return length;
}
int main (){
    line line1(10.0); // create line1 object
    line line2(20.0); // create line2 object
    cout << "Length of line1 : " << line1.getlength() << endl;
    cout << "Length of line2 : " << line2.getlength() << endl;
    return 0;
}
