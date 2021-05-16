/*
 * array.h
 *
 *  Created on: May 16, 2021
 *      Author: User
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include <avr/io.h>
#include <stdint.h>

/**
*Funkcija Element izracunava vrednost n-tog clana aritmetickog niza
opisanog pomocu početne vrednosti niza i razlike.
* @param first_element - prvi element niza
* @param difference - razlika
* @param n - n-ti clan niza
* @return vrednost n-tog clana aritmetickog niza
*/

int16_t Element(int16_t first_element, int16_t difference, int16_t n);

/**
*Funkcija Sum izracunava sumu prvih n clanova aritmetikog niza
opisanog pomocu pocetne vrednosti niza i razlike, na osnovu parametra mode.
Ukoliko mode ima vrednost ITERATIVE, vrednost sume je potrebno odrediti
iteratitvno (sumom svih elemenata do n-tog), dok u slucaju vrednosti
FORMULA, potrebno je odrediti sumu po odgovarajucoj formuli. ITERATIVE
i FORMULA su vrednosti definisane pomocu makro konstante.
*
* @param first_element - prvi element niza
* @param difference - razlika
* @param n - n ti clan niza
* @param mode - mod rada
* @return vrednost n-tog clana aritmetickog niza
*/


void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);


#endif /* ARRAY_H_ */
