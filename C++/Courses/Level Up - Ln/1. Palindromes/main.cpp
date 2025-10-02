#include <iostream>

bool isPalindrome(std::string);

int main(){
    
    std::string word;
    bool is_palindrome_flag;
    std::cout<<"Write your word (1): ";
    std::cin>>word;
    is_palindrome_flag = isPalindrome(word);

    if(is_palindrome_flag) std::cout<<word<<" is a palindrome."<<std::endl;
    else std::cout<<word<<" isn't a palindrome."<<std::endl;

    std::cout<<std::endl<<std::endl;
    return 0;
}

bool isPalindrome(std::string word){
    int j = word.length()-1;
    for(int i=0;i<word.length();i++){
        if(i > j) return true;

        if(word.at(i) == word.at(j)) j--;
        else return false;
    }
}