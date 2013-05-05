#ifndef COUNTRY_H
#define COUNTRY_H

class Country
{
public:
    Country();
    virtual ~Country();
    double getP() const;
    double getS() const;
    virtual void name()const=0;
    Country &operator=(const Country &x);
private:
    double square;
    double population;
};

class Belarus: public Country
{
public:
    Belarus();
    ~Belarus();
    void name()const;
};

class Russia: public Country
{
public:
    Russia();
    ~Russia();
    void name()const;
};

class Ukraine: public Country
{
public:
    Ukraine();
    ~Ukraine();
    void name()const;
};

double getDensity(const Country &x);

#endif
