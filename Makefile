build:
	# PATH: not sure why
	PATH="/opt/homebrew/opt/arm-none-eabi-gcc@8/bin:$$PATH" qmk compile -kb mnapoli/matrx -km default

flash: build
	cp ../../../mnapoli_matrx_default.uf2 /Volumes/RPI-RP2/
