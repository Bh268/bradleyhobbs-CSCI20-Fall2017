#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

class ArrayTools{
    public:
    void Print();
    void Find_min();
    void Find_max();
    void Find_sum();
    void Num_even();
    void Num_odd();
    void Search();
    void Is_sorted();
    
    ArrayTools();
    ArrayTools(int array[],int size);
    
    int Find_min(int number1[], int number2);
    int Find_max(int number1[], int number2);
    int Find_sum(int sum);
    int Num_even(int even);
    int Num_odd(int odd);
    int Search(int search);
    private:
    int ARRAY_[];
    int SIZE_;
    
    
};

ArrayTools::ArrayTools(){
    ArrayTools = 0;
    return;
}
Arraytools::ArrayTools(int array[],int size){
    int i = 0;
    for (i = 0; i < size; i++){
        ARRAY_[i] = array[i];
    }
    SIZE_ = size;
}

void ArrayTools::Print(){
    
    cout << ARRAY_[0] << endl;
    cout << ARRAY_[1] << endl;
    cout << ARRAY_[3] << endl;
    cout << ARRAY_[4] << endl;
    cout << ARRAY_[5] << endl;
    cout << ARRAY_[6] << endl;
    cout << ARRAY_[7] << endl;
    cout << ARRAY_[8] << endl;
    cout << ARRAY_[9] << endl;
    return;
}


int ArrayTools::Find_max(int number1[], int number2){
    int i = 0;
    int maxNumber = number1[i];
    
    for (i = number1; i < number2; ++i){
        if (maxNumber >= number1[i]){
            maxNumber = number1[i];
        }
    }
    return maxNumber;
}

int ArrayTools::Find_min(int number1,int number2){
    int i = 0;
    int minNumber = number1[i];
    
    for (i = number1; i < number2; ++i){
        if (minNumber <= ARRAY_[i]){
            minNumber = ARRAY_[i];
        }
    }
    return minNumber;
}

int ArrayTools::Num_even(){
    int i = 0;
    int evenNumbers = 0;
    
    
}
int ArrayTools::Find_sum(){
    int i = 0;
    int sum = 0;
    
    for (i = 0;i < SIZE_; i++){
        sum = ARRAY_[i] + sum;
    }
    return sum;
}
int ArrayTools::Search(int search){
    int search1 = -1;
    int i = 0;
    for (i = 0;i < SIZE_; i ++){
        if (ARRAY[i] == search){
            search1 = i;
        }
    }
    return search1;
}
int ArrayTools::Is_sorted(){
    if (ARRAY_[0] < ARRAY_[1] && ARRAY_[1] < ARRAY_[2] && ARRAY_[2] < ARRAY_[3] && ARRAY_[3] < ARRAY_[4])
}

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    ArrayTools a(myArray,size);
    
    a.Print();
    cout <<  "Min: " << a.Find_min(0, 4) << endl;
    cout << "Max: " << a.Find_max(5, 10) << endl;
    cout << "Sum = " << a.Find_sum() << endl;
    cout << "Search 10" << a.Search(10) << endl;
    cout << "Sorted? " << a.Is_sorted() << endl;
    
    return 0;
}