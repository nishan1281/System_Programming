cmake_minimum_required(VERSION 3.27)
project(C_plus_plus)

set(CMAKE_CXX_STANDARD 14)
# Set the path to the Boost installation
set(BOOST_ROOT "D:/ImportantLibrary/boost_1_86_0/boost_1_86_0")
# Find Boost libraries
find_package(Boost REQUIRED)

# Add Boost to include directories
include_directories(${Boost_INCLUDE_DIRS})

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
        DesignPattern/Solid_Design_Principle/CRTP/traditional/Shape.h
        DesignPattern/Solid_Design_Principle/CRTP/traditional/Circle.h
        DesignPattern/Solid_Design_Principle/CRTP/traditional/main.cpp
        DesignPattern/Solid_Design_Principle/CRTP/CRTP/Shape.h
        DesignPattern/Solid_Design_Principle/CRTP/CRTP/Circle.h
        DesignPattern/Solid_Design_Principle/CRTP/CRTP/main.cpp
        "Basics/47_regx/regx1.cpp"
        Basics/47_regx/regx2.cpp
        Basics/48_best_Practice/std_array_overCarray.cpp
        Modern_CPP/1_FilesAndStream/ostreamIterator.cpp
        Modern_CPP/1_FilesAndStream/flush.cpp
        Modern_CPP/1_FilesAndStream/istreamIterator.cpp
        Modern_CPP/1_FilesAndStream/binaryFile.cpp
        Modern_CPP/1_FilesAndStream/textDataInDat.cpp
        Modern_CPP/1_FilesAndStream/binaryRecord.cpp
        Modern_CPP/l_r_values.cpp
        Modern_CPP/section_5/constructor.cpp
        Modern_CPP/section_5/deligate.cpp
        Modern_CPP/section_5/CopyElision.cpp
        Modern_CPP/section_5/operatorConversion1.cpp
        CPP_Problems/Hello.cpp
        Modern_CPP/section_5/defaultDelete.cpp
        DesignPattern/Solid_Design_Principle/SingleResponsibilityPrinciple/include/Journal.h
        DesignPattern/Solid_Design_Principle/SingleResponsibilityPrinciple/src/Journal.cpp
        DesignPattern/Solid_Design_Principle/SingleResponsibilityPrinciple/src/main.cpp
        DesignPattern/Solid_Design_Principle/SingleResponsibilityPrinciple/src/PersistenceManager.cpp
        DesignPattern/Solid_Design_Principle/SingleResponsibilityPrinciple/include/PersistenceManager.h
        DesignPattern/Solid_Design_Principle/OpenClosedPrinciple/openClosed.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/Rectangle.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/processUtilityFunction.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/Rectangle.h
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/main.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/processUtilityFunction.h
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/Square.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Regular/Square.h
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Liskov/RectangleFactory.h
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Liskov/RectangleFactory.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Liskov/Rectangle.cpp
        DesignPattern/Solid_Design_Principle/LiskovSusbstitution/Liskov/main.cpp
        DesignPattern/Solid_Design_Principle/interfaceSegregation/interfaceSegregation.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/CreditCardPayment.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/CreditCardPayment.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/PayPalPayment.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/PayPalPayment.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/PaymentProcessor.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/PaymentProcessor.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withoutDIP/main.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/IPaymentMethod.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/CreditCardPayment.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/CreditCardPayment.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/PayPalPayment.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/PayPalPayment.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/PaymentProcessor.h
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/main.cpp
        DesignPattern/Solid_Design_Principle/DependencyInversion/withDIP/PaymentProcessor.cpp
        DesignPattern/Builder/html.cpp
        DesignPattern/Builder/builder.cpp
        DesignPattern/Builder/recursive/recursive.cpp
        Basics/49_const/const_1.cpp
        DesignPattern/Builder/recursive/recursive_smart_pointer.cpp
        Basics/9_enum/enum2.cpp
        DesignPattern/Builder/Car/header/Car.h
        DesignPattern/Builder/Car/header/CarBuilder.h
        DesignPattern/Builder/Car/header/SedanBuilder.h
        DesignPattern/Builder/Car/header/SUVBuilder.h
        DesignPattern/Builder/Car/src/SedanBuilder.cpp
        DesignPattern/Builder/Car/src/SUVBuilder.cpp
        DesignPattern/Builder/Car/src/Director.cpp
        DesignPattern/Builder/Car/header/Director.h
        DesignPattern/Builder/Car/main.cpp
        DesignPattern/Builder/Car/src/Car.cpp
        DesignPattern/functionalProgramming/choosingFunction@Runtime/functionalTry.cpp
        DesignPattern/Builder/fluentBuilder/Engine.h
        DesignPattern/Builder/fluentBuilder/Wheel.h
        DesignPattern/Builder/fluentBuilder/Car.h
        DesignPattern/Builder/fluentBuilder/Builder.h
        DesignPattern/functionalProgramming/methodChaining/methodChaining.cpp
        DesignPattern/Builder/fluentBuilder/main.cpp
        Basics/50_pair/pari.cpp
        "STL/Template Function/TemplateFunction.cpp"
)


target_link_libraries(C_plus_plus DesignPattern/CRTP/CRTP/main Boost::boost)
