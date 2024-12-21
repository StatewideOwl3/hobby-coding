#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        int zero_counter=0;
        int o=0;
        int zero_indicies[n];
        for (int i=0;i<n;i++){
            std::cin >> a[i];
            if (a[i]==0){
                zero_counter++;
                zero_indicies[o]=i;
                o++;
            }
        }
        if (zero_counter==n){
            std::cout << 0 << '\n';
            continue;
        }
        if (zero_counter==0){
            std::cout << 1 << '\n';
            continue;
        }
        if (zero_counter==1 && (zero_indicies[0]==0 || zero_indicies[0]==n-1)){
            std::cout << 1 << '\n';
            continue;
        }
        if (zero_counter==1 && !(zero_indicies[0]==0 || zero_indicies[0]==n-1)){
            std::cout << 2 << '\n';
            continue;
        }

        int first_nonzero=n-1;
        int last_nonzero=0;
        for (int i=0;i<n;i++){
            if (a[i]!=0){
                if (i<=first_nonzero){
                    first_nonzero=i;
                }
                if (i>=last_nonzero){
                    last_nonzero=i;
                }
            }
        }
        int flag=1;
        for (int i=first_nonzero;i<=last_nonzero;i++){
            if (a[i]==0){
                flag=0;
                std::cout << 2 << '\n';
                break;
            }
        }
        if (flag==1){
            std::cout << 1 << '\n';
        }

    }

    return 0;
}
