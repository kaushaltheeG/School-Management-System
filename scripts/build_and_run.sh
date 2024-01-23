if [ -d "dist" ]; then
    # Delete dist directory
    rm -rf dist
fi

# Compilation c files into object files
mkdir -p dist
gcc -c main.c -o dist/main.o
gcc -c utils/utils.c -o dist/utils.o
gcc -c sms_library/addStudent.c -o dist/addStudent.o


# Linking
gcc dist/main.o dist/addStudent.o dist/utils.o -o dist/main

# Execution
./dist/main