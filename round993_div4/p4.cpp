#include <iostream>
#include <set>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;

        std::set<int> a = {0};
        std::set <int> perm={0};
        for (int i=0;i<n;i++){
            int temp;
            std::cin >> temp;
            a.insert(temp);
            perm.insert(i+1); //set insertion syntax!!!
        }
        perm.erase(0);
        a.erase(0);
        int b[n];
        //first iterate through A, add unique elements into B
        int j=0;
        int flag=1;
        std::set <int>::iterator itr;
        for (itr=a.begin(); itr!=a.end(); itr++){
            b[j]=*itr;
            j++;
        }
        //fill rest of b with remaining elements of perm?
        //iterate through perm set using iterator:
        for (itr = perm.begin(); itr!=perm.end(); itr++){
            b[j]=*itr; //?? fill with remaining perm elements?
            j++;
        }
        for (int index=0;index<n;index++){
            std::cout << b[index] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}