/*
ѡ������min���ڼ�¼��������С��������ֵ
index���ڼ�¼��С��ֵ��λ�ã�����֮���ǰ���Ԫ�ؽ���ʹ��
ͨ����һ��λ�ÿ�ʼѭ����min=a[0]����֮�����ֵ��Ѱ���Ƿ��б�a[0]��С����ֵ����¼��min��
�����ҵ���С����ֵ������ǰ��
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
