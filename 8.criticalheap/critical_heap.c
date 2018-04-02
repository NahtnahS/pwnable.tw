/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2017 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *init_proc();
// char *getenv(const char *name);
// struct tm *localtime(const time_t *timer);
// char *strncpy(char *dest, const char *src, size_t n);
// int strncmp(const char *s1, const char *s2, size_t n);
// void __noreturn exit(int status);
// __int64 __fastcall _read_chk(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
// int puts(const char *s);
// int setenv(const char *name, const char *value, int replace);
// size_t strlen(const char *s);
// int chdir(const char *path);
// int printf(const char *format, ...);
// void *memset(void *s, int c, size_t n);
// char *getcwd(char *buf, size_t size);
// unsigned int alarm(unsigned int seconds);
// ssize_t read(int fd, void *buf, size_t nbytes);
// int __cdecl _libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// void srand(unsigned int seed);
// int strcmp(const char *s1, const char *s2);
// __sighandler_t signal(int sig, __sighandler_t handler);
// __int64 _gmon_start__(void); weak
// char *realpath(const char *name, char *resolved);
// time_t time(time_t *timer);
// char *get_current_dir_name(void);
// __int64 __fastcall _printf_chk(_QWORD, _QWORD); weak
// int setvbuf(FILE *stream, char *buf, int modes, size_t n);
// int unsetenv(const char *name);
// int atoi(const char *nptr);
// char *strdup(const char *s);
// int rand(void);
// void __usercall __noreturn start(void *a1@<rax>, void (*a2)(void)@<rdx>);
signed __int64 sub_400CC0();
signed __int64 sub_400D40();
__int64 sub_400D60();
char *__fastcall read_buf(char *buf, unsigned int size);
__int64 read_int();
void __noreturn handler();
int setup();
int print_choose_heap_type();
int __fastcall create_normal_heap(NormalHeap *addr);
unsigned __int64 __fastcall create_clock_heap(ClockHeap *addr);
int __fastcall create_system_heap(SystemHeap *addr);
unsigned __int64 create_heap();
unsigned __int64 show_heap();
int rename_heap();
int menu();
int play_normal_heap_help();
unsigned __int64 __fastcall play_normal_heap(NormalHeap *a1);
int play_clock_heap_help();
unsigned __int64 __fastcall play_clock_heap(ClockHeap *a1);
int play_system_heap_help();
unsigned __int64 __fastcall play_system_heap(SystemHeap *a1);
unsigned __int64 play_heap();
int delete_heap();
void __fastcall main(__int64 argc, char **argv, char **envp); // idb
void __fastcall init(unsigned int a1, __int64 a2, __int64 a3);
void fini(void); // idb
void term_proc();
// char *strdup(const char *s);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// __int64 __fastcall __read_chk(_QWORD, _QWORD, _QWORD, _QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

char algn_400CBA[6] = { 'f', '\x0F', '\x1F', 'D', '\0', '\0' }; // weak
__int64 (__fastcall *off_603D20[2])() = { &sub_400D60, &sub_400D40 }; // weak
__int64 (__fastcall *off_603D28)() = &sub_400D40; // weak
char *off_604010 = "            __             \n            \\/.--,         \n            //_.'          \n       .---//------..      \n      / . . . . . . . \\    \n     / . ./\\. . ./\\ .. \\   \n     |. ./  \\. ./  \\ . |  \n     \\ . . . . . . . ..|  \n     \\. . . . . . . . ./   \n      \\ . . \\___/. . ./    \n       '-.__.__.__._-'     \n"; // weak
_UNKNOWN unk_604018; // weak
_UNKNOWN unk_60401F; // weak
FILE *stdout; // idb
FILE *stdin; // idb
char byte_604038; // weak
SystemHeap g_AllHeap[90];
// extern _UNKNOWN __gmon_start__; weak


//----- (0000000000400B68) ----------------------------------------------------
void *init_proc()
{
  void *result; // rax

  result = &__gmon_start__;
  if ( &__gmon_start__ )
    result = (void *)_gmon_start__();
  return result;
}
// 400C40: using guessed type __int64 _gmon_start__(void);

//----- (0000000000400C90) ----------------------------------------------------
void __usercall __noreturn start(void *a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  _libc_start_main((int (__cdecl *)(int, char **, char **))main, v2, (char **)&_0, (void (*)(void))init, fini, a2, a1);
  __halt();
  JUMPOUT(*(_QWORD *)algn_400CBA);
}

//----- (0000000000400CC0) ----------------------------------------------------
signed __int64 sub_400CC0()
{
  signed __int64 result; // rax

  result = &unk_60401F - &unk_604018;
  if ( (unsigned __int64)(&unk_60401F - &unk_604018) > 0xE )
    result = 0LL;
  return result;
}

//----- (0000000000400D40) ----------------------------------------------------
signed __int64 sub_400D40()
{
  signed __int64 result; // rax

  if ( !byte_604038 )
  {
    result = sub_400CC0();
    byte_604038 = 1;
  }
  return result;
}
// 604038: using guessed type char byte_604038;

//----- (0000000000400D60) ----------------------------------------------------
__int64 sub_400D60()
{
  return 0LL;
}

//----- (0000000000400D86) ----------------------------------------------------
char *__fastcall read_buf(char *buf, unsigned int size)
{
  char *result; // rax
  int nbytes; // [rsp+1Ch] [rbp-4h]

  nbytes = read(0, buf, size);
  if ( nbytes <= 0 )
  {
    puts("read error");
    exit(1);
  }
  result = (char *)(unsigned __int8)buf[nbytes - 1];
  if ( (_BYTE)result == '\n' )
  {
    result = &buf[nbytes - 1];
    *result = 0;
  }
  return result;
}

//----- (0000000000400DF3) ----------------------------------------------------
__int64 read_int()
{
  char buf[24]; // [rsp+10h] [rbp-20h]
  unsigned __int64 v2; // [rsp+28h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  if ( (signed int)_read_chk(0LL, (__int64)buf, 15LL, 16LL) <= 0 )
  {
    puts("read error");
    exit(1);
  }
  return (unsigned int)atoi(buf);
}

//----- (0000000000400E6F) ----------------------------------------------------
void __noreturn handler()
{
  puts("Timeout");
  exit(1);
}

//----- (0000000000400E8E) ----------------------------------------------------
int setup()
{
  unsigned int v0; // eax

  v0 = time(0LL);
  srand(v0);
  signal(14, (__sighandler_t)handler);
  chdir("/home/critical_heap++");
  alarm(0x3Cu);
  setvbuf(stdout, 0LL, 2, 0LL);
  setvbuf(stdin, 0LL, 2, 0LL);
  return printf("\x1B[01;38;5;214m%s\x1B[0m", off_604010);
}
// 604010: using guessed type char *off_604010;

//----- (0000000000400F1E) ----------------------------------------------------
int print_choose_heap_type()
{
  puts("Type of heap --");
  puts(" 1.Normal             ");
  puts(" 2.Clock              ");
  puts(" 3.System             ");
  puts("*****************************");
  return printf("Your choice : ");
}

//----- (0000000000400F66) ----------------------------------------------------
int __fastcall create_normal_heap(NormalHeap *addr)
{
  addr->magicx13371337 = 0x13371337LL;
  addr->zero = 0LL;
  printf("Content of heap :");
  read_buf(addr->buf, 40u);
  return puts("Done !!");
}

//----- (0000000000400FBB) ----------------------------------------------------
unsigned __int64 __fastcall create_clock_heap(ClockHeap *addr)
{
  ClockHeap *v1; // ST08_8
  time_t timer; // [rsp+10h] [rbp-10h]
  unsigned __int64 canary; // [rsp+18h] [rbp-8h]

  v1 = addr;
  canary = __readfsqword(0x28u);
  addr->magicxDEADBEEF = 0xDEADBEEFLL;
  timer = time(0LL);
  addr->tmtime = localtime(&timer);
  v1->year = v1->tmtime->tm_year + 1900;
  v1->month = v1->tmtime->tm_mon + 1;
  v1->day = v1->tmtime->tm_mday;
  v1->hour = v1->tmtime->tm_hour;
  v1->minute = v1->tmtime->tm_min;
  v1->seconds = v1->tmtime->tm_sec;
  puts("Done !!");
  return __readfsqword(0x28u) ^ canary;
}

//----- (00000000004010A8) ----------------------------------------------------
int __fastcall create_system_heap(SystemHeap *addr)
{
  addr->magicx48694869 = 0x48694869LL;
  addr->current_dir_name = (char *)(signed int)get_current_dir_name();
  addr->rand_num = rand();
  addr->secret_of_heap = 0LL;
  addr->name_of_heap = 0LL;
  addr->user_of_heap = 0LL;
  return puts("Done !!");
}

//----- (0000000000401116) ----------------------------------------------------
unsigned __int64 create_heap()
{
  int v0; // eax
  signed int i; // [rsp+Ch] [rbp-B4h]
  char buf[168]; // [rsp+10h] [rbp-B0h]
  unsigned __int64 canary; // [rsp+B8h] [rbp-8h]

  canary = __readfsqword(0x28u);
  for ( i = 0; i <= 9; ++i )
  {
    if ( !g_AllHeap[i].isused )
    {
      printf("Name of heap:");
      read_buf(buf, 160u);
      g_AllHeap[i].heapname = strdup(buf);
      g_AllHeap[i].isused = 1LL;
      print_choose_heap_type();
      v0 = read_int();
      if ( v0 == 2 )                            // 2.Clock
      {
        create_clock_heap((ClockHeap *)(72LL * i + 0x604040));
      }
      else if ( v0 == 3 )                       // 3.System
      {
        create_system_heap((SystemHeap *)(72LL * i + 0x604040));
      }
      else
      {
        if ( v0 != 1 )
        {
          puts("Invalid Choice");
          exit(0);
        }
        create_normal_heap((NormalHeap *)(0x48LL * i + 0x604040));// 1.Normal
      }
      break;
    }
  }
  if ( i == 10 )
  {
    puts("Full !");
    exit(1);
  }
  return __readfsqword(0x28u) ^ canary;
}

//----- (00000000004012D7) ----------------------------------------------------
unsigned __int64 show_heap()
{
  char *v0; // rsi
  __int64 v1; // rax
  int v3; // [rsp+8h] [rbp-28h]
  char buf[24]; // [rsp+10h] [rbp-20h]
  unsigned __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  printf("Index of heap :");
  v0 = (char *)12;
  read_buf(buf, 12u);
  v3 = atoi(buf);
  if ( v3 > 9 || v3 < 0 )                       // v3 = [0,9]
  {
    puts("Index error !");
    exit(2);
  }
  if ( g_AllHeap[v3].isused )
  {
    v1 = g_AllHeap[v3].magicx48694869;
    if ( v1 == 0x48694869 )
    {
      if ( g_AllHeap[v3].current_dir_name )
      {
        v0 = g_AllHeap[v3].current_dir_name;
        printf("The path of system : %s\n", v0);
      }
      if ( g_AllHeap[v3].user_of_heap )
      {
        v0 = g_AllHeap[v3].user_of_heap;
        printf("The user of system : %s\n", v0);
      }
      if ( g_AllHeap[v3].name_of_heap )
      {
        v0 = g_AllHeap[v3].name_of_heap;
        printf("The name of system : %s\n", v0);
      }
      if ( g_AllHeap[v3].secret_of_heap )
      {
        printf("Input the secret of the heap :", v0);
        if ( g_AllHeap[v3].rand_num != (unsigned int)read_int() )
        {
          puts("You can't see it !!");
          exit(5);
        }
        printf("My system detail : %s", g_AllHeap[v3].secret_of_heap);
      }
    }
    else if ( v1 == 0xDEADBEEFLL )
    {
      printf("Name : %s\n", g_AllHeap[v3].heapname);
      puts("Time :");
      printf("Year : %u\n", LODWORD(g_AllHeap[v3].secret_of_heap));
      printf("Month : %u\n", HIDWORD(g_AllHeap[v3].secret_of_heap));
      printf("Day : %u\n", LODWORD(g_AllHeap[v3].user_of_heap));
      printf("Hour : %u\n", HIDWORD(g_AllHeap[v3].user_of_heap));
      printf("Min : %u\n", LODWORD(g_AllHeap[v3].name_of_heap));
      printf("Sec : %u\n", HIDWORD(g_AllHeap[v3].name_of_heap));
    }
    else
    {
      if ( v1 != 0x13371337 )
      {
        puts("Invalid Type");
        exit(3);
      }
      printf("Name : %s\n", g_AllHeap[v3].heapname);
      printf("Content : %s\n", 72LL * v3 + 6307928);
    }
  }
  else
  {
    puts("No such heap !");
  }
  return __readfsqword(0x28u) ^ v5;
}

//----- (0000000000401729) ----------------------------------------------------
int rename_heap()
{
  unsigned int v0; // eax
  signed int index; // [rsp+Ch] [rbp-4h]

  printf("Index of heap :");
  index = read_int();
  if ( index > 9 || index < 0 )
  {
    puts("Index error !");
    exit(2);
  }
  if ( !g_AllHeap[index].isused )
    return puts("No such heap !");
  printf("Name of heap:");
  v0 = strlen(g_AllHeap[index].heapname);
  read_buf(g_AllHeap[index].heapname, v0);
  return puts("Done !");
}

//----- (0000000000401805) ----------------------------------------------------
int menu()
{
  puts("*****************************");
  puts("       Critical Heap++       ");
  puts("*****************************");
  puts(" 1.Create a new heap         ");
  puts(" 2.Show a heap               ");
  puts(" 3.Rename a heap             ");
  puts(" 4.Play with a heap          ");
  puts(" 5.Delete a heap             ");
  puts(" 6.Exit                      ");
  puts("*****************************");
  return printf("Your choice : ");
}

//----- (000000000040187F) ----------------------------------------------------
int play_normal_heap_help()
{
  puts("*****************************");
  puts("        Normal Heap          ");
  puts("*****************************");
  puts(" 1.Show the content of heap  ");
  puts(" 2.Change the content of heap");
  puts(" 3.Return                    ");
  puts("*****************************");
  return printf("Your choice : ");
}

//----- (00000000004018DB) ----------------------------------------------------
unsigned __int64 __fastcall play_normal_heap(NormalHeap *a1)
{
  int v1; // eax
  char buf[40]; // [rsp+20h] [rbp-30h]
  unsigned __int64 canary; // [rsp+48h] [rbp-8h]

  canary = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      play_normal_heap_help();
      v1 = read_int();
      if ( v1 != 2 )
        break;
      if ( a1->zero )                           // 2.Change the content of heap
      {
        puts("You can't change it anymore !");
      }
      else
      {
        printf("Content :");
        read(0, buf, 0x28uLL);
        strncpy(a1->buf, buf, 0x28uLL);
        a1->zero = 0x211B211B12345678LL;
      }
    }
    if ( v1 == 3 )                              // 3.Return
      break;
    if ( v1 == 1 )                              // 1.Show the content of heap
    {
      printf("Content :");
      _printf_chk(1LL, a1->buf);
    }
    else
    {
      puts("Invalid choice");
    }
  }
  return __readfsqword(0x28u) ^ canary;
}
// 400C60: using guessed type __int64 __fastcall _printf_chk(_QWORD, _QWORD);

//----- (00000000004019E7) ----------------------------------------------------
int play_clock_heap_help()
{
  puts("*****************************");
  puts("         Clock Heap          ");
  puts("*****************************");
  puts(" 1.Show the time of heap     ");
  puts(" 2.Update the time of heap   ");
  puts(" 3.Return                    ");
  puts("*****************************");
  return printf("Your choice : ");
}

//----- (0000000000401A43) ----------------------------------------------------
unsigned __int64 __fastcall play_clock_heap(ClockHeap *a1)
{
  int v1; // eax
  time_t timer; // [rsp+20h] [rbp-10h]
  unsigned __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      play_clock_heap_help();
      v1 = read_int();
      if ( v1 != 2 )
        break;
      timer = time(0LL);                        // 2.Update the time of heap
      a1->tmtime = localtime(&timer);
      a1->year = a1->tmtime->tm_year + 1900;
      a1->month = a1->tmtime->tm_mon + 1;
      a1->day = a1->tmtime->tm_mday;
      a1->hour = a1->tmtime->tm_hour;
      a1->minute = a1->tmtime->tm_min;
      a1->seconds = a1->tmtime->tm_sec;
    }
    if ( v1 == 3 )                              // 3.Return
      break;
    if ( v1 == 1 )                              // 1.Show the time of heap
    {
      printf("Year : %u\n", (unsigned int)a1->year);
      printf("Month : %u\n", (unsigned int)a1->month);
      printf("Day : %u\n", (unsigned int)a1->day);
      printf("Hour : %u\n", (unsigned int)a1->hour);
      printf("Min : %u\n", (unsigned int)a1->minute);
      printf("Sec : %u\n", (unsigned int)a1->seconds);
    }
    else
    {
      puts("Invalid choice");
    }
  }
  return __readfsqword(0x28u) ^ v4;
}

//----- (0000000000401BF5) ----------------------------------------------------
int play_system_heap_help()
{
  puts("*******************************");
  puts("          SYSTEM Heap          ");
  puts("*******************************");
  puts(" 1.Set the name for the heap   ");
  puts(" 2.Unset the name in the heap  ");
  puts(" 3.Get real path to the system  ");
  puts(" 4.Get the value of name       ");
  puts(" 5.Return                      ");
  puts("*****************************");
  return printf("Your choice : ");
}

//----- (0000000000401C65) ----------------------------------------------------
unsigned __int64 __fastcall play_system_heap(SystemHeap *a1)
{
  char *vtmp; // rsi
  char name[32]; // [rsp+20h] [rbp-130h]
  char value[264]; // [rsp+40h] [rbp-110h]
  unsigned __int64 v5; // [rsp+148h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  memset(name, 0, 0x18uLL);
  vtmp = 0LL;
  memset(value, 0, 0x30uLL);
  while ( 1 )
  {
    play_system_heap_help();
    switch ( (unsigned int)read_int() )
    {
      case 1u:                                  // 1.Set the name for the heap
        printf("Give me a name for the system heap :", vtmp);
        read_buf(name, 0x18u);
        printf("Give me a value for this name :", 24LL);
        vtmp = (char *)0x100;
        read_buf(value, 0x100u);
        if ( name[0] && value[0] )
        {
          vtmp = value;
          if ( setenv(name, value, 0) )
            puts("Failed !");
          else
            puts("Done !");
        }
        break;
      case 2u:                                  // 2.Unset the name in the heap
        printf("What's name do you want to unset :", vtmp);
        vtmp = (char *)24;
        read_buf(name, 0x18u);
        if ( name[0] )
        {
          if ( unsetenv(name) )
            puts("Failed !");
          else
            puts("Done !");
        }
        break;
      case 3u:                                  // 3.Get real path to the system
        if ( a1->current_dir_name )
        {
          vtmp = "/home/critical_heap++";
          if ( strcmp(a1->current_dir_name, "/home/critical_heap++") )
          {
            vtmp = a1->current_dir_name;
            realpath(a1->current_dir_name, vtmp);
          }
        }
        else
        {
          vtmp = 0LL;
          a1->current_dir_name = getcwd(a1->current_dir_name, 0LL);
        }
        break;
      case 4u:                                  // 4.Get the value of name
        printf("What's name do you want to see :", vtmp);
        vtmp = (char *)0x18;
        read_buf(name, 0x18u);
        if ( name[0] )
        {
          vtmp = name;
          if ( !strncmp("USER", name, 4uLL) )
          {
            a1->user_of_heap = getenv(name);
          }
          else
          {
            vtmp = name;
            if ( !strncmp("SYS", name, 3uLL) )
              a1->name_of_heap = getenv(name);
            else
              a1->secret_of_heap = getenv(name);
          }
          puts("I've record it in the heap !");
        }
        break;
      case 5u:
        return __readfsqword(0x28u) ^ v5;
      default:
        puts("Invalid choice");
        break;
    }
  }
}

//----- (0000000000401FA6) ----------------------------------------------------
unsigned __int64 play_heap()
{
  __int64 magic; // rax
  int index; // [rsp+Ch] [rbp-24h]
  char buf[24]; // [rsp+10h] [rbp-20h]
  unsigned __int64 canary; // [rsp+28h] [rbp-8h]

  canary = __readfsqword(0x28u);
  printf("Index of heap :");
  read_buf(buf, 0xCu);
  index = atoi(buf);
  if ( index > 9 || index < 0 )
  {
    puts("Index error !");
    exit(2);
  }
  if ( g_AllHeap[index].isused )
  {
    magic = g_AllHeap[index].magicx48694869;
    if ( magic == 0x48694869 )
    {
      play_system_heap((SystemHeap *)(72LL * index + 6307904));
    }
    else if ( magic == 0xDEADBEEFLL )
    {
      play_clock_heap((ClockHeap *)(72LL * index + 6307904));
    }
    else
    {
      if ( magic != 0x13371337 )
      {
        puts("Invalid Type");
        exit(3);
      }
      play_normal_heap((NormalHeap *)(72LL * index + 6307904));
    }
  }
  else
  {
    puts("No such heap !");
  }
  return __readfsqword(0x28u) ^ canary;
}

//----- (000000000040210A) ----------------------------------------------------
int delete_heap()
{
  signed __int64 v0; // rax
  signed int index; // [rsp+Ch] [rbp-4h]

  printf("Index of heap :");
  index = read_int();
  if ( index > 9 || index < 0 )
  {
    puts("Index error !");
    exit(2);
  }
  if ( g_AllHeap[index].isused )
  {
    v0 = 72LL * index + 6307912;
    g_AllHeap[index].isused = 0LL;
  }
  else
  {
    LODWORD(v0) = puts("No such heap !");
  }
  return v0;
}

//----- (00000000004021A0) ----------------------------------------------------
void __fastcall main(__int64 argc, char **argv, char **envp)
{
  setup();
  while ( 1 )
  {
    menu();
    switch ( (unsigned int)read_int() )
    {
      case 1u:                                  // 1.Create a new heap
        create_heap();
        break;
      case 2u:                                  // 2.Show a heap
        show_heap();
        break;
      case 3u:
        rename_heap();                          // 3.Rename a heap
        break;
      case 4u:
        play_heap();                            // 4.Play with a heap
        break;
      case 5u:
        delete_heap();                          // 5.Delete a heap
        break;
      case 6u:                                  // 6.Exit
        puts("Bye ~");
        exit(0x539);
        return;
      default:
        puts("Invalid choice");
        break;
    }
  }
}

//----- (0000000000402240) ----------------------------------------------------
void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  signed __int64 v4; // rbp
  __int64 v5; // rbx

  v3 = a3;
  v4 = &off_603D28 - off_603D20;
  init_proc();
  if ( v4 )
  {
    v5 = 0LL;
    do
      ((void (__fastcall *)(_QWORD, __int64, __int64))off_603D20[v5++])(a1, a2, v3);
    while ( v5 != v4 );
  }
}
// 603D20: using guessed type __int64 (__fastcall *off_603D20[2])();
// 603D28: using guessed type __int64 (__fastcall *off_603D28)();

//----- (00000000004022B4) ----------------------------------------------------
void term_proc()
{
  ;
}

// ALL OK, 28 function(s) have been successfully decompiled
