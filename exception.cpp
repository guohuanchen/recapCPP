#include<iostream>
using namespace std;
void listsearch(const int list[], int numElement, int value){
    int index=0;
    int position=-1;
    bool found=false;
    while(index<numElement &&!found){
        if(list[index]==value){
            found=true;
            position=index;
            
        }
        index++;
    }
    
}
void print (const int list[], int numElement){
    for(int i=0; i<numElement; i++){
        cout << list[i] << endl;
    }

}

int main(){

    int numElement=15;
    int value=0;
    int list[]={1,2,3,4,5,6,7,8,9,9,9,9,10};
    cin >> value;
    listsearch(list, numElement, value);
    print(list, numElement);
    
    return 0;
}
