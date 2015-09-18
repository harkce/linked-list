#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};

bool ListEmpty(list &L);
void CreateList(list &L);

address alokasi(infotype x);
void deaolkasi(address P);

void insertFirst(list &L, address P);
void insertFirstValue(list &L, infotype N);
void insertAfter(list &L, address P, address Prec);
void insertAfterValue(list &L, infotype N, infotype X);
void insertLast(list &L, address P);
void insertLastValue(list &L, infotype N);

void deleteFirst (list &L);
void deleteAfter (list &L, address Prec);
void deleteLast (list &L);

void printInfo(list &L);

#endif // LIST_H_INCLUDED
