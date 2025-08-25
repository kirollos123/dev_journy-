#include <iostream>
using namespace std;
class Employee
{
     private :
     int salary;
     public:
     void setsalary(int s)//setter
     {
          salary = s;
     }
     int getsalary()//getter
     {
          return salary;
     }


} ;
int main (){
     Employee myobj;
     myobj.setsalary(50000);
        cout<<myobj.getsalary();
        return 0;

    
}