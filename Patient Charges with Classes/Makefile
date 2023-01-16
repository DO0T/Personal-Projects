COMPILER = g++
OPTIONS = -Wall
PROGRAM = areaCalc.out

all: $(PROGRAM)
	g++ -Wall hospitalCharges.cpp Patient.cpp

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): hospitalCharges.cpp Patient.cpp
	$(COMPILER) $(OPTIONS) hospitalCharges.cpp Patient.cpp -o $(PROGRAM)

clean:
	rm *.out
