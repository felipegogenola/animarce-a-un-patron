/**
    Project     : Composite Pattern Example

    Authors     : Erich Gamma, Richard Helm, Ralph Johnson and John Vlissides

    Implementer : Gabriel Nicol�s Gonz�lez Ferreira
**/

///////////////////////////////////////////ICOMPONENT-INTERFACE///////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <algorithm>

#include "ICOMPOSABLE.h"
#include "FOLDER.h"
#include "FILE.h"
int main()
{
    IComposable* folder_01 = new Folder("folder_01");

    IComposable* folder_02 = new Folder("folder_02");
    folder_01->add(folder_02);

    IComposable* folder_03 = new Folder("folder_03");
    folder_03->add(new File("file A"));
    folder_03->add(new File("file B"));
    folder_02->add(folder_03);

    folder_01->list(1);

    delete folder_03;
    delete folder_02;
    delete folder_01;
    return 0;
}
