################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/fraction.cpp \
../src/main.cpp \
../src/pvector.cpp \
../src/rpn.cpp 

OBJS += \
./src/fraction.o \
./src/main.o \
./src/pvector.o \
./src/rpn.o 

CPP_DEPS += \
./src/fraction.d \
./src/main.d \
./src/pvector.d \
./src/rpn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


