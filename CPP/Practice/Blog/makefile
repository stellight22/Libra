output: Post.o Area.o BlogPart4.o
	g++ -std=c++11 Post.o Area.o BlogPart4.o -o eggy

Post.o: Post.cpp Post.h
	g++ -c Post.cpp

Area.o: Area.cpp Area.o
	g++ -c Area.cpp

BlogPart4.o: BlogPart4.cpp
	g++ -c BlogPart4.cpp

clean:
	del .\*.o .\eggy.exe
	