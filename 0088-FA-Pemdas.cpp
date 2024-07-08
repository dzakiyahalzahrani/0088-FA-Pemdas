/**
 * @mainpage STATUS KELULUSAN MATA KULIAH
 * 
 * @section intro_sec Pendahuluan mengidentifikasi status kelulusan
 * 
 * @section nilai tugas akhir
 * 
 * @file gf.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */   


#include <iostream>

using namespace std;


class MataKuliah {
protected:
 float presensi;
 int activity;
 int exercise;
 float tugasAkhir;


public:

    virtual void namaMataKuliah() = 0;


    virtual void inputNilai() = 0;

    
    virtual double hitungNilaiAkhir() = 0;

    
    virtual void cekKelulusan() = 0;

    
    float getPresensi() const { return presensi; }
    void setPresensi(const float &p) { presensi = p; }

    int getActivity() const { return activity; }
    void setActivity(int a) { activity = a; }

    int getExercise() const { return exercise; }
    void setExercise(int e) { exercise = e; }

    float getTugasAkhir() const { return tugasAkhir; }
    void setTugasAkhir(const float &t) { tugasAkhir = t; }
};


class Pemrograman : public MataKuliah {
public:
    
    void namaMataKuliah() override {
        cout << "nama mata kuliah: Pemrograman" << endl;
    }

    void inputNilai() override {
        cout << "masukan presensi mata kuliah pemrograman: ";
        cin >> presensi;
        cout << "masukan activity mata kuliah pemrograman: ";
        cin >> activity;
        cout << "masukan exercise mata kuliah pemrograman: ";
        cin >> exercise;
        cout << "masukan tugas akhir mata kuliah pemrograman: ";
        cin >> tugasAkhir;
    }
    
    double hitungNilaiAkhir() override {
        return tugasAkhir >= 75 ; 
    }

    
    void cekKelulusan() override {
        cout << "Status kelulusan mahasiswa mata kuliah pemrograman: " << tugasAkhir << endl;
    }
};


class Jaringan : public MataKuliah {
public:

    void namaMataKuliah() override {
        cout << "nama mata kuliah: Jaringan" << endl;
    }

        void inputNilai() override {
        cout << "masukan presensi mata kuliah jaringan: ";
        cin >> presensi;
        cout << "masukan activity mata kuliah jaringan: ";
        cin >> activity;
        cout << "masukan exercise mata kuliah jaringan: ";
        cin >> exercise;
        cout << "masukan tugas akhir mata kuliah jaringan: ";
        cin >> tugasAkhir;
    }

        double hitungNilaiAkhir() override {
        return tugasAkhir >= 75 ; 
    }
    
        void cekKelulusan() override {
        cout << "Status kelulusan mahasiswa mata kuliah Jaringan: " << tugasAkhir << endl;
    }
    

};

int main() {
    MataKuliah *MataKuliah1 = new Pemrograman();
    MataKuliah *MataKuliah2 = new Jaringan();

    cout << "Input nilai untuk mata kuliah pemrograman:" << endl;
    MataKuliah1->inputNilai();
    cout << endl;


    cout << "Input nilai mata untuk kuliah Jaringan:" << endl;
    MataKuliah2->inputNilai();
    cout << endl;

    
    cout << "=== Informasi Mata Kuliah 1 ===" << endl;
    MataKuliah1->namaMataKuliah();
    MataKuliah1->cekKelulusan();
    cout << "Nilai Akhir: " << MataKuliah1->hitungNilaiAkhir() << endl;
    cout << endl;


    cout << "=== Informasi Mata Kuliah 2 ===" << endl;
    MataKuliah1->namaMataKuliah();
    MataKuliah1->cekKelulusan();
    cout << "Nilai Akhir: " << MataKuliah2->hitungNilaiAkhir() << endl;
    cout << endl;

    
    delete MataKuliah1;
    delete MataKuliah2;

    return 0;
}

