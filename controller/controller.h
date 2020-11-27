#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"../models/model.h"

patientss *createPatients(int day, char* month, int year, char *name){
    patients *newPatiens = (patients*)malloc(sizeof(patients));
    strcpy(newPatiens->name, name);
    newPatiens->day = day;
    strcpy(newPatientss->month, month);
    newPatiens->month = month;
    newPatiens->year = year;
    newPatiens->next = newPatiens->prev = NULL;
    return newPatiens;
}


void pushNewPatiens(int day, char* month, int year, char* name){
    patients* newPatients = createPatients(day, month, year, name);
    if(!head){
        head = tail = newPatients;
    }
    else{
        patients* curr = head;
        while(curr && curr->year > year)
            curr = curr->next;
        
        if(curr == head){
            head->prev = newPatients;
            newPatients->next = head;
            head = newPatients;
        }
        else if(curr == tail){
            tail->next = newPatients;
            newPatients->prev = tail;
            tail = newPatients;
        }
        else{
            curr->prev->next = newPatients;
            newPatients->prev = curr->prev;
            curr->prev = newPatients;
            newPatients->next = curr;
        }
        
    }
    
}

void popHead(){
    if(head && head == tail){
        head = tail = NULL;
        free(head);
    }
    else{
        patientss *newHead = head->next;
        head->next = newHead->prev = NULL;
        free(head);
        head = newHead;
    }
}

void printData(){
    if(!head){
        return;
    }
    else{
        patients* curr = head;
        while(curr){
            printf ("%d %s %d - %[^\n]\n", curr->day, curr->month, curr->year, curr->name);
            curr = curr->next;
        }
    }
    
}
