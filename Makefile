# mauricio ize @ 20feb2020

# make target=<file>

target = set

ccfiles = $(wildcard *.cc)
objfiles = $(patsubst %.cc, %.o, $(ccfiles))

cxx = g++
cxxflags = -std=c++14
# -Wc++11-extensions

.PHONY: all clean

all: $(objfiles) target execute

%.o : %.cc
	$(cxx) $(cxxflags) -c -o $@ $<

target:
	$(cxx) -o $(target).out $(target).o

execute:
	./$(target).out

clean:
	rm -f *~ *.bak *.o *.d *.out