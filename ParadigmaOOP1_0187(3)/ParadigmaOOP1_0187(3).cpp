#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu* varIbu = new ibu("duta");
    ibu* varIbu2 = new ibu("asep");
    anak* varAnak1 = new anak("decul");
    anak* varAnak2 = new anak("ariel");
    anak* varAnak3 = new anak("nugroho");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak2);

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
}
   