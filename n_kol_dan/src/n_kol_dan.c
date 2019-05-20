/*
 ============================================================================
 Name        : n_kol_dan.c
 Author      : =^_^=
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(void) {
    int a=1,n,kom;
    float rezult, sum;
    float *vector_a=NULL, *vector_b=NULL;
    while(a != 0){
        printf("Enter the memory size: ");
        scanf("%d", &n);
        if(n>0){
            vector_a = malloc(n * sizeof(float));//выделение памяти для вектора <a>
            for (int i = 0; i < n; i++){//ввод элементов
                printf("koordinata_vector_a[%d]",i);
                scanf("%f",&vector_a[i]);
            }
            vector_b = malloc(n * sizeof(float));  //выделение памяти для вектора <b>
            for (int i = 0; i < n; i++){//ввод элементов
                printf("koordinata_vector_b[%d]",i);
                scanf("%f",&vector_b[i]);
            }
            printf("What we do ?\n a) Аddition kom=1\n b) Subtraction kom=2\n c) Scalar product kom=3\n Type the command:");//Выбор раздела команд для работы
            scanf("%d",&kom);
            switch(kom){
            case 1:// Сложение вектора
                printf("Rezult=\n");
                for (int i = 0; i < n; i++){
                    rezult = vector_a[i] + vector_b[i];
                    printf("%f \t \n",rezult);//Вывод результата
                }
                free(vector_a);//Очистка памяти
                free(vector_b);//Очистка памяти
                break;
            case 2://Вычитание
                printf("Rezult=\n");
                for (int i = 0; i < n; i++){
                    rezult = vector_a[i] - vector_b[i];
                    printf("%f \t \n ",rezult);//Вывод результата
                }
                free(vector_a);//Очистка памяти
                free(vector_b);//Очистка памяти
                break;
            case 3://Скалярное произведение
                for (int i = 0; i < n; i++){
                    rezult = (vector_a[i] * vector_b[i]);
                    sum = sum+rezult;
                }
                printf("Rezult= %.2f\n",sum);//Вывод результата
                free(vector_a);//Очистка памяти
                free(vector_b);//Очистка памяти
                break;
            }
        }
        else{
            printf("The command is entered incorrectly!\n");
        }
        printf("Repeat enter any digit \n Stop enter kom=0 \n Type the command:");//Запрос на продолжение работы
        scanf("%d",&a);
    }
}
