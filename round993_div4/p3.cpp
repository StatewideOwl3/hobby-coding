#include <iostream>
#include <stdbool.h>
#include <algorithm>


int main(){
    int t;
    std::cin >> t;

    while(t--){
        long long int m,a,b,c_in;
        std::cin >> m >> a >> b >> c_in;

        long long int ans=0, empty=2*m;
        long long int r1_poss, r2_poss;

        if (a>=m){
            r1_poss=m;
        }
        else if (a<m){
            r1_poss=a;
        }

        if (b>=m){
            r2_poss=m;
        }
        else if (b<m){
            r2_poss=b;
        }

        ans=r1_poss+r2_poss;
        empty = empty-ans;

        if (c_in>=empty){
            ans+=empty;
        }
        else if (c_in<empty){
            ans+=c_in;
        }
        std::cout << ans << '\n';
    }

    return 0;
}