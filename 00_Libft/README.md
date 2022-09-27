<h1 align="center">Libft</h1>

<div align="center">Your very first own library</div>

<br/>

### [Summary](#Summary-1)

### [Mandatory part](#Mandatory-part-1)

- [size_t 자료형](#size_t-자료형)
- [void *를 unsigned char *로 캐스팅하는 이유](#void-를-unsigned-char-로-캐스팅하는-이유)
- [static 함수를 사용하는 이유](#static-함수를-사용하는-이유)
- [댕글링 포인터 역참조 방지](#댕글링-포인터-역참조-방지)
- [write() 시스템 콜의 partial write 이슈](#write-시스템-콜의-partial-write-이슈)
- [make -j 옵션](#make--j-옵션)

### [Bonus part](#Bonus-part-1)

- [연결 리스트에서 이중 포인터를 사용하는 이유](#연결-리스트에서-이중-포인터를-사용하는-이유)
- [bonus 규칙의 불필요한 relink 방지](#bonus-규칙의-relink-방지)

<br/>

# Summary

> This project is about coding a C library.  
> It will contain a lot of general purpose functions your programs will rely upon.
> 
> Version: 15

| Program name      | libft.a                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------- |
| **Turn in files** | Makefile, libft.h, ft_*.c                                                                         |
| **Makefile**      | NAME, all, clean, fclean, re                                                                      |
| **Description**   | Write your own library:<br/>a collection of functions that will be a useful tool for your cursus. |

<br/>

<h1 align="center">Mandatory Part</h1>

## size_t 자료형

```c
// C 표준 라이브러리 중 하나인 glibc v2.36에 선언된 size_t
typedef __SIZE_TYPE__ size_t;
```

`size_t`는 해당 시스템에서 최대 크기의 부호 없는 정수 자료형을 나타낸다.  
위 선언에서 `__SIZE_TYPE__`은 시스템에 따라 `unsigned int` 또는 `unsigned long` 등으로 정의된 매크로 상수이다.  
`size_t` 자료형은 표준 라이브러리에서 길이, 개수, 크기 등을 나타낼 때 기본적인 정수 자료형을 대신하여 사용된다.

## void *를 unsigned char *로 캐스팅하는 이유

> [`ft_memset()`](./src/string/ft_memset.c) [`ft_memcpy()`](./src/string/ft_memcpy.c) [`ft_memmove()`](./src/string/ft_memmove.c) [`ft_memchr()`](./src/string/ft_memchr.c) [`ft_memcmp()`](./src/string/ft_memcmp.c)

`void *`를 역참조하는 것은 자료형이 정해지지 않았기 때문에 불가능하며,  
`void *`의 직접적인 연산은 컴파일러에 따라 가능 여부가 달라지므로 호환성을 고려한다면 피하는 것이 바람직하다.  
위의 함수들은 메모리에 최소 단위인 1바이트 단위로 접근하여 연산을 수행하기 때문에 `char *` 또는 `unsigned char *`로 캐스팅해야 하는데,  
이 중에서도 1바이트를 구성하는 비트 중 다른 용도로 사용되는 비트 없이 모든 비트를 온전하게 확인할 수 있는 `unsigned char` 자료형을 이용한다.

## static 함수를 사용하는 이유

`static` 키워드를 사용하여 정의한 함수는 해당 소스 파일 내에서만 호출할 수 있다.  
이를 잘 활용하면 명시적 선언을 통한 가독성 향상과 더불어 여러 개의 소스 파일로 구성된 프로그램을 만들 때 함수명 중복으로 인한 충돌을 방지할 수 있다.

## 댕글링 포인터 역참조 방지

> [`ft_free()`](./src/malloc/ft_free.c)

*댕글링 포인터*란 이미 할당이 해제된 메모리와 같이 유효하지 않은 객체를 가리키는 포인터를 의미한다.  
댕글링 포인터를 역참조하는 경우 엉뚱한 데이터에 접근하게 될 가능성이 있기 때문에,  
이를 방지하기 위해 `free()` 함수를 통해 메모리 할당을 해제한 뒤 해당 포인터를 `NULL` 포인터로 초기화한다.

## write() 시스템 콜의 partial write 이슈

> [`ft_putstr_fd()`](./src/stdio/ft_putstr_fd.c)

일반적인 파일의 경우 `write()` 시스템 콜에서 partial write가 발생할 가능성이 매우 낮기 때문에,  
굳이 루프를 통해 반복적으로 `write()`를 호출하지 않아도 쓰기 작업을 안전하게 보장받을 수 있다.  
하지만 파이프나 소켓 같은 특수한 파일들은 상황에 따라서 partial write가 발생할 수 있고, 이러한 상황까지 고려할 경우에는 루프를 활용해야 한다.

## make -j 옵션

`make`의 `-j` 옵션은 멀티 스레드를 활용하여 동시에 여러 개의 명령을 수행하도록 지정하는 병렬 실행 옵션이다.  
`re` 규칙을 `re: fclean all`로 작성할 경우 단일 스레드에서 실행할 때는 문제가 없지만,  
`make re -j 2` 와 같이 멀티 스레드로 실행하게 되면 `fclean`과 `all` 규칙이 동시에 실행되어 의도한 바와 다르게 동작한다.  
따라서 아래의 코드 블록처럼 작업 순서를 명확하게 지정해 주는 것이 좋다.

```makefile
re:
    make fclean
    make all
```

<br/>

<h1 align="center">Bonus Part</h1>

## 연결 리스트에서 이중 포인터를 사용하는 이유

> [`ft_lstadd_front()`](./src/list/ft_lstadd_front.c) [`ft_lstadd_back()`](./src/list/ft_lstadd_back.c) [`ft_lstclear()`](./src/list/ft_lstclear.c)

위의 세 함수에는 다른 연결 리스트 관련 함수들과 달리 `*lst`의 값, 즉 연결 리스트의 head 주소를 변경하는 코드가 존재한다.  
호출한 함수에서 변수의 원래 값을 변경하고자 할 때 변수의 주소값을 인자로 전달한 뒤 호출한 함수 내부에서 포인터를 이용하는 것과 마찬가지로,  
포인터 변수의 원래 값을 변경하기 위해 이중 포인터를 활용한다.

## bonus 규칙의 불필요한 relink 방지

> [`Makefile`](./Makefile)

*불필요한 relink*란 `make`를 통한 link 과정에서 dependency가 변경되지 않았음에도 불구하고 target이 갱신되는 것을 말한다.  
`make` 시 prerequisite은 변경 여부를 자동으로 확인해 주기 때문에 신경 쓸 필요가 없지만,  
recipe는 단지 명령어를 실행할 뿐이기 때문에 따로 불필요한 relink를 방지해 주어야 한다.  
불필요한 relink가 올바르게 방지된 경우 `make bonus`를 한 번 수행한 뒤 다시 입력했을 때 아래와 유사한 메시지가 출력된다.

```shell
$ make bonus
make: Nothing to be done for 'bonus'.
```
