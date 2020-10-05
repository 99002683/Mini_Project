all: all.out
all.out: student.o getQualification.o studentdb.o student_test.o studentdb-test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
studentdb-test.o: studentdb-test.cpp student.h getQualification.h studentdb.h 
	g++ $< -c
student_test.o: student_test.cpp student.h getQualification.h
	g++ $< -c
studentdb.o: studentdb.cpp studentdb.h getQualification.h student.h
	g++ $< -c
getQualification.o: getQualification.cpp getQualification.h student.h
	g++ $< -c
student.o: student.cpp student.h
	g++ $< -c
clean:
	rm -rf *.o *.out

