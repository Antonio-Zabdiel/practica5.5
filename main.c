/*
    b3,b4{
        ordenamiento burbuja
    }

    que me diga cual es el menor y cual el mayor
*/
#include<stdio.h>

int main(){    
    int nums[100];
    int n;//
    int n2;//
    int i = 0;//#1
    int j = 0;//#2
    int k = 0;
    int l = 0;
    float promedio = 0.0;//

    printf("dime cuantos datos quieres ingresar, no mas de 100: ");
    scanf("%d", &n);

    //bucle uno, registro de datos #1
    for (i = 0; i < n; i++){
        printf("ingresa un dato: ");
        scanf("%d", &n2);
        nums[i] = n2;
    }

    //bucle 2 para la suma usada en el promecsio #2
    //seccion de promedio
    for(j = 0 ; j < i ; j++){
        promedio += nums[j];
        printf("%f\n", promedio);  
    }  

    promedio /= i;
     

    return 0;
}
