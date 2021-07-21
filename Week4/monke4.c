#include<stdio.h>

int powe(int base,int num){
    if(num<=1) return base;
    else return base*powe(base,num-1);
}