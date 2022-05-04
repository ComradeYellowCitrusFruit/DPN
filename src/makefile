SRCDIR=../src
INCDIR=../include
OBJDIR=../bin
Target=../libdpnc.a

ifndef Optimization
Optimization=-O2
endif

CC=gcc

ifdef Debug
CFlags = -I$(INCDIR) -Wall -ansi -Og -g
else
CFlags = -I$(INCDIR) -Wall -ansi $(Optimization)
endif

$(Target): $(OBJDIR)/*.o
	ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c 