#ifndef FUNGSI1_H_INCLUDED
#define FUNGSI1_H_INCLUDED

using namespace std;


void Nilai_terbesar_4() {

    int a,b,c,d;

    cout << "Masukan bilangan 1: ";
    cin >> a;
    cout << "Masukan bilangan 2: ";
    cin >> b;
    cout << "Masukan bilangan 3: ";
    cin >> c;
    cout << "Masukan bilangan 4: ";
    cin >> d;

    if (a>b && a>c && a>d)
        cout << "Bilangan terbesar adalah: " << a << endl;
    else if (b>a && b>c && b>d)
        cout << "Bilangan terbesar adalah: " << b << endl;
    else if (c>a && c>b && c>d)
        cout << "Bilangan terbesar adalah: " << c << endl;
    else
        cout << "Bilangan terbesar adalah: " << d << endl;
}


void Nilai_terbesar_3(){

int A,B,C;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;
    cout << "masukan bilangan 3: ";
    cin >> C;

    if (A > B){
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
}   else {
        if (B > C)
            cout << "bilangan terbesar adalah: " << B << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;

}
}
void Mencari_nilai_tengah(){

    int A,B,C;
    cout<<"Masukan bilangan 1: ";
    cin>> A;
    cout<<"Masukan bilangan 2: ";
    cin>> B;
    cout<<"Masukan bilangan 3: ";
    cin>> C;

    if (A<B){
      if (B<C)
            cout<< "Bilangan Tengah Adalah:"  << B << endl;
    else
        if (A<C)
            cout << "Bilangan Tengah Adalah: " << C << endl;
        else cout << " Bilangan Tengah Adalah: " << A << endl;
    }else {
    if (A<C)
        cout << " Bilangan Tengah Adalah: " << A <<  endl;
    else
        if (B<C)

        cout<< "Bilangan Tengah Adalah: " << C << endl;
    else
        cout << " Bilangan Tengah Adalah: " << B <<  endl;
    }


}
void Program_kasir(){

    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                   Selamat datang " << endl;
    cout << "                         di " << endl;
    cout << "                   Fresh to Fresh" ;
    cout << endl;
    cout << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << endl;
    cout << "Berapa macam barang yang akan di beli? \n" ;
    cin >> N;
    cout << endl;

    do {
        cout << "Berapa barang yang akan di beli?" << endl;
        cin >> a;
        cout << endl;
        cout << "Berapa harga per satuan barang yang di beli?" << endl;
        cin >> b;
        cout << endl;

        hb = a * b;
        stotal = stotal+hb;
        e = e+a;
        i = i+1;

        cout << endl;
        cout << "Harga barang tesebut adalah " << hb << endl;

        if (i < N) {
            cout  << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli " << endl;
        } else {
            cout << "Anda telah membeli " << N << " barang ";
        }

        cout << endl;
        cout << endl;

        } while (i < N) ;

        if (stotal >= 1000000) {
            dis = (stotal/100)*10;
            total = stotal-dis;
            d = 10;
        } else {
            if (stotal > 500000){
                dis = (stotal/100)*5;
                total = stotal-dis;
                d = 5;
            } else {
                total = stotal;
                d = 0;
            }

        }

        cout << "--------------------------------------------------------- " << endl;
        cout << "--------------------------------------------------------- " << endl;
        cout << endl;

        cout << "Jumlah item: " << N << endl;
        cout << "jumlah barang: " << e << endl;
        cout << "Total belanja: " << stotal << endl;
        cout << "Dicount: " << d << " % " << endl;
        cout << "Total: " << total << endl;
        cout << endl;
        cout << endl;
        cout << "                               Terima kasih " << endl;
        cout << "                          Selamat datang kembali" << endl ;
    }

#endif // FUNGSI1_H_INCLUDED
