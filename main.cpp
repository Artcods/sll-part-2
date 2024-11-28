#include <iostream>
using namespace std;
#include "header.h"

int main() {
    list L{};
    CreateList(L);

    cout << "The list is: " << first(L) << endl;

// ---

    adr P{};
    P = new node(10); // node 1
    addNode(L, P);

    P = new node(20); // node 2
    addNode(L, P);

    P = new node(30); // node 3
    addNode(L, P);

    P = new node(40);
    addNodeLast(L, P);

    P = new node(50);
    adr prec = first(L)->next;
    addNodeAfter(L, prec, P);

// ---

    deleteNodeFirst(L);

    deleteNodeLast(L);

    showList(L);

    cout << endl << endl;
    deleteNodeLast(L);

    showList(L);
    return 0;
}