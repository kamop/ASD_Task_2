/**
    KELAS     :IF 39-06
    KELOMPOK  :4
    NAMA(NIM) : rama aditya maulana,1301150034,kharisma oktavianing herwanda , 1301154496,  hutomo aji, 1301154384 rizki hidayatullah, 1301154118,
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
    string nama;
    tanggal tgl_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
