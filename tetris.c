//#include <curses.h>
#include <stdio.h>

//フィールドサイズ
#define FIELD_WIDTH     (10)
#define FIELD_HEIGHT    (20)

void DrowScreen() {
    for(int y=0; y< FIELD_HEIGHT; y++) {
        printf("□");
            for(int x=0; x < FIELD_WIDTH; x++)
                printf(" ");
            printf("□");
            printf("\n");
            }
            for(int x=0; x < FIELD_WIDTH + 2; x++)
                printf("□");
        }

int main(){
    DrowScreen();
}