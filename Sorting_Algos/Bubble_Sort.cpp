#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n = 5;
    int arr[n] = {4,1,0,3,2};
    int temp;

    //continue with bubble sort

/*
Bubble sort should only be used for study purposes since its not practical to use in the real industry
Essentially we are comparing two elements, i and i+1 (or j in this case). The first for loop accounts for the
traversal through the array and the second for loop allows us to compare the taken element from i and compare it 
to every element through the array. The reason why bubble sort isnt practical is because we are always searching through
the array n times n or On^2.
*/
    for(int i=0; i < n; i++){ //traveral through array grab the element to be potentially switched

        for(int j = i+1; j < n; j++){ //if that element is actually switched then we will compare to all elements passed i+1

        
        if(arr[i] > arr[j]){ //will provide the switch if necessary even after checking the ith element we took above
            //now swap the two
            
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

        }

    }

    //simply printing the contents of our new array
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}