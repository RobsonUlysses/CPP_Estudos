#include<iostream>


//nada de mais nessa parte, apenas uma função que recebe um array e retorna a soma de seus elementos.

int arraytofunc(int nums[], int size);
int main(){




int nums[6]{1,2,3,4,5,6};

int result = arraytofunc(nums, 6);
std::cout << "Sum: " << result << std::endl;






}


int arraytofunc(int nums[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += nums[i];
    }
    return sum;
}