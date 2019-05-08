# libcodec2_test
This is a test program for libcodec2

## How to Use
### I. Build libcodec2
1. Add "codec2" folder to the base folder (i.e. folder containing this readme file)
2. `cd codec2`
3. `mkdir build_linux`
4. `cd build_linux`
5. `cmake ..`
6. `make`
7. Go back to the base folder

### II. Compile the program
1. `g++ codec2test.c -o codec2test`

### III. Run the test program
1. `./codec2test`
2. Check the generated files. You can play it by executing: 
   `play -t raw -r 8000 -e signed-integer -b 16 hts1a.raw`

