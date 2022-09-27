#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

int n = 5; //size of the array 
int array[n] = {3,7,1,4,2}; //an array of 5 elements, not sorted
// an implementation of insertion sort:

/*
Essesntially we have two variables.. j will represent the current iteration through the array starting at index position 1
i will be used to swap values and check wether the key (which is the current value at j) is either bigger or smaller than the value at index postion i
if the ith position value is greater well then we shift that value to the right and the key will remain in the original ith spot
*/
    for(int j = 1; j < n; j++){
        
        int key = array[j]; //value represented by the for loop at the jth position

        int i = j - 1; //so that the ith position is 1 less than the j (to compare)

        while(i >= 0 ){ //must be >= so we can ALWAYS check the first element

            if(array[i] > key){ //if the value before the key is greater than the key, we place that value in the next spot (shifting right)

            array[i+1] = array[i];
        }
        else{

            break;
        }
            i = i - 1; //so that we can place values back by 1, so for example if we want to set the 0 index postion element, i(0) - 1 = -1
        }

        array[i+1] = key; //setting the value we checked in the while loop into the array (so for the above example ... array[-1+1] = array[0] ..  and so on)
        
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
    }
}
