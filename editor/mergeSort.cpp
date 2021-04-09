//
// Created by Administrator on 2021/2/24.
//
/**
 * Created by chengxiao on 2016/12/8.
 */
#include <iostream>
#include <vector>
/**
 * Created by chengxiao on 2016/12/8.
 */

void merge(int* arr,int left,int mid,int right,int* temp){
    int i = left;//左序列指针
    int j = mid+1;//右序列指针
    int t = 0;//临时数组指针
    while (i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[t++] = arr[i++];
        }else {
            temp[t++] = arr[j++];
        }
    }
    while(i<=mid){//将左边剩余元素填充进temp中
        temp[t++] = arr[i++];
    }
    while(j<=right){//将右序列剩余元素填充进temp中
        temp[t++] = arr[j++];
    }
    t = 0;
    //将temp中的元素全部拷贝到原数组中
    while(left <= right){
        arr[left++] = temp[t++];
    }
}
void Sort(int *arr,int left,int right,int *temp){
        if(left<right){
            int mid = (left+right)/2;
            printf("%d %d %d\n", left, mid, right);
            Sort(arr,left,mid,temp);//左边归并排序，使得左子序列有序
            Sort(arr,mid+1,right,temp);//右边归并排序，使得右子序列有序
            merge(arr,left,mid,right,temp);//将两个有序子数组合并操作
            for(int i=left;i<=right;i++){
                if(i==right)
                    printf("%d\n", arr[i]);
                else
                    printf("%d ", arr[i]);
            }
        }
}
void sort(int* arr,int length){
    int *temp = new int[length];//在排序前，先建好一个长度等于原数组长度的临时数组，避免递归中频繁开辟空间
    Sort(arr,0,length-1,temp);
}
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    sort(arr,length);
//    for(int i:arr)
//        printf("%d\n", i);
    return 0;
}