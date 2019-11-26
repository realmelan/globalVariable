set -e

rm -rf *.o *.out *.a *.so

g++ -c -fPIC -g common.cc -o common.o
ar rcs libcommon.a common.o

g++ -c -fPIC -g a.cc -o a.o
g++ -c -fPIC -g b.cc -o b.o
g++ -c -fPIC -g main.cc -o main.o

ar rcs liba.a a.o
ar rcs libb.a b.o

g++ -shared -Wl,--whole-archive liba.a libcommon.a -Wl,-no-whole-archive -o liba.so
g++ -shared -Wl,--whole-archive libb.a libcommon.a -Wl,-no-whole-archive -o libb.so

g++ main.o -Wl,-rpath=. -L. -lb -la -o a.out
