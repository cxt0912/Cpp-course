#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    // Set month and date
    srand(time(NULL));
    int month = 0,date = 0;
    month = rand()%12+1;

    switch(month){
        case 2:
            date = rand()%28+1;
            break;
        case 4: case 6: case 9: case 11:
            date = rand()%30+1;
            break;
        default: 
            date = rand()%31+1;
    }

    // Guess until right
    int check = 1;
    while(check == 1){

        // Guess
        int month_guess = 0,date_guess = 0;
        printf("Please guess the date and month: ");
        scanf("%d/%d",&month_guess,&date_guess);
        
        // Check month
        if(month_guess == month){
            printf("Month correct!\n");
        }
        else if(month_guess < month){
            printf("The answer month > Your guess %d\n",month_guess);
        }
        else{
            printf("The answer month < Your guess %d\n",month_guess);
        }

        // Check date
        if(date_guess == date){
            printf("Date correct!\n");
        }
        else if(date_guess < date){
            printf("The answer date > Your guess %d\n",date_guess);
        }
        else{
            printf("The answer date < Your guess %d\n",date_guess);
        }

        // Both month and date are correct
        if(month_guess == month && date_guess == date){
            printf("Congrate!You are right!\n");
            check = 0;
        }
        else;

    }
   
    system("pause");
    return 0;
}
