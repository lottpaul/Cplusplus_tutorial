#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> word_list {"Hello", "Aloha", "Howdy"};
    int c = 4;
    
    //Switch-Case Statement
//    switch (c){
//		case 1:
//			std::cout << "Case is 1 ; c=" << c << std::endl;
//			break;
//		case 2: std::cout << "Case is 2; c=" << c << std::endl;
//		case 3: std::cout << "Case is 3; c=" << c << std::endl;
//		default: std::cout << "Default Case; c=" << c << std::endl;
//	}

    //Standard Range based Loop
    // Note we separate by semi-colon
//    for(int i=0; i<word_list.size(); i++){
//        std::cout << word_list[i] << std::endl;
//    }

    //Using minimal auto in for loop to infer type
    // Note: Here we use a colon instead of a semi-colon
//    for(auto i: word_list){
//        std::cout << i << std::endl;
//    }

    //Using Iterators in for Loop
    // You'll oftens see ++iterator in loops as opposed to iterator++ - the first
    //    is pre-increment and the latter is post-increment
    // Pre-increment is faster and more efficient than post-increment (iter++)
    //    Pre-increment (++i) − Before assigning the value to the variable, the value is incremented by one.
    // Post-increment has to make a copy of the old value to return where as pre-increment is in-place
    //    Post-increment (i++) − After assigning the value to the variable, the value is incremented.
//    for(std::vector<std::string>::iterator iter=word_list.begin(); iter!=word_list.end(); ++iter){
//        std::cout << *iter << std::endl;
////       break;  // Exit the loop
////      continue; // Proceed to the next loop
//    }

    //Using Iterators + Auto in for Loop
    //  See previous loop.  Instead of having to write out std::vector<std::string>::iterator
    //  We use auto
//    for(auto iter=word_list.begin(); iter!=word_list.end(); ++iter){
//        std::cout << *iter << std::endl;
//    }

    //While Loop - condition is evaluated first before processing the block
//    auto iter = word_list.begin();
//    while(iter!=word_list.end()){
//        std::cout << *iter << std::endl;
//        ++iter;
//    }

	//Do-While  - condition is evaluated after processing the block
    iter = word_list.begin();
    do {
        std::cout << *iter << std::endl;
        ++iter;
    } while (iter!=word_list.end());

    return 0;
}
