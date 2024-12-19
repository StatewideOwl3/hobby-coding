#include <iostream>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;

    int arr[6];
    arr[0]=a*b*c;
    arr[1]=a+b*c;
    arr[2]=a*b+c;
    arr[3]=a*(b+c);
    arr[4]=(a+b)*c;
    arr[5]=a+b+c;

    int max_index=0;
    for (int i=0;i<6;i++){
        if (arr[i]>arr[max_index])
            max_index=i;
    }
    std::cout << arr[max_index];
    return 0;
}