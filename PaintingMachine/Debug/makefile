################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXTI/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/DCMOTOR/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
PaintingMachine.lss \

FLASH_IMAGE += \
PaintingMachine.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: PaintingMachine.elf secondary-outputs

# Tool invocations
PaintingMachine.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,PaintingMachine.map -mmcu=atmega32 -o "PaintingMachine.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

PaintingMachine.lss: PaintingMachine.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S PaintingMachine.elf  >"PaintingMachine.lss"
	@echo 'Finished building: $@'
	@echo ' '

PaintingMachine.hex: PaintingMachine.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex PaintingMachine.elf  "PaintingMachine.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: PaintingMachine.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 PaintingMachine.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: PaintingMachine.elf
	@echo 'Invoking: AVRDude'
	E:\Users\essam\Download\Compressed\IMT_SDK_Win_64\IMT_SDK_Win_64\WinAVR\bin\avrdude -pm32 -cusbasp -Uflash:w:PaintingMachine.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) PaintingMachine.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
