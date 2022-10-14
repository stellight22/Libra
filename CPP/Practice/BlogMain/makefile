output:  User.o Post.o Area.o BlogPart6.o
	g++ -std=c++11 User.o Post.o Area.o BlogPart6.o -o eggy

User.o: User.cpp User.h
	g++ -c User.cpp

Post.o: Post.cpp Post.h
	g++ -c Post.cpp

Area.o: Area.cpp Area.h
	g++ -c Area.cpp

BlogPart6.o: BlogPart6.cpp
	g++ -c BlogPart6.cpp

clean:
	del *.o eggy
	