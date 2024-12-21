#include <stdio.h>
#include <stdlib.h>
#include "load_data.h"



int main(void){
    double array_data[400][20];
    int labels[400];
    loadData("processed.cleveland.data.txt",array_data,labels);
    for(int i = 0; i<30; ++i){
        for(int j = 0; j<10; ++i){
            printf("%lf ",array_data[i][j]);
        }
        printf("\n");
    }
}