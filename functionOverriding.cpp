// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout << "Animal sounds"<< endl;
    }
};

class Dog : public Animal{
    public:
    void sound() {
        cout <<"Bow bow" << endl;        
    }
};

int main(){
    Animal* a1;
    Dog d1;
    a1 = & d1;
    
    a1->sound();
    
    return 0;
}
