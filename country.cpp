#include <iostream>
#include "country.h"
using namespace std;


double getDensity(const Country &x)
{
    return x.getP()/x.getS();
}
///////////////////////////////////////////////////
Country &Country::operator=(const Country &x)
{
    population=x.population;
    square=x.square;
    return *this;
}

double Country::getP() const
{
    double population;
    cin>>population;
    return population;
}

double Country::getS() const
{
    double square;
    cin>>square;
    return square;
}
////////////////////////////////////
Country::Country():
    population(0.0), square(0.0)
{
}
Country::~Country()
{
    population=0.0;
    square=0.0;
}
///////////////////////////////////
Belarus::Belarus()
{
}

Belarus::~Belarus()
{
}
void Belarus::name()const
{
    cout<<"Belarus"<<endl;
}
////////////////////////////////////
Russia::Russia()
{
}
Russia::~Russia()
{
}
void Russia::name()const
{
    cout<<"Russia"<<endl;
}
//////////////////////////////////////
Ukraine::Ukraine()
{
}

Ukraine::~Ukraine()
{
}
void Ukraine::name()const
{
    cout<<"Ukraine"<<endl;
}

