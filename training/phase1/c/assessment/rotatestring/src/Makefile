a.out : ../obj/main.o ../obj/rot.o
	gcc $^
#		gcc ../obj/main.o ../obj/display.o

../obj/%.o : %.c ../hdr/hd.h
	gcc -c $< -o $@

#../obj/main.o : main.c
#	gcc -c main.c -o ../obj/main.o

#../obj/display.o :display.c
#	gcc -c display.c -o ../obj/display.o

clean:
	rm a.out ../obj/*.o



