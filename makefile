all: listaCentros.o listaUtentes.o listaVacinas.o centroVacinacao.o utente.o vacina.o main.c
	gcc -g -o main.o utente.o listaVacinas.o centroVacinacao.o listaCentros.o listaUtentes.o vacina.o main.c

listaCentros.o: centroVacinacao.o listaCentros.c
	gcc -g -o listaCentros.o centroVacinacao.o listaCentros.c -c

centroVacinacao.o: utente.o centroVacinacao.c 
	gcc -g -o centroVacinacao.o utente.o centroVacinacao.c -c

listaUtentes.o: utente.o listaUtentes.c
	gcc -g -o listaUtentes.o utente.o listaUtentes.c -c

utente.o: vacina.o utente.c 
	gcc -g -o utente.o vacina.o utente.c -c

listaVacinas.o: vacina.o listaVacinas.c 
	gcc -g -o listaVacinas.o vacina.o listaVacinas.c -c

vacina.o: vacina.c
	gcc -g -o vacina.o vacina.c -c

run:
	mingw32-make all
	./main.o