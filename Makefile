bin/Reglafalsa 	: src/reglafalsa.cpp 
	c++ src/reglafalsa.cpp -I include -o bin/Reglafalsa -lcurses


	
run : bin/Reglafalsa
	./bin/Reglafalsa
	