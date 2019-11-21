#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    const char*text="Hello world!";
    char text2[40]="Here I am";
    char text3[]=" too.";
    strcat(text2,text3);

    char* t;
    t=text2;
    cout << t<< endl;
    return 0;
}
