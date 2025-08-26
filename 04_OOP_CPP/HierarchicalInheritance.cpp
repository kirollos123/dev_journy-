#include<iostream>
using namespace std;
class animal{
   public:
   void eat (){
    cout <<"eating..."<< endl;
   }

};
class dog :public animal{
     public :
     void bark(){
        cout <<"barking..."<< endl;
     }

};
class cat :public animal{
    public:
    void meow(){
        cout <<"meowing..."<< endl;
    }
};
int main (){


    dog d ; cat c ;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    return 0;
}
