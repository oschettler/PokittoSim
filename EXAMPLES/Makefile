#

POKITTO_SIM = \
	../POKITTO_SIM/Pokitto_joystick.o \
	../POKITTO_SIM/PokittoClock.o \
	../POKITTO_SIM/PokittoSimButtons.o \
	../POKITTO_SIM/PokittoSimCore.o \
	../POKITTO_SIM/PokittoSimSound.o \
	../POKITTO_SIM/PokittoSimulator.o \
	../POKITTO_SIM/SimSound.o \
	../POKITTO_SIM/WriteWav.o

POKITTO_CORE = \
	../POKITTO_CORE/PokittoCore.o \
	../POKITTO_CORE/PokittoLogos.o \
	../POKITTO_CORE/PokittoSound.o \
	../POKITTO_CORE/PokittoBattery.o \
	../POKITTO_CORE/PokittoButtons.o \
	../POKITTO_CORE/PokittoDisplay.o

POKITTO_LIBS = \
	../POKITTO_LIBS/FileIO/FileIO_SIM.o \
	../POKITTO_LIBS/Synth/Synth_oscfuncs.o \
	../POKITTO_LIBS/Synth/Synth_wavefuncs.o \
	../POKITTO_LIBS/Synth/Synth_envfuncs.o \
	../POKITTO_LIBS/Synth/Synth_helpers.o \
	../POKITTO_LIBS/Synth/Synth_mixfuncs.o

CFLAGS = -DPOK_SIM \
	-Wno-c++11-compat-deprecated-writable-strings \
	-I.. \
	-I../POKITTO_CORE \
	-I../POKITTO_LIBS/FileIO \
	-I../POKITTO_LIBS/ImageFormat \
	-I../POKITTO_LIBS/Synth \
	-I../POKITTO_SIM \
	-I../POKITTO_SIM/mbed_sim \
	-I../POKITTO_SIM/tinydir

hello: Hello.o $(POKITTO_SIM) $(POKITTO_CORE) $(POKITTO_LIBS)
	g++ $(LDFLAGS) -o $@ $^ -L/usr/local/Cellar/sdl2/2.0.7/lib -lSDL2

.cpp.o:
	$(COMPILE.cpp) $(CFLAGS) -o $@ $<
