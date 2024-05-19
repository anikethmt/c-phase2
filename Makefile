CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = calculateaverage2.c displaystudents2.c fileoperations2.c freestudents2.c functions2.h main2.c

OBJS = $(SRCS:.c=.o)

TARGET = myprogram

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
