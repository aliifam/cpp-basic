#preprocessing command:
g++ -E compile.cpp > compile.p #outputing header file

#compile command for obj file:
g++ -c compile.cpp

#viewing machine code:
objdump -d compile.o

#linking object file
g++ compile.o tambah.o
g++ compile.o tambah.o -o output #with custom name