################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/tic-tac-toe\ 0.2.cpp 

CPP_DEPS += \
./src/tic-tac-toe\ 0.2.d 

OBJS += \
./src/tic-tac-toe\ 0.2.o 


# Each subdirectory must supply rules for building sources it contributes
src/tic-tac-toe\ 0.2.o: ../src/tic-tac-toe\ 0.2.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/tic-tac-toe 0.2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/tic-tac-toe\ 0.2.d ./src/tic-tac-toe\ 0.2.o

.PHONY: clean-src

