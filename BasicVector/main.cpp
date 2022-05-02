#include <iostream>
#include <vector>

int main() {
    //Create a vector and intialize it with one value 400
    std::vector<int> numbers = {400};

    //Push additional items onto the array
    for (auto i=0;i<=100;i++){
        numbers.push_back(i);
    }

    for (auto i=100;i>=50;i--){
        numbers.pop_back();  //remove last element in the vector
    }

    //Looping through using iterators
    for (auto it=numbers.begin(); it!=numbers.end();){
        if (*it%2==0){  //dereference iteratator and see if mod 2 is zero
            it = numbers.erase(it);
        } else {
            ++it;
        }
    }

    //Loop through the vector
    for (auto i: numbers){
        std::cout << i << std::endl;
    }

    //Print Size of the Vector ie # Elements in vector
    std::cout << numbers.size() << std::endl;

    //Print the number of elements that can be stored in currenly alloacated storage
    std::cout << numbers.capacity() <<std::endl;

    //Print the maximum # of elements that could be stored in the vector
    std::cout << numbers.max_size() <<std::endl;

    return 0;
}
