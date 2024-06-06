#include <iostream>
#define MAXSTACK 7

using namespace std;

struct stack {
    int data[MAXSTACK];
    int count;
};

stack tumpukan;

int isFull (stack *x) {
    int hasil = 0;
    if ((x -> count) >= MAXSTACK)
        hasil=1;
        return hasil;
}


void membuatStack (stack *x) {
    x -> count = 0;
}

void cetak () {
    for (int i=0; i<MAXSTACK; i++) {
        printf ("isi index %d %d \n", i, tumpukan.data[i]);
    }
}

void push (int data, stack *x) {
    if (isFull (x) == 1) {
        printf ("Stack Penuh\n");
    } else {
        x -> data [x -> count] = data;
        ++(x-> count);
        printf ("berhasil memasukkan\n");
    }
}



int main () {
    int i;
    membuatStack(&tumpukan);
    printf ("masukan 13\n");
    push (13, &tumpukan);
    printf ("masukan 11\n");
    push (11, &tumpukan);
    printf ("masukan 9\n");
    push (9, &tumpukan);
    printf ("masukan 7\n");
    push (7, &tumpukan);
    printf ("masukan 5\n");
    push (5, &tumpukan);
    printf ("masukan 3\n");
    push (3, &tumpukan);
    printf ("masukan 1\n");
    push (1, &tumpukan);
    cetak();
}
