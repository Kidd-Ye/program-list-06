//
//  main.cpp
//  Majority
//
//  Created by kidd on 2018/9/8.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>

int Majority(int arr[], int length){
    int i, temp, count = 1;
    temp = arr[0];
    
    for (i = 1; i < length; i++) {
        if (arr[i] == temp) {
            count++;
        }else{
            if (count > 0) {
                count--;
            }else{
                temp = arr[i];
                count = 1;
            }
        }
    }
    if (count > 0) {
        for (i = count = 0; i < length; i++) {
            if (arr[i] == temp) {
                count++;
            }
        }
    }
    if (count > length/2) {
        return temp;
    }else{
        return -1;
    }
}


int main(int argc, const char * argv[]) {
    
    int arr[] = {1,8,6,8,8,8};
    printf("数组的主元素为: %d\n", Majority(arr,6));
    return 0;
}
