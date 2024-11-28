//
// Created by Abdurrahman Hamid on 11/27/2024.
//

#include <iostream>

#include "header.h"
using namespace std;

void CreateList(list &L) {
    first(L) = nullptr;
}

// menambahkan pertama node ke list
adr newNode(infotype x) {
    adr P = new node; // constructor
    info(P) = x;
    next(P) = nullptr;
    return P;
}

void addNode(list &L, adr P) {
    if (first(L) == nullptr) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

// menambahkan terakhir

void addNodeLast(list &L, adr P) {
    if (first(L) == nullptr) {
        first(L) = P;
    } else {
        adr Q = first(L);
        while (next(Q) != nullptr) {
            Q = next(Q);
        }
        next(Q) = P;
    }
    next(P) = nullptr;
}

// Insert After
void addNodeAfter(list &L, adr prec, adr P) {
    next(P) = next(prec);
    next(prec) = P;
}


void showList(list L) {
    if (first(L) != nullptr) {
        adr P;
        P = first(L);
        while (P != nullptr) {
            cout << "Info : " << info(P) << " | ";
            P = next(P);
        }
    }
}

void deleteNodeFirst(list &L) {
    adr P;
    P = first(L);
    first(L) = next(P);
    next(P) = nullptr;
}

void deleteNodeLast(list &L) {
    adr Q, P;
    if (first(L) == nullptr) {
        P = nullptr;
    } else if (next(first(L)) == nullptr) {
        P = first(L);
        first(L) = nullptr;
    } else {
        P = first(L);
        Q = next(P);
        while (next(P) != nullptr) {
            Q = P;
            P = next(P);
        }
        next(Q) = nullptr;
        cout << "Sudah dihapus" << endl;
    }
}
