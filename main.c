// difference-of-k(integer)-between-array-integers

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, a,count = 0;
    int *input;
    input = (int*) malloc(sizeof(int));
    for(int i = 0; i<5; i++){
      cin >> input[i];
    }
    cin >> k;
    for(int i = 0; i<5; i++){
        for(int j = i; j<5; j++){
           if (abs(input[i] - input[j]) == k){
               count++;
           }
        }
    }
    printf("%d",count);
}
