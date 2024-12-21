#include <stdio.h>
#include "load_data.h"
int loadData(char* filename, double** data_array,int* labels){
    FILE* fp = fopen(filename,"r");
    if(fp == NULL){
        return -1;      
    }
    int i = 0;

    while (fscanf(fp, "%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%d\n", 
                   &data_array[i][0], &data_array[i][1], &data_array[i][2], &data_array[i][3],
                   &data_array[i][4], &data_array[i][5], &data_array[i][6], &data_array[i][7],
                   &data_array[i][8], &data_array[i][9], &data_array[i][10], &data_array[i][11],
                   &labels[i]) == 13) {
        i++;
    }
    fclose(fp);
    return 0;
    }
