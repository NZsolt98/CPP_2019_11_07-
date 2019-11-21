#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    void setFirstName(string fn){firstName_m=fn;}
    void setLastName(string ln);
    void setBorn(int y){born_m=y;}
    string firstName(){return firstName_m;}
    string lastName(){return lastName_m;}
    int born(){return born_m;}
private:
    string firstName_m;
    string lastName_m;
    int born_m;

};

void Person::setLastName(string ln)
{
    lastName_m=ln;
}

void print1(Person prs)
{
     cout << prs.firstName() << " " << prs.lastName()<<" " << prs.born()<< endl;
}
void print2(Person* ptr)
{
     cout << (*ptr).firstName() << " " << ptr->lastName()<<" " << ptr->born()<< endl;
}
void print3(Person& prs)
{
     cout << prs.firstName() << " " << prs.lastName()<<" " << prs.born()<< endl;
}
int main()
{
    Person p1;
    p1.setFirstName("Joe");
    p1.setLastName("Black");
    p1.setBorn(1999);
    print1(p1);
    print2(&p1);
    print3(p1);

    return 0;
}
