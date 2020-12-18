### Welcome

This repository is for my C programming study.

The code samples are free to be used.

I may even have some youtube videos created about them aswell.

If you are on fedora you should issue the following command before you dive in.

``` bash
sudo yum groupinstall development-tools -y
```

Created top level *Makefile* to compile everything at once and allow cleanup!

``` bash
# To build everything
make
# To clean everything
make clean
```

Control basics.

``` C
// IF
if(TEST) {
	CODE;
} else if (TEST) {
	CODE;
} else {
	CODE;
}
//SWITCH
switch(OPERAND) {
	case CONSTANT:
		CODE;
		break;
	default:
		CODE;
}
// WHILE
while(TEST){
	CODE;
}
// DO WHILE
do {
	CODE;
} while(TEST);
// FOR
for(INIT; TEST; POST) {
	CODE;
}
// ENUM
enum { CONST1; CONST2; CONST3 } NAME;
// GOTO
if(ERROR) {
	goto fail;
} else {
	goto success;
}

fail:
	CODE;

success:
	CODE;
// FUNCTION
TYPE NAME(ARG1, ARG2, ..) {
	CODE;
	return VALUE;
}
```
