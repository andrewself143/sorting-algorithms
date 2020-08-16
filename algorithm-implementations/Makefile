main: main.o insertion_sort.o merge_sort.o shell_sort1.o shell_sort2.o shell_sort3.o shell_sort4.o hybrid_sort1.o hybrid_sort2.o hybrid_sort3.o
	g++ -std=c++11 main.o insertion_sort.o merge_sort.o shell_sort1.o shell_sort2.o shell_sort3.o shell_sort4.o hybrid_sort1.o hybrid_sort2.o hybrid_sort3.o -o main

main.o: main.cpp sorting.h
	g++ -std=c++11 -c main.cpp

insertion_sort.o: insertion_sort.cpp sorting.h
	g++ -std=c++11 -c insertion_sort.cpp

merge_sort.o: merge_sort.cpp sorting.h
	g++ -std=c++11 -c merge_sort.cpp

shell_sort1.o: shell_sort1.cpp sorting.h
	g++ -std=c++11 -c shell_sort1.cpp

shell_sort2.o: shell_sort2.cpp sorting.h
	g++ -std=c++11 -c shell_sort2.cpp

shell_sort3.o: shell_sort3.cpp sorting.h
	g++ -std=c++11 -c shell_sort3.cpp

shell_sort4.o: shell_sort4.cpp sorting.h
	g++ -std=c++11 -c shell_sort4.cpp

hybrid_sort1.o: hybrid_sort1.cpp sorting.h
	g++ -std=c++11 -c hybrid_sort1.cpp

hybrid_sort2.o: hybrid_sort2.cpp sorting.h
	g++ -std=c++11 -c hybrid_sort2.cpp

hybrid_sort3.o: hybrid_sort3.cpp sorting.h
	g++ -std=c++11 -c hybrid_sort3.cpp

clean:
	rm main main.o insertion_sort.o merge_sort.o shell_sort1.o shell_sort2.o shell_sort3.o shell_sort4.o hybrid_sort1.o hybrid_sort2.o hybrid_sort3.o
