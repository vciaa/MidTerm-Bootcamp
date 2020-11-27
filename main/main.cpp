#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"../controller/controller.h"

char totalMonth[15][25] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "desember"};

int main(){

    int patiens, cures;
    scanf("%d %d", &patiens, &cures);
    getchar();
 
    int day, year, newMonth;
    char name[25], month[25];
    for(int i=0; i<patients; i++){
        scanf("%d %s %d - %[^\n]", &day, month, &year, name);
        getchar();
        for(int i=0; i<12; i++){
            if(strcmp(totalMonth[i], month) == 0){
                newMonth=i+1;
                break;
            }
        }
        push(day, newMonth, year, name);
    }

    for(int i=0; i<cures; i++){
        popHead();
    }
    printf("Need %d more cure\n", patient-cures);
    printData();
}
