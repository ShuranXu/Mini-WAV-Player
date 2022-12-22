################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Audio/cs43l22.c \
../Audio/wav_player.c 

OBJS += \
./Audio/cs43l22.o \
./Audio/wav_player.o 

C_DEPS += \
./Audio/cs43l22.d \
./Audio/wav_player.d 


# Each subdirectory must supply rules for building sources it contributes
Audio/%.o Audio/%.su: ../Audio/%.c Audio/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../USB_HOST/App -I../USB_HOST/Target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -I../Audio -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Audio

clean-Audio:
	-$(RM) ./Audio/cs43l22.d ./Audio/cs43l22.o ./Audio/cs43l22.su ./Audio/wav_player.d ./Audio/wav_player.o ./Audio/wav_player.su

.PHONY: clean-Audio

