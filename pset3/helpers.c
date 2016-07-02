/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"


/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n) {
    if (n < 2){
        if (values[n-1] == value){
            return true;
        } 
        else
            return false;
    }
    else{
        int a = n/2;
        if (values[a] < value){
            int array[n - a + 1];
            for (int i = 0; i < n; i++){
                array[i] = values[a+i];
            }
            int size = n - a;
            return search(value, array, size);
        }
        else if (values[a] > value){
             int array[n-a];
             for (int i = 0; i < a; i++){
                array[i] = values[i];
            }
            int size = n - a;
            return search(value, array, size);
        }
        else if (values[a] == value){
            return true;
        }
        else 
            return false;
    } return false;
}
   
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int swap;
    do {
        swap = 0;
        for (int i = 0; i < n-1; i++){
            int element = values[i];
            if (values[i] > values[i+1]){
                values[i] = values[i+1];
                values[i+1] = element;
                swap = 1;
            }
        }
    } while (swap == 1);
    for (int i = 0; i < n; i++){
    }
    return;
}