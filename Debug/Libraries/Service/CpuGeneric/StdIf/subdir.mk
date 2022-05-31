################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/Service/CpuGeneric/StdIf/IfxStdIf_DPipe.c \
../Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Pos.c \
../Libraries/Service/CpuGeneric/StdIf/IfxStdIf_PwmHl.c \
../Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Timer.c 

OBJS += \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_DPipe.o \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Pos.o \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_PwmHl.o \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Timer.o 

COMPILED_SRCS += \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_DPipe.src \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Pos.src \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_PwmHl.src \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Timer.src 

C_DEPS += \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_DPipe.d \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Pos.d \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_PwmHl.d \
./Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Timer.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/Service/CpuGeneric/StdIf/%.src: ../Libraries/Service/CpuGeneric/StdIf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -D__CPU__=tc37x -I"D:/SmartCar_22/src/AppSw/Tricore/App" -I"D:/SmartCar_22/src/AppSw/Tricore/Main" -I"D:/SmartCar_22/src/AppSw/Tricore/Driver" -I"D:/SmartCar_22/src/AppSw/Tricore/User" -I"D:/SmartCar_22/src/AppSw" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/PwmHl" -I"D:/SmartCar_22/Libraries/Infra/Platform/Tricore/Compilers" -I"D:/SmartCar_22/Libraries/Infra/Platform" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Iom/Iom" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/If/Ccu6If" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Iom/Driver" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Sent" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gpt12/IncrEnc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/I2c" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5s/Psi5s" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe/Comm" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe/Math" -I"D:/SmartCar_22/Libraries/Infra/Platform/Tricore" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Sent/Sent" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Msc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/Icu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Qspi" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Std" -I"D:/SmartCar_22/Libraries/Infra" -I"D:/SmartCar_22/Libraries/Infra/Ssw/TC37A" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Qspi/SpiMaster" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/_Lib" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dma/Dma" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gpt12/Std" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/If" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Msc/Msc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/_Lib/DataHandling" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Asclin/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Edsadc/Edsadc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Sent/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/Timer" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gpt12" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Convctrl/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Stm" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Edsadc" -I"D:/SmartCar_22/Libraries/Infra/Sfr/TC37A" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore" -I"D:/SmartCar_22/Libraries/Infra/Ssw/TC37A/Tricore" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5" -I"D:/SmartCar_22/Libraries/Infra/Sfr/TC37A/_Reg" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Flash" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Scu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Eray" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Hssl" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Msc/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Asclin" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Fce" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Smu/Smu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Port/Io" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Convctrl" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Geth/Eth" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tom" -I"D:/SmartCar_22/Libraries/Infra/Sfr" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/TimerWithTrigger" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/_PinMap" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/_Lib/InternalMux" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe/Bsp" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe/General" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Smu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Evadc/Adc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tim/Timer" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Port" -I"D:/SmartCar_22/Configurations" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Flash/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Cpu/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/Pwm" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Asclin/Lin" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Fce/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Port/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dts" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Src" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dma" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Stm/Timer" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/PwmHl" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/PwmHl" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Smu/Std" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Iom" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Evadc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Hssl/Hssl" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tim" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/SysSe/Time" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Geth" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Qspi/SpiSlave" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Atom" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Pms/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Pms" -I"D:/SmartCar_22/Libraries/iLLD" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Asclin/Spi" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Eray/Eray" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Hssl/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/I2c/I2c" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dts/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Can/Can" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Mtu/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Eray/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Cpu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Scu/Std" -I"D:/SmartCar_22/Libraries/Service" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Stm/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/Pwm" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5s" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Cpu/Irq" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/PwmBc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Cpu/Trap" -I"D:/SmartCar_22/Libraries/Infra/Ssw" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/StdIf" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Trig" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Mtu" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Edsadc/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Fce/Crc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5/Psi5" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tim/In" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Qspi/Std" -I"D:/SmartCar_22/Configurations/Debug" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Can/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Src/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dma/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Psi5s/Std" -I"D:/SmartCar_22/Libraries/Service/CpuGeneric/_Utilities" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/Timer" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Iom/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Asclin/Asc" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/I2c/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Ccu6/Std" -I"D:/SmartCar_22/Libraries" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Geth/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/Timer" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Can" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Dts/Dts" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/Evadc/Std" -I"D:/SmartCar_22/Libraries/iLLD/TC37A/Tricore/_Impl" --iso=99 --c++14 --language=+volatile --anachronisms --fp-model=3 --fp-model=c --fp-model=f --fp-model=l --fp-model=n --fp-model=r --fp-model=z -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -o "$@"  "$<"  -cs --dep-file=$(@:.src=.d) --misrac-version=2012 -N0 -Z0 -Y0 2>&1; sed -i -e '/ctc\\include/d' -e '/Libraries\\iLLD/d' -e '/Libraries\\Infra/d' -e 's/\(.*\)".*\\SmartCar_22\(\\.*\)"/\1\.\.\2/g' -e 's/\\/\//g' $(@:.src=.d) && \
	echo $(@:.src=.d) generated
	@echo 'Finished building: $<'
	@echo ' '

Libraries/Service/CpuGeneric/StdIf/%.o: ./Libraries/Service/CpuGeneric/StdIf/%.src
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


