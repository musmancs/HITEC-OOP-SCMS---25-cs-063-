#ifndef ACCOMODATION_H
#define ACCOMODATION_H

class Accommodation
{
    public:
    virtual void AllocateRoom() = 0;
    virtual void vacateRoom() = 0;
    virtual ~Accommodation() {}
};
#endif