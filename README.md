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

Individual examples and how to build them.

``` bash
#hello_world/hello_world.c
CFLAGS="-Wall" make hello_world && ./hello_world
```

