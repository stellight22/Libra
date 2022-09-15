cmake_minimum_required(VERSION 3.23)
project(CPP_CLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(CLion main.cpp)


add_executable(NoArray Module1/NoArray.cpp)
add_executable(SimpleArray Module1/SimpleArray.cpp)
add_executable(SimpleArrayVer2 Module1/SimpleArrayVer2.cpp)
add_executable(FunctionsArrays Module1/FunctionsArrays.cpp)
add_executable(Search Module1/Search.cpp)
add_executable(Sorting Module1/Sorting.cpp)
add_executable(CommonErrorsArrays Module1/CommonErrorsArrays.cpp)

add_executable(MotivationStructure Module2/MotivationStructure.cpp)
add_executable(Structures Module2/Structures.cpp)
add_executable(StructurePractice Module2/StructurePractice.cpp)
add_executable(CommonErrorsStructs Module2/CommonErrorsStructs.cpp)
add_executable(MotivationClasses Module2/MotivationClasses.cpp)
add_executable(BasicClass Module2/BasicClass.cpp)
add_executable(ClassesPractice Module2/ClassesPractice.cpp)
add_executable(OOPClasses Module2/OOPClasses.cpp)
add_executable(StudentRegStart Module2/StudentRegStart.cpp)
add_executable(StringValidation Module2/StringValidation.cpp)

add_executable(ClassConstructors Module3/ClassConstructors.cpp)
add_executable(ClassMemberVariable Module3/ClassMemberVariable.cpp)
add_executable(ConstParam Module3/ConstParam.cpp)
add_executable(InlineFunc Module3/InlineFunc.cpp)
add_executable(Constructors Module3/Constructors.cpp)
add_executable(StaticMembers Module3/StaticMembers.cpp)
add_executable(Vector Module3/Vector.cpp)
add_executable(Bubby Module3/Bubby.cpp)
add_executable(StudentReg2 Module3/StudentReg2.cpp)

add_executable(OperatorOverloading Module4/operatorOverloading.cpp)
add_executable(OperatorOverloading1 Module4/operatorOverloading1.cpp)
add_executable(NotMemberFunctions Module4/NotMemberFunctions.cpp)
add_executable(MemberFunctions Module4/MemberFunctions.cpp)
add_executable(FriendsExample Module4/FriendsExample.cpp)
add_executable(FriendClass Module4/FriendClass.cpp)
add_executable(FriendsExample2 Module4/FriendsExample2.cpp)
add_executable(PrePostfixExample Module4/PrePostfixExample.cpp)
add_executable(ArrayExample Module4/ArrayExample.cpp)









