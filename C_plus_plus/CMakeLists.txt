cmake_minimum_required(VERSION 3.27)
project(C_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basics/24_OOP_Function)
include_directories(Basics/27_composition)
include_directories(Basics/31_cMake)
include_directories(Basics/37_luna/luacpp/Source)
include_directories(Basics/37_luna/luacpp/Source/Engine)
include_directories(Basics/37_luna/luacpp/Source/Registry)
include_directories(CPP_Problems/assignment_classes_and_strings)

add_executable(C_plus_plus
        Basics/10_error/error.cpp
        Basics/11_array/2dArray.cpp
        Basics/12_loop/doWhile.cpp
        Basics/12_loop/loop.cpp
        Basics/13_STL_array/swap.cpp
        Basics/14_vector/emplaceBack.cpp
        Basics/14_vector/pushBack.cpp
        Basics/14_vector/vector.cpp
        Basics/15_function/function.cpp
        Basics/16_namespace/namespace.cpp
        Basics/17_sets/sets.cpp
        Basics/18_tupples/tupple.cpp
        Basics/19_map/hashMap.cpp
        Basics/19_map/map.cpp
        Basics/19_map/mapCharno.cpp
        Basics/1_InitialBasic/main.cpp
        Basics/20_sort/sort.cpp
        Basics/21_lamda/lamda.cpp
        Basics/22_defineMacro/defineMacro.cpp
        Basics/23_OOP/constructor.cpp
        Basics/23_OOP/CopyConstructor.cpp
        Basics/23_OOP/objectInOtherObject.cpp
        Basics/23_OOP/opp.cpp
        Basics/24_OOP_Function/Book.cpp
        Basics/24_OOP_Function/Book.hpp
        Basics/24_OOP_Function/main.cpp
        Basics/25_inheritance/inheritance.cpp
        Basics/26_constant/const.cpp
        Basics/26_constant/goodPractice.cpp
        Basics/27_composition/Birthday.cpp
        Basics/27_composition/Birthday.h
        Basics/27_composition/main.cpp
        Basics/27_composition/Person.cpp
        Basics/27_composition/Person.h
        Basics/28_friendFunction/friendFunction.cpp
        Basics/29_readingFile/reading.cpp
        Basics/29_readingFile/writingFile.cpp
        Basics/2_variableDataType/variableDataType.cpp
        Basics/30_operatorOverloading/operatorOverloading.cpp
        Basics/31_cMake/main.cpp
        Basics/31_cMake/Vector.cpp
        Basics/31_cMake/Vector.h
        Basics/32_struct/struct.cpp
        Basics/33_template/template.cpp
        Basics/34_pointerReferencing/pointer.cpp
        Basics/35_smartPointer/example.cpp
        Basics/35_smartPointer/smartPointer.cpp
        Basics/36__thread/main.cpp
        Basics/36_thread/threads.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaState.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaState.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTBoolean.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTBoolean.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTNil.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTNil.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTNumber.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTNumber.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTString.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTString.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTTable.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTTable.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaTUserData.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaTUserData.hpp
        Basics/37_luna/luacpp/Source/Engine/LuaType.cpp
        Basics/37_luna/luacpp/Source/Engine/LuaType.hpp
        Basics/37_luna/luacpp/Source/Example/example_helloworld.cpp
        Basics/37_luna/luacpp/Source/Example/example_LuaLibrary.cpp
        Basics/37_luna/luacpp/Source/Example/example_LuaMetaObject.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaCFunction.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaCFunction.hpp
        Basics/37_luna/luacpp/Source/Registry/LuaCodeSnippet.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaCodeSnippet.hpp
        Basics/37_luna/luacpp/Source/Registry/LuaCompiler.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaCompiler.hpp
        Basics/37_luna/luacpp/Source/Registry/LuaLibrary.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaLibrary.hpp
        Basics/37_luna/luacpp/Source/Registry/LuaRegistry.cpp
        Basics/37_luna/luacpp/Source/Registry/LuaRegistry.hpp
        Basics/37_luna/luacpp/Source/UnitTest/TestLuaCompiler.cpp
        Basics/37_luna/luacpp/Source/UnitTest/TestLuaContext.cpp
        Basics/37_luna/luacpp/Source/UnitTest/TestLuaMetaObject.cpp
        Basics/37_luna/luacpp/Source/UnitTest/TestLuaTypes.cpp
        Basics/37_luna/luacpp/Source/Lua.hpp
        Basics/37_luna/luacpp/Source/LuaContext.cpp
        Basics/37_luna/luacpp/Source/LuaContext.hpp
        Basics/37_luna/luacpp/Source/LuaCpp.hpp
        Basics/37_luna/luacpp/Source/LuaMetaObject.cpp
        Basics/37_luna/luacpp/Source/LuaMetaObject.hpp
        Basics/37_luna/luacpp/Source/LuaVersion.cpp
        Basics/37_luna/luacpp/Source/LuaVersion.hpp
        Basics/38_reference/carComparision.cpp
        Basics/38_reference/reference.cpp
        Basics/39_overloadedOperator/overloadedOperator.cpp
        Basics/39_ssStream/osStream.cpp
        Basics/39_ssStream/ssStream.cpp
        Basics/3_inputOutput/inputOutput.cpp
        Basics/40_dynamicCasting/casting.cpp
        Basics/40_dynamicCasting/onlyCasting.cpp
        Basics/41_singleTone/example.cpp
        Basics/41_singleTone/singleTone.cpp
        Basics/42_iterator/iterator.cpp
        Basics/43_iterator/iterator.cpp
        Basics/33_template/generic.cpp
        "Basics/45. FunctionPointer/funcPointer.cpp"
        "Basics/45. FunctionPointer/passingFuncPointer.cpp"
        Basics/46_String/npos.cpp
        Basics/4_math/math.cpp
        Basics/5_string/string.cpp
        Basics/6_case/case.cpp
        Basics/7_recursion/recursion.cpp
        Basics/8_random/random.cpp
        Basics/9_enum/enum.cpp
        Basics/9_enum/enum1.cpp
        Basics/HelloWorld/main.cpp
        Basics/try/try.cpp
        CPP_Problems/assignment_classes_and_strings/url.cc
        CPP_Problems/assignment_classes_and_strings/url.h
        CPP_Problems/assignment_classes_and_strings/url_test.cc
        Modern_CPP/1_FilesAndStream/ifstream.cpp
        Basics/44_optional/optional.cpp
        DesignPattern/CRTP/traditional/Shape.h
        DesignPattern/CRTP/traditional/Circle.h
        DesignPattern/CRTP/traditional/main.cpp
        DesignPattern/CRTP/CRTP/Shape.h
        DesignPattern/CRTP/CRTP/Circle.h
        DesignPattern/CRTP/CRTP/main.cpp
        "Basics/47_regx/regx1.cpp"
        Basics/47_regx/regx2.cpp
        Basics/48_best_Practice/std_array_overCarray.cpp)
