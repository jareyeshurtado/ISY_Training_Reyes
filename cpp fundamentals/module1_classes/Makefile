CXXFLAGS = -Wall -Wextra
LDFLAGS = -lcppunit

complex: complex.o complex.h 
	$(LINK.cc) $^ -o $@ $(CXXFLAGS) $(LDFLAGS)
	

assert: assert.o 
	$(LINK.cc) $^ -o $@

clean:
	rm -rf *.o program

