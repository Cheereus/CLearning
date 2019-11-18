//分治法
#include <stdio.h>
int max_sub_sum(int a[],int left, int right){
    int center,i,j,sum,left_sum,right_sum,s1,s2,lefts,rights;
    if(left == right){
        /*二分法递归结束条件*/
        if(a[left] > 0)
            return a[left];
        else 
            return 0;

    }else{
        center = (left + right)/2;
        left_sum = max_sub_sum(a, left,center); /*求左边最大子段*/
        right_sum = max_sub_sum(a, center + 1, right);/*求右边最大子段*/
        /*下面求中间交叉部分最大子段*/
        s1 = 0;
        lefts = 0;
        for(i=center; i>=left;i--){
            lefts = lefts + a[i];
            if(lefts > s1){
               s1 = lefts;
            }
        }
        s2 =0;
        rights = 0;
        for(j = center + 1; j<=right;j++){
           rights = rights + a[j];
           if(rights > s2){
                s2 = rights;
           }
        }
        /*选择最大子段*/
        if((s1 + s2 < left_sum) && (right_sum < left_sum))
return left_sum;
        if(s1 + s2 < right_sum)return right_sum;
        return s1+s2;
    }

}
int main(){
    int a[] = {-2,1,-4,13,-50,6};
    int left_partion = -1; /*左边界*/
    int right_partion = -1;/*右边界*/
    int i =0;
    int ret = max_sub_sum(a,1,5);
    printf("max_sub_sum is:%d\n",ret);
    return 0;
}
