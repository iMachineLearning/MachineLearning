///Users/utopia/Documents/iOS/My Project/Shell-Metzner/Shell-Metzner.xcodeproj
//  main.cpp
//  Shell-Metzner
//
//  Created by Utopia on 2017/5/23.
//  Copyright © 2017年 Utopia. All rights reserved.
//

#include <iostream>

void shell_sort(int a[], int len){
    
    for (int step = len/2; step > 0; step = step / 2) {
        for (int i = 0; i < step; i++) {
            for (int j = i + step; j < len; j = j + step) {
                if (a[j - step] > a[j]) {
                    int insert = a[j];
                    int k = j - step;
                    while (k >= 0 && a[k] > insert) {
                        a[k + step] = a[k];
                        k = k - step;
                    }
                    a[k + step] = insert;
                }
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int a[5] = {3, 7, 5, 2, 1};

    shell_sort(a, 5);
    
    return 0;
}


