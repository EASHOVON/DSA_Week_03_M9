#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    for (int i = 0; i < size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    // Deletion
    int array[50];
    int size;
    cin >> size;

    for (int i = 0; i < size;i++){
        cin >> array[i];
    }

    cout << "Given Array : ";
    printArray(array, size);

    int pos;
    cout << "Position of Deletion: ";
    cin >> pos;
   

    if(pos<0 || pos>size-1){
        cout << "Invalid Index!" << endl;
    }else{
        if(pos==size-1)
            size--;
        else{
            for (int i = pos + 1; i < size;i++){
                array[i - 1] = array[i];
            }
            size--;
        }
    }
    cout << "Array after the Deletion : ";
    printArray(array, size);

    return 0;
}