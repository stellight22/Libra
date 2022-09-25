output: Post.o Area.o BlogPart4.o
	g++ -std=c++11 Post.o Area.o BlogPart4.o -o blog4

Post.o: Post.cpp Post.h
	g++ -std=c++11 -c Post.cpp

Area.o: Area.cpp Area.h
	g++ -std=c++11 -c Area.cpp

BlogPart4.o: BlogPart4.cpp
	g++ -std=c++11 -c BlogPart4.cpp

clean:
	rm *.o blog4
	