#include <stdio.h>
#include <stdlib.h>


int main() {
    /* Questo programma visualizza l'occupazione dei vari tipi di dato 
     * per le variabili dichiarate e l'interpretazione dei valori ad esse assegnate
     * (il valore interpretato come intero varia a seconda del tipo di variabile dichiarata)
     */
    int values[] = {1, 255, 256, 32767, 32768, 65535, 65536};

    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    short si;
    unsigned short usi;

    int idx;
    for (idx=0; idx<7; idx++) {
        c = values[idx];
        uc = values[idx];
        i = values[idx];
        ui = values[idx];
        si = values[idx];
        usi = values[idx];
        
        // Visualizza a video il valore
		printf("\n*** VALORE %i *** \n", values[idx]);

        // Visualizza a video:
        // - il tipo di variabile
        // - la dimensione di ogni variabile (byte dedicati al corrispondente tipo di dato)
        // - il valore interpretato

        // I tipi di dati char e int vengono commentati per facilitare l'esercitazione
        // Ogni alunno può disabilitare ulteriori tipi di dato man mano che ci vuole ragionare sopra

        // printf("char (%i) = %i\n", sizeof(c), c);
        // printf("unsigned char (%i) = %i\n", sizeof(uc), uc);
        // printf("int (%i) = %i\n", sizeof(i), i);
        // printf("unsigned int (%i) = %i\n", sizeof(ui), ui);

        printf("short (%i) = %i\n", sizeof(si), si);
        printf("unsigned short (%i) = %i\n", sizeof(usi), usi);
    }
    system("pause");
}
