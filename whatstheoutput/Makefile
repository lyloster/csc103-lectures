SOURCES := $(wildcard *.cpp)
TARGETS := $(SOURCES:.cpp=)

COMMON   := -O2 -Wall -Wformat=2 -march=native
CFLAGS   := $(CFLAGS) $(COMMON)
CXXFLAGS := $(CXXFLAGS) $(COMMON)
CC       := gcc
CXX      := g++
LD       := $(CXX)   # probably want $(CXX) for cpp source
LDFLAGS  := $(LDFLAGS)  # -L/path/to/libs/
LDADD    :=  # -lrt
INCLUDE  :=  # -I../path/to/headers/
DEFS     :=  # -DLINUX

.PHONY : all
all : $(TARGETS)

# {{{ for debugging
DBGFLAGS := -g
debug : CFLAGS += $(DBGFLAGS)
debug : CXXFLAGS += $(DBGFLAGS)
debug : all
.PHONY : debug
# }}}

$(TARGETS) : % : %.cpp
	$(LD) $(LDFLAGS) -o $@ $^ $(LDADD)

.PHONY : clean
clean :
	rm -f $(TARGETS)

# vim:ft=make:foldmethod=marker:foldmarker={{{,}}}

