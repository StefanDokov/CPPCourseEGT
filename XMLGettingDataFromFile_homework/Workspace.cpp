#include "Workspace.h"

Workspace::Workspace(int a, int b, int c) : building(a), floor(b), desk(c)
{
}

int Workspace::getBuilding()
{
    return this->building;
}

int Workspace::getFloor()
{
    return this->floor;
}

int Workspace::getDesk()
{
    return this->desk;
}

void Workspace::print()
{
    cout << "Building: " << this->getBuilding() << ", Floor: " << this->getFloor() << ", Desc: " << this->getDesk() << endl;
}
