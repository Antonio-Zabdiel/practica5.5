#include<stdio.h>

int main(){    
    int nums[100];
    int n,n2;//numero de datos a ingresar, datos ingresados
    int i = 0;//#1 
    int j = 0;//#2
    int k = 0, l = 0, o = 0, p = 0, temp = 0;//iteradores del burbuja, facilitadores del burbuja, temporal
    float promedio = 0.0;//

    printf("dime cuantos datos quieres ingresar, no mas de 100: ");
    scanf("%d", &n);

    //bucle uno, registro de datos #1
    for (i = 0; i < n; i++){
        printf("ingresa un dato: ");
        scanf("%d", &n2);
        nums[i] = n2;
    }
      
    //bucle 2 para la suma usada ten el promecsio #2
    //seccion de promedio
    for(j = 0 ; j < i ; j++){
        promedio += nums[j];
        //printf("%f\n", promedio);  
    }  
    promedio /= i;

    //Bucle 3,4 ordenamiento burbuja
    for (k = 1; k < n; k++)
    {
        for (l = 0; l < n; l++)
        {
            o = l; 
            p = o;
            p += 1;
            if(nums[o] > nums[p]){
                temp = nums[o];
                nums[o] = nums[p];
                nums[p] = temp;
            }
        }
    } 

    printf("======================================================\n");
    printf("el promedio de los numeros es: %f\n", promedio);
    printf("el numero mas pequeño es: %d\n", nums[0]);
    printf("el numero mas grande es: %d\n", nums[--n]);
     
    return 0;
}
