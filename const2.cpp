#include <iostream>
using namespace std;
class student
{
    public:
    int rno;
    string name;
    double fee;
    student();
    void display();
};
student::student() 
{
    rno;
    name = "";
    fee = 0.0;
}
void student::display()
{
    cout << "Roll Number: " << rno << endl;
    cout << "Name: " << name << endl;
    cout << "Fee: " << fee << endl;
}
int main() 
{
    student s1;
    s1.name="Ashutosh";
    s1.rno=33;
    s1.fee=10000;
    s1.display();
    cout<<"\n";
    return 0;
}
//output
/*Roll Number: 33
Name: Ashutosh
Fee: 10000*/