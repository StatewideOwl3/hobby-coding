#include <iostream>
#include <cstring>
#include <stdlib.h>

char* new_format(std::string s);

int main(){
    int n;
    std::cin >> n;
    char matrix [n][101];
    for (int i=0;i<n;i++){
        std::cin >> matrix[i];
        std::string temp = matrix[i];
        if ((int)(temp.length())>10){
            strcpy(matrix[i],new_format(temp));
        }
    }
    for (int i=0;i<n;i++){
        std::cout << matrix[i] << '\n';
    }
    //filled string matrix. now solve question
    //if string length > 10, convert to new format
    

    return 0;
}

char* new_format(std::string s){
    int num = s.length()-2;
    char* ans = (char*)malloc(sizeof(char)*5);//max is 5, min is 4 including nulls: A_B'\0';
    sprintf(ans,"%c%d%c",s.at(0),num,s.at(s.length()-1));
    return ans;
}