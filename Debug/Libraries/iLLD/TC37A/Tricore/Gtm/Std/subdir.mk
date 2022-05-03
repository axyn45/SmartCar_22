################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Atom.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Cmu.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dpll.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dtm.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Psm.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Spe.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tbu.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tim.c \
../Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tom.c 

OBJS += \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Atom.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Cmu.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dpll.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dtm.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Psm.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Spe.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tbu.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tim.o \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tom.o 

COMPILED_SRCS += \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Atom.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Cmu.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dpll.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dtm.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Psm.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Spe.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tbu.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tim.src \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tom.src 

C_DEPS += \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Atom.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Cmu.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dpll.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Dtm.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Psm.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Spe.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tbu.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tim.d \
./Libraries/iLLD/TC37A/Tricore/Gtm/Std/IfxGtm_Tom.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC37A/Tricore/Gtm/Std/%.src: ../Libraries/iLLD/TC37A/Tricore/Gtm/Std/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -D__CPU__=tc37x -I"E:/ads_workspace/CarOpenCycle/src/AppSw/Tricore/App" -I"E:/ads_workspace/CarOpenCycle/src/AppSw/Tricore/Main" -I"E:/ads_workspace/CarOpenCycle/src/AppSw/Tricore/Driver" -I"E:/ads_workspace/CarOpenCycle/src/AppSw/Tricore/User" -I"E:/ads_workspace/CarOpenCycle/src/AppSw" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/PwmHl" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Platform/Tricore/Compilers" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Platform" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Iom/Iom" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/If/Ccu6If" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Iom/Driver" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Sent" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gpt12/IncrEnc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/I2c" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5s/Psi5s" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe/Comm" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe/Math" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Platform/Tricore" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Sent/Sent" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Msc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/Icu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Qspi" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Ssw/TC37A" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Qspi/SpiMaster" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/_Lib" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dma/Dma" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gpt12/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/If" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Msc/Msc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/_Lib/DataHandling" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Asclin/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Edsadc/Edsadc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Sent/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/Timer" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gpt12" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Convctrl/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Stm" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Edsadc" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Sfr/TC37A" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Ssw/TC37A/Tricore" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Sfr/TC37A/_Reg" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Flash" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Scu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Eray" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Hssl" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Msc/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Asclin" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Fce" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Smu/Smu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Port/Io" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Convctrl" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Geth/Eth" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tom" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Sfr" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/TimerWithTrigger" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/_PinMap" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/_Lib/InternalMux" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe/Bsp" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe/General" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Smu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Evadc/Adc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tim/Timer" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Port" -I"E:/ads_workspace/CarOpenCycle/Configurations" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Flash/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Cpu/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/Pwm" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Asclin/Lin" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Fce/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Port/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dts" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Src" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dma" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Stm/Timer" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/PwmHl" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/PwmHl" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Smu/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Iom" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Evadc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Hssl/Hssl" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tim" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/SysSe/Time" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Geth" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Qspi/SpiSlave" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Atom" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Pms/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Pms" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Asclin/Spi" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Eray/Eray" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Hssl/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/I2c/I2c" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dts/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Can/Can" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Mtu/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Eray/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Cpu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Scu/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Stm/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/Pwm" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5s" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Cpu/Irq" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/PwmBc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Cpu/Trap" -I"E:/ads_workspace/CarOpenCycle/Libraries/Infra/Ssw" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/StdIf" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Trig" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Mtu" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Edsadc/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Fce/Crc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5/Psi5" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tim/In" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Qspi/Std" -I"E:/ads_workspace/CarOpenCycle/Configurations/Debug" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Can/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Src/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dma/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Psi5s/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/Service/CpuGeneric/_Utilities" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Atom/Timer" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Iom/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Asclin/Asc" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/I2c/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Ccu6/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Geth/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Gtm/Tom/Timer" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Can" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Dts/Dts" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/Evadc/Std" -I"E:/ads_workspace/CarOpenCycle/Libraries/iLLD/TC37A/Tricore/_Impl" --iso=99 --c++14 --language=+volatile --anachronisms --fp-model=3 --fp-model=c --fp-model=f --fp-model=l --fp-model=n --fp-model=r --fp-model=z -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -o "$@"  "$<"  -cs --dep-file=$(@:.src=.d) --misrac-version=2012 -N0 -Z0 -Y0 2>&1; sed -i -e '/ctc\\include/d' -e '/Libraries\\iLLD/d' -e '/Libraries\\Infra/d' -e 's/\(.*\)".*\\CarOpenCycle\(\\.*\)"/\1\.\.\2/g' -e 's/\\/\//g' $(@:.src=.d) && \
	echo $(@:.src=.d) generated
	@echo 'Finished building: $<'
	@echo ' '

Libraries/iLLD/TC37A/Tricore/Gtm/Std/%.o: ./Libraries/iLLD/TC37A/Tricore/Gtm/Std/%.src
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


