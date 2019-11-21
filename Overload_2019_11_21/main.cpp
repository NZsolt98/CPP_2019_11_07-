#include <iostream>
#include <string.h>

using namespace std;
int add(int a,int b=0)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}

char* add(char* a, char* b)
{
    strcat(a,b);
    return a;
}

typedef int Index;

/*Index add(Index x,Index y)
{
    return x+y;
}
*/

int main()
{
    int c=5,d=6;
    cout << add(c,d) << endl;
    cout << add(c) << endl;

    double e=3.14,f=6.28;
    cout << add(e,f) << endl;


    char txt1[40] = {"Hello "};
    char* txt2 = {"World"};
    cout << add(txt1,txt2) << endl;

    //Index i=0,j=0;
    return 0;
}
