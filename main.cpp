#include "katering.h"

int main() {
    listHari LH;
    listMenu LM;
    listRelasi LR;
    adrHari pH;
    adrMenu pM, dpm, p;
    adrRelasi pR, dpr;
    infotype_hari H;
    infotype_menu M;
    int input, N, t, T, ID;
    string yn, mm, addMenu, MN;

    createListHari(LH);
    createListMenu(LM);
    //createListRelasi(LR);

    // Menambah 30 Hari untuk List Hari (1 Bulan) (Asumsi List Hari sudah tersedia)
    H.tanggal = 1;
    H.namaHari = "Senin";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 2;
    H.namaHari = "Selasa";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 3;
    H.namaHari = "Rabu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 4;
    H.namaHari = "Kamis";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 5;
    H.namaHari = "Jumat";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 6;
    H.namaHari = "Sabtu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 7;
    H.namaHari = "Minggu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 8;
    H.namaHari = "Senin";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 9;
    H.namaHari = "Selasa";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 10;
    H.namaHari = "Rabu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 11;
    H.namaHari = "Kamis";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 12;
    H.namaHari = "Jumat";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 13;
    H.namaHari = "Sabtu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 14;
    H.namaHari = "Minggu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 15;
    H.namaHari = "Senin";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 16;
    H.namaHari = "Selasa";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 17;
    H.namaHari = "Rabu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 18;
    H.namaHari = "Kamis";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 19;
    H.namaHari = "Jumat";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 20;
    H.namaHari = "Sabtu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 21;
    H.namaHari = "Minggu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 22;
    H.namaHari = "Senin";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 23;
    H.namaHari = "Selasa";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 24;
    H.namaHari = "Rabu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 25;
    H.namaHari = "Kamis";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 26;
    H.namaHari = "Jumat";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 27;
    H.namaHari = "Sabtu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 28;
    H.namaHari = "Minggu";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 29;
    H.namaHari = "Senin";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    H.tanggal = 30;
    H.namaHari = "Selasa";
    H.bulan = "Januari";
    H.tahun = 2024;
    pH = newElmHari(H);
    insertLastHari(LH, pH);

    // MENU AWAL
    M.IDMenu = 1;
    M.namaMenu = "Rendang Daging";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 2;
    M.namaMenu = "Ayam Bakar";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 3;
    M.namaMenu = "Ayam Goreng Lengkuas";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 4;
    M.namaMenu = "Ikan Nila Goreng Krispi";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 5;
    M.namaMenu = "Sate Ayam";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 6;
    M.namaMenu = "Cumi Saus Padang";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 7;
    M.namaMenu = "Daging Sapi Lada Hitam";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 8;
    M.namaMenu = "Ayam Goreng Serundeng";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 9;
    M.namaMenu = "Bandeng Presto";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 10;
    M.namaMenu = "Cumi Goreng Tepung";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 11;
    M.namaMenu = "Nasi Goreng Seafood";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    M.IDMenu = 12;
    M.namaMenu = "Gurame Asam Manis";
    pM = newElmMenu(M);
    insertLastMenu(LM, pM);

    // RELASI

    T = 1;
    MN = "Rendang Daging";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Bakar";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 2;
    MN = "Sate Ayam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 3;
    MN = "Nasi Goreng Seafood";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Rendang Daging";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Goreng Tepung";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 4;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Serundeng";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 5;
    MN = "Sate Ayam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ikan Nila Goreng Krispi";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 6;
    MN = "Daging Sapi Lada Hitam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Rendang Daging";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 7;
    MN = "Ayam Goreng Lengkuas";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Serundeng";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 8;
    MN = "Gurame Asam Manis";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 9;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Daging Sapi Lada Hitam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Sate Ayam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 10;
    MN = "Ayam Goreng Serundeng";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Sate Ayam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 11;
    MN = "Ayam Goreng Serundeng";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Sate Ayam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 12;
    MN = "Daging Sapi Lada Hitam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Rendang Daging";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Goreng Tepung";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 13;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 14;
    MN = "Rendang Daging";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Bakar";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 15;
    MN = "Sate Ayam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ikan Nila Goreng Krispi";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 16;
    MN = "Gurame Asam Manis";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 17;
    MN = "Sate Ayam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Serundeng";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 18;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Daging Sapi Lada Hitam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ikan Nila Goreng Krispi";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 19;
    MN = "Ayam Goreng Serundeng";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Lengkuas";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Goreng Tepung";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 20;
    MN = "Ayam Goreng Serundeng";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Sate Ayam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 21;
    MN = "Sate Ayam";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 22;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Serundeng";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 23;
    MN = "Cumi Saus Padang";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Gurame Asam Manis";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 24;
    MN = "Nasi Goreng Seafood";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Rendang Daging";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Daging Sapi Lada Hitam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 25;
    MN = "Nasi Goreng Seafood";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Bakar";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ikan Nila Goreng Krispi";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 26;
    MN = "Gurame Asam Manis";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 27;
    MN = "Gurame Asam Manis";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Bandeng Presto";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 28;
    MN = "Rendang Daging";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Bakar";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Ayam Goreng Lengkuas";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);


    T = 29;
    MN = "Ayam Goreng Serundeng";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Daging Sapi Lada Hitam";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Saus Padang";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    T = 30;
    MN = "Bandeng Presto";
    pH = searchHari(LH, T);
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Cumi Goreng Tepung";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);
    MN = "Nasi Goreng Seafood";
    pM = searchMenu(LM, MN);
    createRelasi(LH, LM, pH, pM);

    input = userInterface();
    while (input != 0) {
        switch (input) {
            case 1: // Menampilkan Daftar Menu
                cout << endl;
                cout << "============ DAFTAR MENU ============" << endl;
                showDaftarMenu(LM);
                cout << "Jumlah menu yang tersedia ada " << jumlahMenu(LM) << "." << endl;
                cout << endl;
                break;

            case 2: // Menambah Menu
                cout << endl;
                cout << "Jumlah Menu yang ingin ditambahkan : ";
                cin >> N;
                for (int i = 1; i <= N; i++) {
                    cout << "Menu ke-" << i << endl;
                    cout << "ID Menu : ";
                    cin >> M.IDMenu;
                    cout << "Nama Menu : ";
                    cin.ignore();
                    getline(cin, M.namaMenu);
                    pM = newElmMenu(M);
                    insertLastMenu(LM, pM);
                    cout << endl;
                }
                break;

            case 3: // Menambah/Menghapus Menu di Hari tertentu
                cout << endl;
                cout << "Pilih '+' untuk menambah" << endl;
                cout << "Pilih '-' untuk menghapus" << endl;
                cout << "Pilihan : ";
                cin >> mm;
                cout << endl;
                if (mm == "+") {
                    cout << "Masukkan tanggal yang ingin anda tambahkan menu : ";
                    cin >> t;
                    cout << endl;
                    showMenuDay(LH, t);
                    showAllMenuInfo(LM);
                    cout << "Masukkan ID menu yang ingin anda tambahkan : ";
                    cin >> ID;
                    pH = searchHari(LH, t);
                    pM = searchMenuByID(LM, ID);
                    if (pH != nil && pM != nil) {
                        createRelasi(LH, LM, pH, pM);
                    }
                } else if (mm == "-") {
                    cout << "Masukkan tanggal yang ingin anda kurangkan menu : ";
                    cin >> t;
                    cout << endl;
                    showMenuDay(LH, t);
                    cout << endl;
                    cout << "Masukkan ID menu yang ingin anda hapus : ";
                    cin >> ID;
                    pH = searchHari(LH, t);
                    pM = searchMenuByID(LM, ID);
                    if (pH != nil && pM != nil) {
                        deleteRelasi(LH, LM, pH, pM);
                    }
                } else {
                    cout << "Pilihan Tidak Valid" << endl;
                }
                cout << endl;
                break;

            case 4: // Menampilkan Daftar Menu setiap hari dalam 1 bulan
                cout << endl;
                showMenuEveryDay(LH);
                break;

            case 5: // Menampilkan Menu yang paling laris
                cout << endl;
                findMaxMenu(LH,LM);
                cout << endl;
                break;

            case 6: // Menampilkan Menu yang kurang laris
                cout << endl;
                findMinMenu(LH, LM);
                cout << endl;
                break;

            case 7: // Menghapus Menu
                showAllMenuInfo(LM);
                cout << "Masukkan ID menu yang ingin anda hapus : ";
                cin >> ID;
                dpm = searchMenuByID(LM, ID);
                if (dpm != nil) {
                    deleteMenuByID(LM, ID, pM);
                    pH = firstHari(LH);
                    while (pH != nil) {
                        pR = menu(pH);
                        while (pR != nil) {
                            if (menuHari(pR) == pM) {
                                deleteRelasi(LH, LM, pH, menuHari(pR));
                            }
                            pR = nextRelasi(pR);
                        }
                        pH = nextHari(pH);
                    }
                }
                cout << endl;
                break;

            case 8: // Melihat daftar menu di tanggal tertentu
                cout << endl;
                cout << "Masukkan tanggal yang anda inginkan : ";
                cin >> t;
                cout << endl;
                showMenuDay(LH, t);
                cout << endl;
                break;
        }

        cout << "Kembali ke tampilan awal?(Y/N) : ";
        cin >> yn;
        cout << endl;
        if (yn == "Y" || yn == "y") {
            input = userInterface();
        } else {
            input = 0;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    return 0;
}
