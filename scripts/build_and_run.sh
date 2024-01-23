# Compilation c files into object files
mkdir dist
gcc -c main.c -o dist/main.o
gcc -c sms_library/addStudent.c -o dist/addStudent.o
gcc -c utils/utils.c -o dist/utils.o


# Linking
gcc dist/main.o dist/addStudent.o dist/utils.o -o dist/main

# Execution
./dist/main