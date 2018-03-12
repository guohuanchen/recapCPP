#include<iostream>
using namespace std;
void bubblesort(int[], int);
void printArraySorted(int[], int);
void searchValue(int [], int, int);
int main(){
    
    const int size=10;
    int value, count =0;
    int arr[size]={ 3, 43, 54, 23, 21, 1, 3, 4, 56 , 7};
    printArraySorted(arr, size);
    cout << "Enter the value you want to find in the array " << endl;
    cin>> value;
    while(value) {
        searchValue(arr, size, value);
        count++;
        cin>>value;
    }
    cout << "Count the times you try to search in an array" << endl;
    cout << "After sorted the element in an array" << endl;
    bubblesort(arr, size);
    printArraySorted(arr, size);

    return 0;

}
void bubblesort(int arr[], int size){
    int temp;
    bool swap;
    
    do{
        swap=false;
        for(int count=0; count<(size-1); count ++){
            if(arr[count]>arr[count+1]){
                temp=arr[count];
                arr[count]=arr[count+1];
                arr[count+1]=temp;
                swap=true;
                
            }
        
        }
    
    }while(swap);
    
}
void printArraySorted(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i]<< " " <<endl;
    }
    
}
void searchValue(int arr[], int size, int valueToSearch){
    
    for(int position=0; position<size; position++){
        if(valueToSearch==arr[position]){
            cout<< "index found " << position << endl;
        }
        else{
            
        }
    
    }

}
