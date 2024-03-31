build:
	# PATH: not sure why
	PATH="/opt/homebrew/opt/arm-none-eabi-gcc@8/bin:$$PATH" qmk compile -kb mnapoli/matrix1 -km default

flash: build
	cp ../../../mnapoli_matrix1_default.uf2 /Volumes/RPI-RP2/
