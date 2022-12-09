default: noten_switch

noten_switch.o: noten_switch.c
	gcc -c noten_switch.c -o noten_switch.o

noten_switch: noten_switch.o
	gcc noten_switch.o -o noten_switch

clean:
	-rm -f noten_switch.o
	-rm -f noten_switch
