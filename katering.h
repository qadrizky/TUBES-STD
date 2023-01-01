#ifndef KATERING_H_INCLUDED
#define KATERING_H_INCLUDED

#include <iostream>
#include <stdio.h>

using namespace std;

#define infoHari(P) (P)->infoHari
#define infoMenu(P) (P)->infoMenu
#define menuHari(P) (P)->menuHari
#define menu(P) (P)->menu
#define nextHari(P) (P)->nextHari
#define nextMenu(P) (P)->nextMenu
#define nextRelasi(P) (P)->nextRelasi
#define firstHari(L) ((L).firstHari)
#define firstMenu(L) ((L).firstMenu)
#define firstRelasi(L) ((L).firstRelasi)
#define nil NULL

struct infotype_hari {
    int tanggal, tahun;
    string namaHari, bulan;
};

struct infotype_menu {
    string namaMenu;
    int IDMenu;
};

typedef struct elementHari *adrHari;

typedef struct elementRelasi *adrRelasi;

typedef struct elementMenu *adrMenu;

struct elementHari {
    infotype_hari infoHari;
    adrRelasi menu;
    adrHari nextHari;
};

struct elementRelasi {
    adrMenu menuHari;
    adrRelasi nextRelasi;
};

struct elementMenu {
    infotype_menu infoMenu;
    adrMenu nextMenu;
};

struct listHari {
    adrHari firstHari;
};

struct listRelasi {
    adrRelasi firstRelasi;
};

struct listMenu {
    adrMenu firstMenu;
};

// List Hari
void createListHari (listHari &LH);
adrHari newElmHari (infotype_hari H);
void insertLastHari (listHari &LH, adrHari pH);
void deleteLastHari (listHari &LH, adrHari &pH);
adrHari searchHari (listHari LH, int date);

// List Menu
void createListMenu (listMenu &LM);
adrMenu newElmMenu (infotype_menu M);
void insertLastMenu (listMenu &LM, adrMenu pM);
void deleteFirstMenu (listMenu &LM, adrMenu &pM);
void deleteAfterMenu (listMenu &LM, adrMenu prec, adrMenu &pM);
void deleteLastMenu (listMenu &LM, adrMenu &pM);
adrMenu searchMenu (listMenu LM, string menuname);
adrMenu searchMenuByID (listMenu LM, int ID);
int jumlahMenu (listMenu LM);
void showDaftarMenu (listMenu LM);
void showMenuDay (listHari LH, int date);
void showAllMenuInfo (listMenu LM);
void deleteMenuByID (listMenu &LM, int ID, adrMenu &pM);

// List Relasi
void createListRelasi (adrRelasi &LR);
adrRelasi newElmRelasi (adrMenu R);
void insertLastRelasi (adrRelasi &p, adrRelasi pR);
void deleteFirstRelasi (adrRelasi &p, adrRelasi &pR);
void deleteLastRelasi (adrRelasi &p, adrRelasi &pR);
void deleteAfterRelasi (adrRelasi &p, adrRelasi prec, adrRelasi &pR);
adrRelasi searchMenuByRelasi (adrRelasi p, adrMenu pM);

void findMaxMenu (listHari LH, listMenu LM);
void findMinMenu (listHari LH, listMenu LM);
void showMenuEveryDay (listHari LH);
void createRelasi (listHari &LH, listMenu LM, adrHari pH, adrMenu pM);
void deleteRelasi (listHari &LH, listMenu LM, adrHari pH, adrMenu pM);
int userInterface ();

#endif // KATERING_H_INCLUDED
