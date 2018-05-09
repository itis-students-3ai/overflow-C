#include <stdio.h>
#include <stdlib.h>


int main() {
    int values[3] = {1, 10, 50000};

    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    short si;
    unsigned short usi;

    int idx=0;
    for (idx=0; idx<3; idx++) {
        c = values[idx];
        uc = values[idx];
        i = values[idx];
        ui = values[idx];
        si = values[idx];
        usi = values[idx];
        
		printf("\n*** VALORE %i *** \n", values[idx]);
        printf("char (%i) = %i\n", sizeof(c), c);
        printf("unsigned char (%i) = %i\n", sizeof(uc), uc);
        printf("int (%i) = %i\n", sizeof(i), i);
        printf("unsigned int (%i) = %i\n", sizeof(ui), ui);
        printf("short (%i) = %i\n", sizeof(si), si);
        printf("unsigned short (%i) = %i\n", sizeof(usi), usi);
    }
    system("pause");
}
