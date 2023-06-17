#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
using namespace std;

// Insertion Sort
void insertion_sort(int array[],int size){
    for(int i = 1;i < size;i++){        /* Started with the second number */
        int key = array[i];
        int j = i - 1;
        while( j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;

        // Before sort: 1 6 5 4 3 2
        // i = 1
            // key = array[1] = 6
            // j = i-1 = 0
            // j >= 0 but array[0] = 1 < key = 6  -> No while loop
            // array[j+1] = array[1] = 6
        // i = 2
            // key = array[2] = 5
            // j = i-1 = 1
            // j >= 0 and array[1] = 6 > key = 5
            // while loop
                // array[2] = array[1] = 6
                // j = j-1 = 0
            //  j >= 0 but array[0] = 1 < key = 5  -> No while loop
            // array[1] = 5

        printf("During sort = ");
        for(int k = 0;k < SIZE ;k++){
            printf("%d ",array[k]);
        }
        printf("\n"); 
    }
}

int main(){

    // Get number of the array
    srand(time(NULL));
    int array[SIZE] = {31,0};      /* First number of the array is the last two numbers of student ID */
    printf("Before sort = %d",array[0]);
    for(int index = 1;index < SIZE;index++){        /* index = 1,2,3,4,5,6 */
        array[index] = rand()%100+1;        /* Get Rest Six Number */
        printf(" %d",array[index]); 
    }
    printf("\n");

    // Print out the procedure of Insertion Sort
    insertion_sort(array,SIZE);
    
    // Print out the result of Insertion Sort
    printf("After sort = ");
    for(int h = 0;h < SIZE;h++){
        printf("%d ",array[h]);
    }
    printf("\n");
   
    system("pause");
    return 0;
}
