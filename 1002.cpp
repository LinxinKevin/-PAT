#include <iostream>
#include <string>
#include <memory.h>
#include<iomanip>
using namespace std;
int main(){
    double K1[1005];
    double K2[1005];
    memset(K1,0,sizeof(K1));
    memset(K2,0,sizeof(K2));
    int K,index,M;
    std::cin >> K;
    for (int i = 0; i < K; i++) {
        std::cin >> index;
        std::cin >> K1[index];
    }
    std::cin >> M;
    for (int i = 0; i < M; i++) {
        std::cin >> index;
        std::cin >> K2[index];
    }
    for(int i=0;i<1005;i++){
        K1[i]+=K2[i];
    }
    int count = 0;
    for(int i=1004;i>=0;i--){
        if(K1[i]!=0) count ++;
    }
    std::cout << count;
    for(int i=1004;i>=0;i--){
        if(K1[i]!=0) std::cout << " " << i<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<K1[i];
    }
    return 0;
}
