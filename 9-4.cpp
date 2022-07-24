#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    for (int i = 0; i < size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    // Insertion
    int array[50];
    int size;
    cin >> size;

    for (int i = 0; i < size;i++){
        cin >> array[i];
    }

    cout << "Given Array : ";
    printArray(array, size);

    int pos, val;
    cout << "Position of Insertion: ";
    cin >> pos;
    cout << "Value of Insertion: ";
    cin >> val;

    if(pos<0 || pos>size){
        cout << "Invalid Index!" << endl;
    }else{
        // This one way...But there is time complexity issue
        /* for (int i = size - 1; i >= pos;i--){
            array[i + 1] = array[i];
        }
        array[pos] = val; */

        // This way Solve time complexity Issue
        array[size] = array[pos];
        array[pos] = val;
    }
    cout << "Array after the Insertion : ";
    printArray(array, size+1);

    return 0;
}