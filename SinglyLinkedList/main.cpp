#include "list.h"
#include "list.cpp"

int main()
{   /*
    infotype a,b,c,d,e;
    address P,Q,R,S,T;
    a = 22; P = alokasi(a);
    b = 56; Q = alokasi(b);
    c = 25; R = alokasi(c);
    d = 42; S = alokasi(d);
    e = 17; T = alokasi(e);
    list L;
    CreateList(L);                  // List Kosong
    insertFirst(L, R);              // Isi List : 25
    insertFirstValue(L, 12);        // Isi List : 12 25
    insertAfterValue(L, 11, 25);    // Isi List : 12 25 11
    insertAfter(L, S, R);           // Isi List : 12 25 42 11
    insertLast(L, Q);               // Isi List : 12 25 42 11 56
    insertLastValue(L, 666);        // Isi List : 12 25 42 11 56 666
    insertAfter(L, P, S);           // Isi List : 12 25 42 22 11 56 666
    insertFirst(L, T);              // Isi List : 17 12 25 42 22 11 56 666
    printInfo(L);
    */
    list L;
    int n;
    infotype data;
    CreateList(L);
    cout << "Masukkan jumlah input : ";
    cin >> n;
    if(n < 1)
    {
        cout << "Input salah!" << endl;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            cout << "Input ke " << i+1 << " : ";
            cin >> data;
            insertLastValue(L, data);
        }
    }
    cout << endl;
    printInfo(L);
}
