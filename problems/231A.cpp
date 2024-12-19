#include <iostream>

int main(){

    int n,p1,p2,p3;
    std::cin >> n;
    
    int total=0;
    for (int i=0;i<n;i++){
        int sum=0;
        std::cin >> p1 >> p2 >> p3;
        sum=p1+p2+p3;
        if (sum>=2){
            total++;
        }
    }

    std::cout << total;
    return 0;
}