#include<iostream>
#include "snowman.hpp"
#include<array>

const int min_num = 11111111 ;
const int max_num = 44444444 ;
const int length = 8 ;
const int hat = 0 ;
const int nose = 1 ;
const int l_eye = 2 ;
const int r_eye = 3 ;
const int left_arm = 4 ;
const int right_arm = 5 ;
const int torso_num = 6 ;
const int base_num = 7 ;

using namespace std;

namespace ariel {
    int range_check (int num){
        if (num > max_num || num < min_num) {return 0 ;}
        return 1 ;
    }
    int check_digits (int num){
        std::string digits = std::to_string(num); //convert num to string https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c
        for (size_t i = 0; i < length; i++){
            if(digits[i] > '4' || digits[i] < '1'){
                return 0 ;
            }
        }
        return 1 ;
    }

    string snowman(int num){
        if(range_check(num) == 0) {
            throw std::out_of_range{"Invalid code '" + to_string(num)+"'"};
        }
        if(check_digits(num) == 0) {
            throw std::invalid_argument{ "num can only contains the digits 1-4 " + to_string(num)} ;
        }
        return "none";
      
                      
    }
}
