#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Misc{
    public:
        void credit(){ // Identitas kelompok kami c:
            cout << "\n== KAMI ADALAH ==" << endl << endl;
            cout << "== Kelompok 32 ==" << endl << endl;
            cout << "Nama: Revano Bimaputra Wiradhani" << endl;
            cout << "NIM: 21120126130097" << endl << endl;
            cout << "Nama : Daffa Hilmy Muhammad" << endl;
            cout << "NIM : 21120126140162" << endl << endl;
            cout << "Nama : Mochammad Fiqry Ramadani" << endl;
            cout << "NIM : 21120126140178" << endl << endl;
            cout << "Nama: Benyamin Maulana Pasha" << endl;
            cout << "21120126130090" << endl << endl;
            cout << "== Shift 5 ==" << endl << endl;
        }
};

class ErrorLagi{
    public:
        string ErrorMessage(){ // Error tuh
            string PesanUntukKamu = "Masukkan data dengan benar.";
            return PesanUntukKamu;
        }
};

void Pembukaan(){ // Selamat datang C:
        cout << "\n== Selamat Datang di KEL32MART! ==" << endl;
        cout << "Dengan tas belanja kami, anda dapat berbelanja hingga 20 barang sekaligus!" << endl;
        cout << "Mohon diingat bahwa harga barang belanjaan akan dikenai PPN sebesar 12%" << endl << endl;
}

int PPN(int Harga){ // Hahaha aku cinta pajak hahahahaha
    float PersPPN = 0.12f;
    int JumPPN = Harga * PersPPN;
    int SetPPN = Harga + JumPPN;
    return SetPPN;
}

void ProgramUtama(){ // Program utama kita
    int HarBar, JumBar; // Deklarasi variabel awal
    int JumTotBar = 0;
    int JumHarBar = 0;
    int MaksBar = 20;
    int j = 1;
    string SelesaiKah, CreditIya, NamBar, MauGak;
    bool ApakahBelumSelesai;
    Misc Objek1;
    ErrorLagi Objek2;
    do{
        ProgramUtama2:
            while(MaksBar <= 20 && MaksBar > 0){
                // Loop utama
                cout << "\n == SHOPPING FRENZY(" << j << ")!!!" << endl; // Penanda
                j++;
                cin.ignore();
                cout << "Masukkan nama barang yang dibeli: "; // Input nama barang
                getline(cin >> ws, NamBar);
                cout << "\nMasukkan jumlah barang yang dibeli: "; // Input jumlah barang
                cin >> JumBar;
                MaksBar -= JumBar;
                if(MaksBar < 0){ // Belanja yang bener
                    break;
                }
                cout << "\nMasukkan harga barang yang dibeli: "; // Input harga barang
                cin >> HarBar;
                HarBar = PPN(HarBar); // 12 Persen gak tuh
                JumHarBar += (HarBar*JumBar); // Jumlah harga
                JumTotBar += JumBar; // Untuk nanti

                // Untuk cek kapasitas tas belanja
                YangBener:
                if(MaksBar >= 1 && MaksBar <= 20){
                    cout << "Apakah Anda ingin lanjut belanja? (Ketik 'Ya' atau 'Tidak')" << endl;
                    cin >> MauGak;
                    if(MauGak == "Ya"){
                        cout << "\nBaiklah." << endl;
                    }
                    else if(MauGak == "Tidak"){
                        break;
                    }
                    else{
                        cout << Objek2.ErrorMessage() << endl;
                        goto YangBener;
                    }
                }
                else{
                    break;
                }
            }
            if(MaksBar < 0){ // Belanja yang bener
                cout << "Jumlah barang melebihi kapasitas tas belanja. Silahkan berbelanja lagi dengan tepat." << endl << endl;
                MaksBar = 20;
                j = 1;
                goto ProgramUtama2;
            }

            cout << "Jumlah total barang yang dibeli adalah: " << JumTotBar << endl;
            cout << "Jumlah total harga barang yang dibeli adalah: " << JumHarBar << endl;
            MaksBar = 20;
            JumTotBar = 0;
            JumHarBar = 0;

            //Di atas ada kode utama
            //Di bawah ada kode konfirmasi lanjut

            Lanjut: // Udah selesai belum nih?
                cout << "\nApakah Anda ingin berbelanja lagi? (Ketik 'Ya' atau 'Tidak')" << endl;
                cin >> SelesaiKah;
                if(SelesaiKah == "Ya"){ // SAYA CINTA BERBELANJA!!!!!
                    ApakahBelumSelesai = true;
                    goto ProgramUtama2;
                }
                else if(SelesaiKah == "Tidak"){ // Dah ah capek
                    cout << "\nApakah Anda ingin melihat identitas kami? (Ketik 'Ya' atau 'Tidak')" << endl; // Identitas kelompok
                    cin >> CreditIya;
                    AkhirProgram:
                        if(CreditIya == "Ya"){ // Hore!!!!!!!
                            Objek1.credit();
                            ApakahBelumSelesai = false;
                        }
                        else if(CreditIya == "Tidak"){ // :c
                            ApakahBelumSelesai = false;
                        }
                        else{ // Yang bener
                            cout << Objek2.ErrorMessage() << endl;
                            goto AkhirProgram;
                        }
                }
                else{ // Yang bener
                    cout << Objek2.ErrorMessage() << endl;
                    goto Lanjut;
                }
        cout << endl << endl;
    }while(ApakahBelumSelesai == true);
}

int main(){
    bool MauBelanjaGak = true;
    string ApkhIy, ApkhIy2;
    int Percobaan = 0;
    ErrorLagi Objek3;
    do{
    SelamatDatang:
        cout << "Apakah anda ingin melihat pesan selamat datang? (Silahkan ketik 'Ya' atau 'Tidak')" << endl;
        cin >> ApkhIy;
        if(ApkhIy == "Ya"){ // Jika ingin berbelanja, akan masuk ke program utama
            Pembukaan();
        }
        else if(ApkhIy == "Tidak"){ // Yaudah sih
            cout << "\nBaiklah." << endl;
        }
        else{ // Ngetik yang bener ya
            cout << Objek3.ErrorMessage() << endl;
            goto SelamatDatang;
        }
    BelanjaDulu:
        if(Percobaan == 0){ //Untuk percobaan pertama
            cout << "\nApakah anda ingin berbelanja? (Silahkan ketik 'Ya' atau 'Tidak')" << endl;
            cin >> ApkhIy2;
            if(ApkhIy2 == "Ya"){ // Jika ingin berbelanja, akan masuk ke program utama
                ProgramUtama();
                Percobaan++;
                goto BelanjaDulu;
            }
            else if(ApkhIy2 == "Tidak"){ // Yaudah sih
                cout << "\nDatang lagi!" << endl;
                MauBelanjaGak = false;
            }
            else{ // Ngetik yang bener ya
                cout << Objek3.ErrorMessage() << endl;
                goto BelanjaDulu;
            }
        }
        else{ // Untuk setelah percobaan pertama
            cout << "Apakah anda ingin berbelanja lagi? (Silahkan ketik 'Ya' atau 'Tidak')" << endl;
            cin >> ApkhIy2;
            if(ApkhIy2 == "Ya"){ // Jika ingin berbelanja, akan masuk ke program utama
                ProgramUtama();
                goto BelanjaDulu;
            }
            else if(ApkhIy2 == "Tidak"){ // Yaudah sih
                cout << "\nDatang lagi!" << endl;
                MauBelanjaGak = false;
            }
            else{ // Ngetik yang bener ya
                cout << Objek3.ErrorMessage() << endl;
                goto BelanjaDulu;
            }
        }
    }while(MauBelanjaGak == true);
}
