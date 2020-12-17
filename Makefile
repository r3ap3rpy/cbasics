CFLAGS="-Wall"
all:
	make ./hello_world/hello_world
	make ./formatted_print/formatted_print

clean:
	rm -f ./hello_world/hello_world
	rm -f ./formatted_print/formatted_print
