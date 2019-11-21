#include <iostream>

using namespace std;
class Car
{
    public:
        void setType(string tp){type_m=tp;}
        void setNumber(string rsz){number_m=rsz;}
        void setOwner(string own){owner_m=own;}
        string type(){return type_m;}
        string number(){return number_m;}
        string owner(){return owner_m;}
    private:
        string type_m;
        string number_m;
        string owner_m;
};
const int SIZE_OF_CARS=3;
int main()
{
    Car car[SIZE_OF_CARS];
    for(int i=0;i<SIZE_OF_CARS;++i){
        string input;

        cout<<"Type: ";
        cin>>input;
        car[i].setType(input);

        cout<<"Number: ";
        cin>>input;
        car[i].setNumber(input);

        cout<<"Owner: ";
        cin>>input;
        car[i].setOwner(input);
    }
    for(int i=1;i<SIZE_OF_CARS;++i){
        cout<<"Az auto tipusa: "<<car[i].type()<<" tulajdonosa: "<<car[i].owner()<<" rendszama: "<<car[i].number()<<endl;
    }
}

