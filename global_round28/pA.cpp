#include <iostream>
#include <stdbool.h>

bool consec_33(long int x){
    int digit1;
    int digit2;

    while(x>0){

        digit1=x%10;
        x=x/10;
        digit2=x%10;
        if (digit1==3 && digit2==3){
            return true;
        }
    }
    return false;
}

long int remove_consec33(long int x){
    int index1, index2;
    long int temp=x;
    int n=0;
    while(temp>0){
        temp=temp/10;
        n++;
    }
    int digits[n];
    int i=0;
    while(x>0){
        digits[i]=x%10;
        x=x/10;
        i++;
    }
    for (int i=0;i<n-1;i++){
        if (digits[i]==3 && digits[i+1]==3){
            index1=i;
            index2=i+1;
            break;
        }
    }
    long int ans=0;
    long long int ten_power=1;
    for (int i=0;i<n;i++){
        if (i!=index1 && i!=index2){
            ans+=digits[i]*ten_power;
            ten_power*=10;
        }
    }
    return ans;

}

int main(){
    int t;
    std::cin >> t;

    while(t--){
        long int x;
        std::cin >> x;
        int flag=0;

        while(x>=33){
            //printf("\nx is %ld\n",x);
            if (x%33==0){
                //printf("x is a multiple of 33 so YES\n");
                std::cout << "YES\n";
                flag=1;
                break;
            }
            else if(consec_33(x)){
                //printf("x has consec 33's, changing x ...");
                x=remove_consec33(x);
                //printf("x is now %ld\n",x);
            }
            else{
                //printf("last ditch: x=x-33\n");
                x=x-33;
            }
        }
        if (flag==1){
            continue;
        }
        std::cout << "NO\n";
        
    }

    return 0;
}