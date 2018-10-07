# GxKnightFuzz.lv2
Vintage Fuzz Pedal simulation

This is a really nasty Fuzz Pedal, 
which act at lower/ moderate settings as a ultra dark fuzz,
when settings get cranked up, it becomes more and more high harmonics.

![GxKnightFuzz](https://raw.githubusercontent.com/brummer10/GxKnightFuzz.lv2/master/GxKnightFuzz.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxKnightFuzz:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

