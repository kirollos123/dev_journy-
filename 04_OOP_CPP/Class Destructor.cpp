#include <iostream>
using namespace std;
class line
{
public:
    void setlenght(double len);
    double getlenght(void);
    line();
    ~line(); // destructor
private:
    double lenght;
};
line :: line(void){
    cout << "Object is being created" << endl;
}
line :: ~line(void){
    cout << "Object is being deleted" << endl;
}
void line :: setlenght( double len ){
    lenght = len ;

}
double line :: getlenght (void ){
    return lenght;

}
int main (){
    line line1; // create line1 object
    line line2; // create line2 object
    line1.setlenght(6.0); // set length of line1
    line2.setlenght(10.0); // set length of line2
    cout << "Length of line1 : " << line1.getlenght() << endl;
    cout << "Length of line2 : " << line2.getlenght() << endl;
    return 0;
}