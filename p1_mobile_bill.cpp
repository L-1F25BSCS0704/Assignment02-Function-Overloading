#include<iostream>
using namespace std;
double mobileBill(int minutes,int sms=0,double data=0.0);
void printLine(char n1='-',int n=30);
int main()
{
printLine();
    cout << "Bill 1: " << mobileBill(100) << endl;
    cout << "Bill 2: " << mobileBill(100, 50) << endl;
    cout << "Bill 3: " << mobileBill(100, 50, 2.5) << endl;
    printLine('*', 10);
    //Answer 1 :-
    //The reason why we need to pass 0 here in blank c because we can't pass it like this 12,,15 etc it would cause error as this is not allowed in C++
    cout << "Bill 4: " << mobileBill(60,0,1.5)<<endl;
    //Answer 2:-
    //The error it gives is expected an expression here on line 17 col41 reason is in CPP if u have 3 arguments nd u don't wanna pass value to second 
    //one u can't ignore it like this 1,,12 etc it would result in error either make arguments accordingly one solution is either move the argument to end 
    //in this way u aren't skipping anything or second method is pass 0
    // cout << "Bill 4: " << mobileBill(60,,1.5)<<endl;
    printLine('=');

return 0;
}
double mobileBill(int minutes,int sms,double data){
    return (minutes*2)+(sms*1)+(data*150);
}
void printLine(char n1,int n){
    for(int i=0;i<n;i++){
        cout<<n1;
    }
    cout<<endl;
}