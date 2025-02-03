#include <bits/stdc++.h>

using namespace std;

class Parent{
   public: 
   Parent(){
    cout<<"This is the parent class"<<endl;
   }
};

class child1: public Parent{
   public:
   child1(){
    cout<<"This is the child1"<<endl;
    }
};

class child2: public Parent{
public:
    child2(){
    cout<<"This is the child2"<<endl;
    }
};
class grandChild: public child1, public child2{
public:
    grandChild(){
        cout<<"this is the grandchild"<<endl;
    }
};

int main(){
grandChild x;
    return 0;
}
