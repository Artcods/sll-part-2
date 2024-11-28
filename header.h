//
// Created by Abdurrahman Hamid on 11/27/2024.
//

#ifndef HEADER_H
#define HEADER_H

// Shortcuts
#define next(P) (P) -> next
#define info(P) (P) -> info
#define next(Q) (Q) -> next
#define prec(P) (P) -> prec
#define first(L) ((L).first)

typedef int infotype;
typedef struct node *adr;

struct node {
    infotype info;
    adr next;
};

struct list {
    adr first;
};

// Membuat List
void CreateList(list &L);

// Show
void showList(list L);

// menambahkan pertama node ke list
adr newNode(infotype x);
void addNode(list &L, adr P);
// menambahkan akhir node ke list
void addNodeLast(list &L, adr P);
// menambahkan setelah node ke list
void addNodeAfter(list &L, adr prec, adr P);

// menghapus pertama node ke list
void deleteNodeFirst(list &L);
// menghapus akhir node ke list
void deleteNodeLast(list &L);


#endif //HEADER_H
