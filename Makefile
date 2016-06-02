
APP_NAME=vul
OBJ_NAME=vul.o

$(APP_NAME):$(OBJ_NAME)
	gcc $^ -o $(APP_NAME)

%.o:%.c
	gcc -c -g -fno-stack-protector $^ -o $@

clean:
	rm *.o $(APP_NAME)
