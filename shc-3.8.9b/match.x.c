#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -T -vv -e 05/11/2018 -f match 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\221"
#define      shll_z	8
#define      shll	((&data[3]))
	"\212\233\122\100\265\012\007\115\260\070"
#define      inlo_z	3
#define      inlo	((&data[11]))
	"\206\233\063"
#define      xecc_z	15
#define      xecc	((&data[15]))
	"\042\246\370\277\133\133\266\021\260\121\335\370\110\124\331\143"
	"\055\254"
#define      lsto_z	1
#define      lsto	((&data[32]))
	"\130"
#define      tst1_z	22
#define      tst1	((&data[33]))
	"\230\126\316\245\053\313\235\124\336\013\170\135\160\345\133\120"
	"\007\027\113\303\361\163\044\376\166\071\125"
#define      text_z	337
#define      text	((&data[101]))
	"\217\131\164\315\070\170\130\323\273\371\044\037\140\342\102\216"
	"\217\264\120\342\361\153\320\025\152\106\116\300\032\314\170\251"
	"\046\355\167\136\146\317\062\041\310\104\350\326\204\174\256\070"
	"\357\024\017\362\034\270\047\200\011\054\277\102\105\336\130\162"
	"\347\352\261\072\247\162\246\212\064\073\374\016\147\123\027\226"
	"\005\270\155\324\305\032\112\001\311\047\163\213\200\170\357\231"
	"\325\033\235\053\237\275\113\132\374\334\226\044\166\172\156\113"
	"\212\325\053\360\052\000\212\276\031\014\041\072\151\107\176\202"
	"\360\002\032\117\305\020\000\032\105\142\300\145\113\331\242\226"
	"\215\036\250\246\150\050\120\373\027\352\326\065\355\045\172\355"
	"\307\236\217\031\225\334\222\305\205\030\244\147\041\316\367\173"
	"\220\335\120\333\314\154\006\371\171\300\370\021\173\214\367\314"
	"\077\343\164\166\232\345\117\325\023\314\225\340\237\304\342\174"
	"\156\215\102\113\130\172\252\105\156\217\067\363\034\011\063\346"
	"\107\273\233\205\236\257\037\044\245\351\032\161\340\262\105\045"
	"\306\113\355\326\151\001\255\172\171\325\253\304\210\046\102\350"
	"\325\321\047\177\030\336\367\235\177\027\361\202\162\264\241\243"
	"\300\255\040\144\116\247\000\267\245\065\001\057\355\067\274\257"
	"\350\003\006\064\117\363\237\364\065\150\264\215\057\225\323\161"
	"\235\334\131\042\340\212\326\033\241\111\023\130\137\263\370\002"
	"\237\156\212\032\333\026\254\106\127\026\242\076\226\114\031\132"
	"\063\214\207\041\112\073\134\150\210\364\347\032\252\007\240\061"
	"\001\366\077\057\302\137\310\266\234\226\331\367\347\305\373\043"
	"\117\236\170\235\321\271\137\310\204\205\126\101\051\071\203\270"
	"\311\070\010\253\052\164\174\077\337\302\216\237\335\133\030\206"
	"\201\006\376\340\154\316\023\216\227\152\320\301\243\123\171\154"
	"\214\202\030\266\367\225\366\326\130\205\166\065\340\217\274\142"
	"\225\272\103\002\210\126\221"
#define      msg1_z	42
#define      msg1	((&data[507]))
	"\341\144\264\132\321\100\335\352\221\115\232\007\354\314\350\143"
	"\160\102\043\176\323\363\140\137\363\253\051\160\241\315\255\074"
	"\345\071\127\140\223\104\277\070\027\052\377\105\003\232\020\027"
	"\015\017\367\324\177\355"
#define      rlax_z	1
#define      rlax	((&data[553]))
	"\325"
#define      date_z	11
#define      date	((&data[554]))
	"\240\163\171\123\270\270\141\175\004\326\213"
#define      tst2_z	19
#define      tst2	((&data[568]))
	"\107\203\371\032\020\072\275\216\213\206\056\056\043\136\221\036"
	"\301\120\341\271\133\115\111\014\117"
#define      chk2_z	19
#define      chk2	((&data[590]))
	"\200\177\255\335\075\205\353\025\341\254\277\300\335\104\064\244"
	"\131\143\332"
#define      chk1_z	22
#define      chk1	((&data[609]))
	"\353\262\130\271\155\313\254\302\005\257\215\120\121\313\001\050"
	"\070\205\064\332\224\320\360\150"
#define      msg2_z	19
#define      msg2	((&data[633]))
	"\015\047\373\253\324\311\000\022\245\207\350\334\002\376\172\125"
	"\221\157\111\057"
#define      pswd_z	256
#define      pswd	((&data[659]))
	"\026\306\205\210\350\222\304\076\313\232\304\133\171\176\210\226"
	"\011\335\234\116\176\115\027\070\043\040\261\212\070\242\357\144"
	"\374\043\367\103\027\273\202\343\126\106\076\317\304\307\145\316"
	"\244\002\035\042\117\064\133\163\125\014\376\215\257\356\361\253"
	"\021\350\357\050\244\161\014\373\267\113\312\174\022\060\112\266"
	"\063\150\331\202\234\064\366\362\101\365\177\360\343\161\234\365"
	"\132\213\036\377\375\052\372\264\165\305\061\207\366\174\076\051"
	"\344\027\254\201\114\242\163\216\230\363\176\174\145\033\161\277"
	"\246\217\277\243\271\272\130\057\177\211\267\165\005\365\236\352"
	"\015\112\153\131\355\336\347\206\322\146\002\067\201\163\367\050"
	"\003\266\314\275\160\045\354\360\257\243\145\265\231\004\237\246"
	"\117\012\377\074\351\347\302\273\115\305\363\317\070\352\367\074"
	"\241\304\371\021\351\346\001\230\212\147\115\043\153\355\311\272"
	"\370\311\367\341\261\272\235\376\177\220\316\270\173\305\364\034"
	"\211\356\055\163\324\057\013\136\227\131\202\002\107\114\275\077"
	"\026\264\041\307\156\276\305\356\117\223\246\312\131\232\346\343"
	"\210\024\126\135\104\142\334\231\133\222\340\336\213\052\353\333"
	"\004\027\353\100\045\137\060\216\244\141\323\323\212\356\201\240"
	"\264\007\051\234\231\005\066\365\230\027\324\043\101\277\377\106"
	"\327\352"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
