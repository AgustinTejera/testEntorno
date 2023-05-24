/*
 ============================================================================
 Name        : consola.c
 Author      : AgusT
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/log.h>
#include <protocolo.h>

int main(void) {
	puts("!!!Hice este programa con la Belu!!"); /* prints !!!Hice este programa con la Belu!! */
	imprimir_pantalla();
	t_log* logger;
	logger = log_create("consola.log", "proceso Consola", 1, LOG_LEVEL_INFO);
	log_info(logger, "Cree un logger");
	return EXIT_SUCCESS;
}
