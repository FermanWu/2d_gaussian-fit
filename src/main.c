#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "matrix_cal.h"

int main(int argc, const char** argv)
{
    matrix* Q = create_matrix(5, 5);
    printf("matrix Q\n");
    print_matrix(Q);

    double a[5][3] = { { 12, -51, 33 }, { 6, 167, 21 }, { -4, 24, 87 } ,{23, 14, 17},{21, 35, 41} };
    printf("%p\n", a);
    printf("%p\n", &a[0][0]);
    printf("%p\n",&a[0]);
    printf("%p\n", &a);
    printf("%p\n",*(&a));

    matrix* A = create_matrix_from_array(5, 3, (TYPE*)a);
    printf("matrix A\n"); 
    print_matrix(A);
    matrix* R = create_matrix(5, 3);
    printf("matrix R\n");
    print_matrix(R);

    //mixo_QR_decompose(A, Q, R);

    //matrix* R_blk = create_matrix(3, 3);
    //print_matrix(A);
    //print_matrix(Q);
    //print_matrix(R);
    //
    //point start = { 0, 0 };
    //point end = {2, 2};
    //matrix_copy_block(R, start, end, R_blk);
    //printf("copy R block\n");
    //print_matrix(R_blk);

    //TYPE b[3][3] = { { 12, -51, 33 }, { 6, 167, 21 }, { -4, 24, 87 } };
    //matrix* B = create_matrix_from_array(3, 3, b);

    //printf("matrix det\n");
    //matrix_deter(B, B->cols);
    //print_matrix(B);
    //
    //matrix* b_invers = create_matrix(B->rows, B->cols);
    //printf("b before inverse\n");
    //print_matrix(b_invers);
    //
    //matrix_inverse(B, b_invers);
    //printf("b after inverse\n");
    //print_matrix(b_invers);

    //matrix* AXB = matrix_multiply(A, B);
    //printf("matrix A X B\n");
    //print_matrix(AXB);


    //TYPE c[5] = { 12, -51, 17, 41, 33 };
    //TYPE* pc = (double*)malloc(sizeof(double) * 15);
    //memset(pc, 0x0, sizeof(double) * 15);
    //matrix* C = create_matrix_from_array(15, 1, &pc);
    //printf("matrix C\n");
    //print_matrix(C);

    //free_matrix(C);
    //free_matrix(AXB);
    free_matrix(A);
    free_matrix(Q);
    free_matrix(R);



    return 0;

}