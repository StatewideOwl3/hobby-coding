#include <iostream>
#include <string.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        char str[n+1];
        scanf("%s",str);
        str[n]='\0';

        //generate frequency array
        int freq[26] = {0};
        for (int i=0;i<n;i++){
            freq[(int)str[i] - 97]++;
            //std::cout << "freq( "<< (int)str[i] - 97 << ") is: "<< freq[(int)str[i] - 97] << '\n';
        }
        //find first and second most frequent characters
        int first_highest_index=0;

        for (int i=0;i<26;i++){
            if (freq[i]>freq[first_highest_index])
              first_highest_index=i;
        }
        int lowest_index=first_highest_index;
        /*
        for (int i=0;i<26;i++){
            if (freq[i]>0 && freq[i]<freq[lowest_index])
              lowest_index=i;
        }
        */
        for (int i=0;i<n;i++){
            if (freq[(int)str[i] - 97] < freq[lowest_index]){
                lowest_index=(int)str[i] - 97;
            }
        }
        //std::cout << "most freq index: " << first_highest_index << "\t least freq index: " << lowest_index <<'\n';
        char most_freq = (char)((int)'a'+first_highest_index);
        char least_freq = (char)((int)'a'+lowest_index);

        //std::cout << "most freq char: " << most_freq << "\t least freq char: " << least_freq <<'\n';
        //replace and generate newstring
        if (most_freq==least_freq){
            for (int i=0;i<n;i++){
                if (str[i]!=most_freq){
                    str[i]=most_freq;
                    break;
                }
            }
        }
        else{
            for (int i=0;i<n;i++){
                if (str[i]==least_freq){
                    str[i]=most_freq;
                    break;
                }
            }
        }
        std::cout << str << '\n';
    }

    return 0;
}