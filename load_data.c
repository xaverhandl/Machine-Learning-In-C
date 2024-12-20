#include <stdio.h>
#include "load_data.h"
int loadData(char* filename, double** data_array){
    FILE* fp = fopen(filename,"r");
    if(fp == NULL){
        return -1;      
    }
    int i = 0; 
    int j = 0;
    while(fscanf(fp,"%lf",&data_array[i][j]) == 1){
        j++;
        if(j == 14){
            i++;
            j = 0;
        }
    } 
    fclose(fp);
    return 0;
    }
