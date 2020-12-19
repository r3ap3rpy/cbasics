CFLAGS="-Wall"
all:
	make ./hello_world/hello_world
	make ./formatted_print/formatted_print
	make ./vars_types/vars_types
	make ./ifffy/ifffy
	make ./while/while
	make ./cities/cities
	make ./arrnstring/arrnstring
	make ./arrnsize/arrnsize
clean:
	rm -f ./hello_world/hello_world
	rm -f ./formatted_print/formatted_print
	rm -f ./vars_types/vars_types
	rm -f ./ifffy/ifffy
	rm -f ./while/while
	rm -f ./cities/cities
	rm -f ./arrnstring/arrnstring
	rm -f ./arrnsize/arrnsize
