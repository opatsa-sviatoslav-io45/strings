CC=cc

main.out: main.c
	$CC -o main.out main.c

clean:V:
	rm -rf *.out