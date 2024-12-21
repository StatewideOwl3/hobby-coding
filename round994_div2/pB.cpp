#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <set>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        int first_p_index=-1;
        int last_s_index=-1;
        for (int i=0;i<n;i++){
            if (s.at(i)=='p'){
                first_p_index=i;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if (s.at(i)=='s'){
                last_s_index=i;
                break;
            }
        }
        if ( first_p_index>=0 && last_s_index>first_p_index){
            std::cout << "NO\n";
            continue;//protects code
        }
        
        if (first_p_index == -1 || last_s_index==-1){
            std::cout << "YES\n";
            continue;
        }

        if (s.at(n-1)=='p' && (s.at(n-2)=='s' || s.at(n-2)=='p')){
            std::cout << "YES\n";
            continue;
        }

        std::cout << "NO\n";        

    }

    return 0;
}