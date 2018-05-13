/**
 * base of GA
 * 
 * gene.h
 * by Hzy
 * 2018-5-10
 */
#pragma once
#ifndef _GENE_H_
#define _GENE_H_

#include "base.h"

#define Max_Length 20  // contemp
#define Max_Population 300  // contempss
#define POPULATION 300
#define Px 0.95
#define Pm 0.02

/* chromosome */
int * creatChromo(All_job require, int all_operation);
/* population */
int** newPopulation(All_job require);
void deletePopulation(int** population);
int** nextPopulation(int** oldpopulation);
/* get Cmax */
int getCmax(int* chromo, int machine, int job, int all_operation);
int getIndex(int* chromo, int i);
/* crossover */
int* order_crossover(int* p1, int* p2, int all_operation, int n);

/* mutation */
void mutation(int* chromo, int all_operation);

/* select */
int e_select(int** population, int machine, int job, int all_operation);
int roulette_select(int** population, int machine, int job, int all_operation);
#endif // !_GENE_H_
