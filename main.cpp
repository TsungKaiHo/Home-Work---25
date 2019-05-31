//
//  main.cpp
//  Home Work 25
//
//  Created by 何宗愷 on 2019/5/31.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    int *p[4];
    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int i;
    p[0]=array[0];
    p[1]=array[1];
    p[2]=array[2];
    p[3]=array[3];
    for (i=0; i<3; i++)
        printf("%d   ", *(p[0]+i));
    printf("\n");
    for (i=0; i<3; i++)
        printf("%d   ", *(p[1]+i));
    printf("\n");
    for (i=0; i<3; i++)
        printf("%d   ", *(p[2]+i));
    printf("\n");
    for (i=0; i<3; i++)
        printf("%d   ", *(p[3]+i));
    printf("\n");
    system("pause");
    return 0;
}
