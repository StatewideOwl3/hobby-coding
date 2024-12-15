#include <iostream>
#include <string.h>

int main(){
    int t;
    std::cin >> t;
    
    while(t--){
        std::string a;
        std::getline(std::cin >> std::ws, a);
        int len = a.length();
        int j=0;
        char b[len+1];
      for (int i=len-1;i>=0;i--){
            switch(a[i]){
                case 'q':{
                    b[j]='p';
                    break;
                }
                case 'p':{
                    b[j] = 'q';
                    break;
                }
                case 'w':{
                    b[j]=a[i];
                    break;
                }
            }
            j++;
        }
        b[len]='\0';
        printf("%s\n",b);
    }

    return 0;
}