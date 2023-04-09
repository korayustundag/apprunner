CPP = g++
CPPFLAGS = -O3
build:
	mkdir -p bin
	$(CPP) $(CPPFLAGS) main.cpp -o bin/run
x86:
	mkdir -p bin
	mkdir -p bin/x86
	$(CPP) $(CPPFLAGS) -m32 main.cpp -o bin/x86/run
amd64:
	mkdir -p bin
	mkdir -p bin/amd64
	$(CPP) $(CPPFLAGS) -m64 main.cpp -o bin/amd64/run
clean:
	if [ -d "bin" ]; then rm -Rf bin; fi
