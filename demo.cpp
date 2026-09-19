#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    employee emp1;
    emp1.name = "John Doe";
    emp1.age = 30;
    emp1.display();
    return 0;
}