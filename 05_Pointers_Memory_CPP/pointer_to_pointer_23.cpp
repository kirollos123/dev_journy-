#include<iostream>
using namespace std;
 int main(){
    int vae ;
    int *ptr;
    int **pptr;
    vae =3000;
    ptr = &vae; 
    cout << "Address of var variable: " << vae << endl;
    cout << "Address of ptr variable: " << *ptr << endl;
    cout << "Value of var variable: " << **pptr << endl;
    return 0;
 }