#include <iostream>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>

class complex {
private:
  int real;
  int imaginary;

public:
  complex (int real, int imaginary); //normal
  complex(const complex& c); //copy constructor
  complex(); //default

  int getReal() const;
  int getImaginary() const;
  void setReal(int);
  void setImaginary(int);

  complex operator+(const complex& c) const;
  bool operator==(const complex& c) const;
};


class ComplexNumberTest : public CppUnit::TestCase { 
private: 
   complex *m_10_1, *m_1_1, *m_11_2;
public: 

  //ComplexNumberTest( std::string name ) : CppUnit::TestCase( name ) {}
  
  void runTest() {
    CPPUNIT_ASSERT( complex (10, 1) == complex (10, 1) );
    CPPUNIT_ASSERT( !(complex (1, 1) == complex (2, 2)) );
  }
  void setUp()
  {
    m_10_1 = new complex( 10, 1 );
    m_1_1 = new complex( 1, 1 );
    m_11_2 = new complex( 11, 2 );  
  }
  
  void tearDown() 
  {
    delete m_10_1;
    delete m_1_1;
    delete m_11_2;
  }

 void testEquality()
  {
    CPPUNIT_ASSERT( *m_10_1 == *m_10_1 );
    CPPUNIT_ASSERT( !(*m_10_1 == *m_11_2) );
  }

  void testAddition()
  {
    CPPUNIT_ASSERT( *m_10_1 + *m_1_1 == *m_11_2 );
  }
  
};
