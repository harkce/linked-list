#include <iostream>
#include <cstdlib>
#include "list.h"
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) (L).first

using namespace std;

bool ListEmpty(list L) {
    if(first(L) == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CreateList(list &L) {
    first(L) = Nil;
}

address alokasi(infotype x) {
    address P = (address)malloc(sizeof(elmlist));
    info(P) = x;
    return P;
}

void deaolkasi(address P) {
    delete(P);
}

void insertFirst(list &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertFirstValue(list &L, infotype N) {
    address P = alokasi(N);
    insertFirst(L, P);
}

void insertAfter(list &L, address P, address Prec) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void insertAfterValue(list &L, infotype N, infotype X) {    // Insert N setelah X
    address Prec = first(L);
    while(info(Prec) != X && next(Prec) != Nil)
    {
        Prec = next(Prec);
    }
    if(info(Prec) == X)
    {
        address P = alokasi(N);
        insertAfter(L, P, Prec);
    }
    else
    {
        cout << "Tidak ada nilai " << X << " dalam list" << endl;
    }
}

void insertLast(list &L, address P) {
    if(first(L) == Nil)
    {
        insertFirst(L, P);
    }
    else
    {
        address Q = first(L);
        while(next(Q) != Nil)
        {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = Nil;
    }
}

void insertLastValue(list &L, infotype N) {
    if(first(L) == Nil)
    {
        insertFirstValue(L, N);
    }
    else
    {
        address P = alokasi(N);
        insertLast(L, P);
    }
}

void deleteFirst(list &L) {
    if(first(L) != Nil)
    {
        address P = first(L);
        if(next(P) == Nil)
        {
            first(L) = Nil;
        }
        else
        {
            first(L) = next(P);
            next(P) = Nil;
        }
    }
}
/*
void deleteAfter(list &L, address Prec) {
    if(first(L) != Nil)
    {
        if(next(next(Prec)) == Nil)
        {
            address P = next(Prec);
            next(Prec) = Nil;
        }
        else
        {
            address P = next(Prec);
            next(Prec) = next(P);
            next(P) = Nil;
        }
    }
}
*/
void deleteLast(list &L) {
    if(first(L) != Nil)
    {
        address P = first(L);
        if(next(P) == Nil)
        {
            deleteFirst(L);
        }
        else
        {
            while(next(next(P)) != Nil)
            {
                P = next(P);
            }
            address Q = next(P);
            next(P) = Nil;
        }
    }
}

void printInfo(list &L) {
    if(first(L) != Nil)
    {
        address elmt = first(L);
        int i = 1;
        while(elmt != Nil)
        {
            cout << "Elemen ke " << i << " = " << info(elmt) << endl;
            elmt = next(elmt);
            i += 1;
        }
    }
    else
    {
        cout << "List kosong" << endl;
    }
}
