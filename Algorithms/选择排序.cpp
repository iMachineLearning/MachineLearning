/*
选择排序，min用于记录数组中最小的数字数值
index用于记录最小数值的位置，用于之后和前面的元素交换使用
通过第一个位置开始循环，min=a[0]，在之后的数值中寻找是否有比a[0]更小的数值，记录在min中
最终找到最小的数值放在最前面
*/

#include<iostream>
using namespace std;
int main(){
int length,a[100],min,index;
cin>>length;
cout<<"The length is "<<length<<endl;
for(int i = 0;i<length;i++){
    cin>>a[i];
}

for(int i = 0;i<length;i++){
    min = a[i];
    index = i;
    for(int j = i+1;j<length;j++){
    if(a[j]<min){
        min =a[j];
        index = j;
    }
    }
    a[index] = a[i];
    a[i] = min;

}

for(int i = 0;i<length;i++){
    cout<<a[i]<<" ";
}

return 0;
}
