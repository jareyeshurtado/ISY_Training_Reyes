CXXFLAGS = -Wall -Wextra
LDFLAGS = -lcppunit

wstring: wstring.o 
	$(LINK.cc) $^ -o $@ $(CXXFLAGS)

complex_string: complex_string.o complex_string.h 
	$(LINK.cc) $^ -o $@ $(CXXFLAGS) $(LDFLAGS)

clean:
	rm -rf *.o program

