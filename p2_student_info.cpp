#include <iostream>
using namespace std;
void printInfo(string name)
{
    cout << "Name=" << name << endl;
}
void printInfo(string name, int rollNo)
{
    cout << "Name=" << name << "|RollNo=" << rollNo << endl;
}
void printInfo(int rollNo, string name)
{
    cout << "RollNo=" << rollNo << "|Name=" << name << endl;
}
void printInfo(string name, double cgpa)
{
    cout << "Name=" << name << "|CGPA=" << cgpa << endl;
}
void printInfo(char grade)
{
    cout << "Grade=" << grade << endl;
}
int main()
{
    //Answer 1=V2
    //Answer 2=Error would come reason is cannot overload functions distinguished by return type alone
    //Answer 3=V2,V3
    printInfo("Ali");
    printInfo("Ali", 12);
    printInfo(12, "Ali");
    printInfo("Ali", 3.5);
    printInfo('A');
    printInfo("Sara", 'B');
    return 0;
}