CFLAGS= -Wall -g
LOOPPROG = basicClassification.o advancedClassificationLoop.o
RECPROG = basicClassification.o advancedClassificationRecursion.o
LOOP = advancedClassificationLoop.c
REC = advancedClassificationRecursion.c
BASIC = basicClassification.c

#make all
all: libclassloops.so libclassloops.a libclassrec.so libclassrec.a mains maindloop maindrec

#Make loops
loops: libclassloops.a
libclassloops.a: $(LOOPPROG)
	ar -rcs libclassloops.a $(LOOPPROG)
	
#Make recursives
recursives: libclassrec.a
libclassrec.a: $(RECPROG)
	ar -rcs libclassrec.a $(RECPROG)

#Make recursived
recursived: libclassrec.so
libclassrec.so: $(RECPROG)
	gcc -shared $(CFLAGS) -o libclassrec.so $(RECPROG) 
	
#Make loopd
loopd: libclassloops.so
libclassloops.so: $(LOOPPROG)
	gcc -shared $(CFLAGS) -o libclassloops.so $(LOOPPROG) 

#Make mains
mains: main.o libclassrec.a
	gcc -Wall -o mains main.o libclassrec.a -lm

#make maindloop
maindloop: main.o libclassloops.so
	gcc $(CFLAGS) -o maindloop main.o ./libclassloops.so -lm

#make maindrec
maindrec: main.o libclassrec.so
	gcc $(CFLAGS) -o maindrec main.o ./libclassrec.so -lm

#Fuctions
advancedClassificationRecursion.o: $(REC) NumClass.h
	gcc $(CFLAGS) -fPIC -c $(REC)
advancedClassificationLoop.o: $(LOOP) NumClass.h
	gcc $(CFLAGS) -fPIC -c $(LOOP)
basicClassification.o: $(BASIC) NumClass.h
	gcc $(CFLAGS) -fPIC -c $(BASIC)
main.o: main.c NumClass.h
	gcc $(CFLAGS) -c main.c
#Clean
clean:
	rm -f *.o *so *a mains maindloop maindrec 
