#include <iostream>
#include "country.h"

using namespace std;

int main()
{
    Country *array[3];
    array[0]=new Belarus;
    array[1]=new Russia;
    array[2]=new Ukraine;

    for(int i=0; i<3; ++i)
    {
        cout<<"This country is ";
        array[i]->name();
        cout<<endl<<"Enter population and square: "<<endl;
        cout<<"The population density is: "<<getDensity(*array[i])<<" thousand million people/km^2"<<endl<<endl<<endl;
    }
    for(int i = 0; i<3; ++i)
        delete array[i];

    return 0;
}

