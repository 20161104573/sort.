//
//  main.c
//  sort.
//
//  Created by a20161104573 on 2017/6/13.
//  Copyright © 2017年 a20161104573. All rights reserved.
//

#include<stdio.h>

int main()

{
    
    int a[10];
    
    int i,j,k;
    
    printf("请输入10个数,用空格隔开!!\n");
    
    for(i=0;i<10;i++)
        
        scanf("%d",&a[i]);
    
    for(i=0;i<9;i++)
        
        for(j=0;j<9-i;j++)
            
            if(a[j]>a[j+1])
                
            {
                
                k=a[j];
                
                a[j]=a[j+1];
                
                a[j+1]=k;
                
            }
    
    printf("冒泡排序法由小到大排序后: \n");
    
    for(i=0;i<10;i++)
        
        printf("%d",a[i]);
    
    printf("\n");
    
}
