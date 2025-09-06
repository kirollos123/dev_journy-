# include <iostream>
using namespace std;
void add (int num1 , int num2){
     int result = num1 + num2;
     cout<<result;  
}
void add (double num1 , double num2){
     double result = num1 + num2;
     cout<<result;  
}
int main (){
     add(5,6);
     cout<<endl;
     add(5.5,6.3);      
     return 0;}
