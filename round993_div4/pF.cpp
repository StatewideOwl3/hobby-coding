#include <iostream>
#include <stdlib.h>

int find_beauty(int* a, int n, int*b, int m);

int sub_col_row_addbackrc( int* a, int n, int*b, int m,int i, int j, int beauty);


int main(){
    int n,m,q;
    std::cin >> n >> m >> q;

    int a[n];
    int b[m];

    for (int i=0;i<n;i++){
        std::cin >> a[i];
    }
    for (int i=0;i<m;i++){
        std::cin >> b[i];
    }
    int beauty = find_beauty(a,n,b,m);

    while(q--){
        int x;
        std::cin >> x;
        short int flag=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (x==sub_col_row_addbackrc(a,n,b,m,i,j,beauty)){
                    std::cout << "yes\n";
                    flag=1;
                    break;
                }
            }
            if (flag==1)
              break;
        }
        if (flag==0)
            std::cout << "no\n";
    }
    
    return 0;
}


int find_beauty(int* a, int n, int*b, int m){
    int sum=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=a[i]*b[j];
        }
    }
    return sum;    
}

int sub_col_row_addbackrc( int* a, int n, int*b, int m,int i, int j, int beauty){
    int row_sum=0;
    int col_sum=0;
    
    for (int k=0;k<m;k++){
        row_sum+=a[i]*b[k];
    }
    for (int k=0;k<n;k++){
        col_sum+=a[k]*b[j];
    }
    return beauty-row_sum-col_sum+(a[i]*b[j]);
}
