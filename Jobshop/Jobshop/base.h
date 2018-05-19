/**
 * basic datastructures and funcs
 *
 * base.h
 * by Hzy
 * 2018-5-10
 */

#ifndef _BASE_H_
#define _BASE_H_

#define MAX_LEN 200
#define MAX_MATRIX 200

void exchange(int* a, int* b);
void random_shuffle(int* a, int n);
int getMax(int a, int b);
void arrayCopy(int * destination, int * source, int n);

/* the whole job */
typedef struct {
	int machine_amount;
	int job_amount;
	int operation_amount[MAX_LEN];
} All_job;

typedef struct {
	int begin;
	int end;
	int job;
	int operation;
} Result;
#endif // !_BASE_H_
