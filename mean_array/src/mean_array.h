/*
 * mean_array.h
 *
 *  Created on:
 *      Author:
 */

#ifndef MEAN_ARRAY_H_
#define MEAN_ARRAY_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ZERO            0
#define ONE             1
#define MAX_LENGTH      20
#define MAX_ELEMENT     100
#define FILE_NAME       "mean_array.txt"
#define FILE_MODE       "w"
#define SEPARATOR_LINE  "-"
#define PRINT_ARRAY     "Array generato: "
#define PRINT_ELEMENT   "%d"
#define PRINT_MEAN      "\nMedia degli elementi dell'array: %.2f"

/**
 * Assicura che ad ogni lancio il programma
 * generi in maniera casuali numeri sempre diversi
 */
void srand_time();

/**
 * Genera in maniera casuale la lunghezza dell'array
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int get_length();

/**
 * Genera in modo casuale gli elementi di un array di lunghezza
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @param length
 * @return
 */
int* generate_array(int length);

/**
 * Stampa su file gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_array(FILE*file, int* array, int length);

/**
 * Restituisce la media degli elementi dell'array
 * di dimensione stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @param array
 * @param length
 * @return
 */
float mean(int* array, int length);

/**
 * Stampa su file la media degli elementi dell'array
 * di dimensione stabilita dal parametro length
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_mean(FILE*file, int* array, int length);

#endif /* MEAN_ARRAY_H_ */
