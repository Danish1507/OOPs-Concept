#include <bits/stdc++.h>

using namespace std;

class Parent{
   public: 
   Parent(){
    cout<<"This is the parent class"<<endl;
   }
};
// If we want to access the parent function in both we need to use virtual function 


class child1: virtual public Parent{ // this will fix the Diamond problem
   public:
   child1(){
    cout<<"This is the child1"<<endl;
    }
};

class child2: virtual public Parent{
public:
    child2(){
    cout<<"This is the child2"<<endl;
    }
};
class grandChild: public child1, public child2{   // here the grandchild will access the parent function only once 
public:
    grandChild(){
        cout<<"this is the grandchild"<<endl;
    }
};

int main(){
grandChild x;
    return 0;
}
