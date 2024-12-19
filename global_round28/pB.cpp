#include <iostream>
#include <set>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n,k;
        std::cin >> n >> k;

        int perm[n];
        int count=1;

        std::set <int> avail_nums = {0};
        for (int i=1;i<=n;i++){
            avail_nums.insert(i);
        }
        avail_nums.erase(0);

        for (int i=0;i<n;i++){
            if (i%k==k-1){
                //printf("inserting %d at %d\n",count,i);
                perm[i]=count;
                avail_nums.erase(count);
                count++;
            }
            else{
                perm[i]=*(avail_nums.rbegin());
                avail_nums.erase(perm[i]);
                /*if (avail_nums.find(perm[i])==avail_nums.end()){
                    printf("deleted %d from set\n",perm[i]);
                }
                */
            }
        }
        for (int i=0;i<n;i++){
            std::cout << perm[i] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}