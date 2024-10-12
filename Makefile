SRCS = main.c $(wildcard vec/*.c)
HDRS = $(wildcard vec/*.h)
OBJS := $(SRCS:.c=.o)
BUILDDIR ?= build
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

main: $(OBJS)
	gcc $^ -o $(BUILDDIR)/$@

$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@

clean:
	@rm -rf $(BUILDDIR)