#include <stdio.h>
#include <stdlib.h>
#include "load_data.h"



int main(void){
    double array_data[400][15];
    loadData("processed.cleveland.data.txt",array_data);
    for(int i = 0; i<303; ++i){
        for(int j = 0; j<14; ++i){
            printf("%lf ",array_data[i][j]);
        }
        printf("\n");
    }
}