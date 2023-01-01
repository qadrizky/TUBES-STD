#include "katering.h"

// List Hari
void createListHari (listHari &LH) {
    firstHari(LH) = nil;
}

adrHari newElmHari (infotype_hari H) {
    adrHari pH;

    pH = new elementHari;
    infoHari(pH) = H;
    menu(pH) = nil;
    nextHari(pH) = nil;

    return pH;
}

void insertLastHari (listHari &LH, adrHari pH) {
    if (firstHari(LH) == nil) {
        firstHari(LH) = pH;
    } else {
        adrHari p = firstHari(LH);
        while (nextHari(p) != nil) {
            p = nextHari(p);
        }
        nextHari(p) = pH;
    }
}

void deleteLastHari (listHari &LH, adrHari &pH) {
    if (firstHari(LH) == nil) {
        cout << "List Hari Kosong" << endl;
    } else {
        adrHari p = firstHari(LH);
        while (nextHari(nextHari(p)) != nil) {
            p = nextHari(p);
        }
        pH = nextHari(p);
        nextHari(p) = nil;
        nextHari(pH) = nil;
    }
}

adrHari searchHari (listHari LH, int date) {
    adrHari pH = firstHari(LH);
    while (pH != nil) {
        if (infoHari(pH).tanggal == date) {
            return pH;
            break;
        }
        pH = nextHari(pH);
    }
    return nil;
}

// List Menu
void createListMenu (listMenu &LM) {
    firstMenu(LM) = nil;
}

adrMenu newElmMenu (infotype_menu M) {
    adrMenu pM;

    pM = new elementMenu;
    infoMenu(pM) = M;
    nextMenu(pM) = nil;

    return pM;
}

void insertLastMenu (listMenu &LM, adrMenu pM) {
    if (firstMenu(LM) == nil) {
        firstMenu(LM) = pM;
    } else {
        adrMenu p = firstMenu(LM);
        while (nextMenu(p) != nil) {
            p = nextMenu(p);
        }
        nextMenu(p) = pM;
    }
}

void deleteFirstMenu (listMenu &LM, adrMenu &pM) {
    if (firstMenu(LM) == nil) {
        cout << "List Menu Kosong" << endl;
    } else {
        pM = firstMenu(LM);
        firstMenu(LM) = nextMenu(firstMenu(LM));
        nextMenu(pM) = nil;
    }
}

void deleteAfterMenu (listMenu &LM, adrMenu prec, adrMenu &pM) {
    if (firstMenu(LM) == nil) {
        cout << "List Menu Kosong" << endl;
    } else {
        pM = nextMenu(prec);
        nextMenu(prec) = nextMenu(pM);
        nextMenu(pM) = nil;
    }
}

void deleteLastMenu (listMenu &LM, adrMenu &pM) {
    if (firstMenu(LM) == nil) {
        cout << "List Menu Kosong" << endl;
    } else {
        adrMenu p = firstMenu(LM);
        while (nextMenu(nextMenu(p)) != nil) {
            p = nextMenu(p);
        }
        pM = nextMenu(p);
        nextMenu(p) = nil;
        nextMenu(pM) = nil;
    }
}

adrMenu searchMenu (listMenu LM, string menuname) {
    adrMenu pM = firstMenu(LM);
    while (pM != nil) {
        if (infoMenu(pM).namaMenu == menuname) {
            return pM;
            break;
        }
        pM = nextMenu(pM);
    }
    return nil;
}

adrMenu searchMenuByID (listMenu LM, int ID) {
    adrMenu pM = firstMenu(LM);
    while (pM != nil) {
        if (infoMenu(pM).IDMenu == ID) {
            return pM;
            break;
        }
        pM = nextMenu(pM);
    }
    return nil;
}

int jumlahMenu (listMenu LM) {
    int m = 0;
    adrMenu pM = firstMenu(LM);
    while (pM != nil) {
        pM = nextMenu(pM);
        m++;
    }
    return m;
}

void showDaftarMenu (listMenu LM) {
    if (firstMenu(LM) == nil) {
        cout << "Daftar Menu Masih Kosong" << endl;
        cout << endl;
    } else {
        adrMenu pM = firstMenu(LM);
        while (pM != nil) {
            cout << "ID Menu : " << infoMenu(pM).IDMenu << endl;
            cout << "Nama Menu : " << infoMenu(pM).namaMenu << endl;
            cout << endl;
            pM = nextMenu(pM);
        }
    }
}

void showMenuDay (listHari LH, int date) {
    adrHari pH;
    adrRelasi pR;

    pH = searchHari(LH, date);
    cout << "Tanggal " << infoHari(pH).tanggal << " " << infoHari(pH).bulan << " " << infoHari(pH).tahun << endl;
    cout << "Hari " << infoHari(pH).namaHari << endl;
    cout << "====== Daftar Menu ======" << endl;
    if (pH != nil) {
        pR = menu(pH);
        while (pR != nil) {
            cout << "ID Menu : " << infoMenu(menuHari(pR)).IDMenu << endl;
            cout << "Nama Menu : " << infoMenu(menuHari(pR)).namaMenu << endl;
            pR = nextRelasi(pR);
        }
    }
    cout << "=========================" << endl;
}

void showAllMenuInfo (listMenu LM) {
    if (firstMenu(LM) == nil) {
        cout << "Daftar Menu Masih Kosong" << endl;
        cout << endl;
    } else {
        int jm = jumlahMenu(LM);
        adrMenu pM = firstMenu(LM);
        cout << endl;
        cout << "========= MENU YANG TERSEDIA =========" << endl;
        while (pM != nil) {
            cout << "ID Menu : " << infoMenu(pM).IDMenu << " : " << infoMenu(pM).namaMenu << endl;
            pM = nextMenu(pM);
        }
        cout << "======================================" << endl;
        cout << endl;
    }
}

void deleteMenuByID (listMenu &LM, int ID, adrMenu &pM) {
    adrMenu p = searchMenuByID(LM, ID);

    if (p == firstMenu(LM)) {
        deleteFirstMenu(LM, pM);
    } else if (nextMenu(p) == nil) {
        deleteLastMenu(LM, pM);
    } else if (p != firstMenu(LM) && nextMenu(p) != nil) {
        adrMenu z = firstMenu(LM);
        while (nextMenu(z) != p) {
            z = nextMenu(z);
        }
        deleteAfterMenu(LM, z, pM);
    }
}

// List Relasi
void createListRelasi (adrRelasi &LR) {
    LR = nil;
}

adrRelasi newElmRelasi (adrMenu R) {
    adrRelasi pR;

    pR = new elementRelasi;
    menuHari(pR) = R;
    nextRelasi(pR) = nil;

    return pR;
}

void insertLastRelasi (adrRelasi &p, adrRelasi pR) {
    if (p == nil) {
        p = pR;
    } else {
        adrRelasi q = p;
        while (nextRelasi(q) != nil) {
            q = nextRelasi(q);
        }
        nextRelasi(q) = pR;
    }
}

void deleteFirstRelasi (adrRelasi &p, adrRelasi &pR) {
    if (p == nil) {
        cout << "Daftar Menu Masih Kosong" << endl;
    } else {
        pR = p;
        p = nextRelasi(p);
        nextRelasi(pR) = nil;
    }
}

void deleteLastRelasi (adrRelasi &p, adrRelasi &pR) {
    if (p == nil) {
        cout << "Daftar Menu Masih Kosong" << endl;
    } else {
        adrRelasi q = p;
        while (nextRelasi(nextRelasi(q)) != nil) {
            q = nextRelasi(q);
        }
        pR = nextRelasi(q);
        nextRelasi(q) = nil;
        nextRelasi(pR) = nil;
    }
}

void deleteAfterRelasi (adrRelasi &p, adrRelasi prec, adrRelasi &pR) {
    if (p == nil) {
        cout << "Daftar Menu Masih Kosong" << endl;
    } else {
        pR = nextRelasi(prec);
        nextRelasi(prec) = nextRelasi(pR);
        nextRelasi(pR) = nil;
    }
}

adrRelasi searchMenuByRelasi (adrRelasi p, adrMenu pM) {
    if (p == nil) {
        cout << "Relasi Kosong" << endl;
    } else {
        adrRelasi q = p;
        while (q != nil) {
            if (menuHari(q) == pM) {
                return q;
                break;
            }
            q = nextRelasi(q);
        }
    }
    return nil;
}

void findMaxMenu (listHari LH, listMenu LM) {
    adrHari pH;
    adrMenu pMmax = nil;
    adrMenu pM = firstMenu(LM);
    int Maxx = 0;
    int jM;

    while (pM != nil) {
        jM = 0;
        pH = firstHari(LH);
        while (pH != nil) {
            adrRelasi rel = searchMenuByRelasi(menu(pH), pM);
            if(rel != nil){
                jM++;
            }
            pH = nextHari(pH);
        }
        if (Maxx < jM) {
            Maxx = jM;
            pMmax = pM;
        }
        pM = nextMenu(pM);
    }
    cout << "Menu terlaris adalah " << infoMenu(pMmax).namaMenu << " yang dihidangkan sebanyak " << Maxx << " kali dalam 1 bulan." << endl;
}

void findMinMenu (listHari LH, listMenu LM) {
    adrHari pH;
    adrMenu pMmin = nil;
    adrMenu pM = firstMenu(LM);
    int Minn = jumlahMenu(LM);
    int jM;

    while (pM != nil) {
        jM = 0;
        pH = firstHari(LH);
        while (pH != nil) {
            adrRelasi rel = searchMenuByRelasi(menu(pH), pM);
            if (rel != nil) {
                jM++;
            }
            pH = nextHari(pH);
        }
        if (Minn >= jM){
            Minn = jM;
            pMmin = pM;
        }
        pM = nextMenu(pM);
    }
    cout << "Menu yang kurang laris adalah " << infoMenu(pMmin).namaMenu << " yang dihidangkan sebanyak " << Minn << " kali dalam 1 bulan." << endl;
}

void showMenuEveryDay (listHari LH) {
    if (firstHari(LH) == nil) {
        cout << "List Hari Kosong" << endl;
    } else {
        adrHari pH = firstHari(LH);
        while (pH != nil) {
            cout << "Tanggal " << infoHari(pH).tanggal << " " << infoHari(pH).bulan << " " << infoHari(pH).tahun << endl;
            cout << "Hari " << infoHari(pH).namaHari << endl;
            cout << "====== Daftar Menu ======" << endl;
            if (menu(pH) != nil) {
                adrRelasi pR = menu(pH);
                while (pR != nil) {
                    cout << "ID Menu : " << infoMenu(menuHari(pR)).IDMenu << endl;
                    cout << "Nama Menu : " << infoMenu(menuHari(pR)).namaMenu << endl;
                    pR = nextRelasi(pR);
                }
            }
            pH = nextHari(pH);
            cout << "=========================" << endl;
            cout << endl;
        }
    }
}

void createRelasi (listHari &LH, listMenu LM, adrHari pH, adrMenu pM) {
    adrRelasi pR;

    pR = new elementRelasi;
    menuHari(pR) = pM;
    nextRelasi(pR) = nil;
    insertLastRelasi(menu(pH), pR);
}

void deleteRelasi (listHari &LH, listMenu LM, adrHari pH, adrMenu pM) {
    adrRelasi pR;

    pR = new elementRelasi;
    menuHari(pR) = pM;
    nextRelasi(pR) = nil;

    adrRelasi p = searchMenuByRelasi(menu(pH), pM);
    if (p == menu(pH)) {
        deleteFirstRelasi(menu(pH), pR);
    } else if (nextRelasi(p) == nil) {
        deleteLastRelasi(menu(pH), pR);
    } else if (p != menu(pH) && nextRelasi(p) != nil) {
        adrRelasi z = menu(pH);
        while (nextRelasi(z) != p){
            z = nextRelasi(z);
        }
        deleteAfterRelasi(menu(pH), z, pR);
    }
}

int userInterface () {
    int input;

    cout << "=========================== KATERING ===========================" << endl;
    cout << "1. Daftar Menu" << endl;
    cout << "2. Menambah Menu" << endl;
    cout << "3. Menambah/Menghapus Menu di Hari tertentu" << endl;
    cout << "4. Menampilkan Daftar Menu setiap hari dalam 1 bulan" << endl;
    cout << "5. Menampilkan Menu yang paling laris" << endl;
    cout << "6. Menampilkan Menu yang kurang laris" << endl;
    cout << "7. Menghapus Menu" << endl;
    cout << "8. Melihat daftar menu di tanggal tertentu" << endl;
    cout << "0. Exit" << endl;
    cout << "================================================================" << endl;
    cout << endl;
    cout << "Silahkan memilih angka 0 - 8 sesuai tampilan diatas" << endl;

    cout << "Pilihan menu (0 - 8) : ";
    cin >> input;

    return input;
}
