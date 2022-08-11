src = $(wildcard *.c)
base = $(basename $(src))
target = $(addprefix $(bin)/, $(base))

build: $(bin) $(target)
        @true

$(bin)/%: %.c
        gcc -o $@ $<

$(bin):
        mkdir $(bin)