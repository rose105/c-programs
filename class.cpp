#include<iostream>
using namespace std;

class employee
{
    int empno;
    char empname[20];
    float empsal;

public:
    void read();
    void write();
    void title();
};
void employee:: read()
{
    cout<<"Enter empno and empname and salary";
    cin>>empno;
    cin>>empname;
    cin>>empsal;
}
void employee ::title()
{
    cout.width(20);
    cout<<"Empno";
    cout.width(20);
    cout<<"emp name";
    cout.width(20);
    cout<<"salary"<<endl;

}

void employee:: write()
{
    cout.width(20);
    cout<<empno;
    cout.width(20);
    cout.setf(ios::left,ios::adjustfield);
    cout<<empname;
    cout.width(20);
    cout<<empsal<<endl;
}
int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
        e[i].read();
        e[0].title();
    for(int j=0;j<5;j++)
        e[j].write();

}

