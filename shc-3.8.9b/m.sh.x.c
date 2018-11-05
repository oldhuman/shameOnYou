#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f m.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[3]))
	"\237\240\327\056\031\042\230\102\144\365\322\222\013\370\101\057"
	"\314\106\235\121\326\007\364\302"
#define      rlax_z	1
#define      rlax	((&data[24]))
	"\220"
#define      xecc_z	15
#define      xecc	((&data[28]))
	"\051\345\226\344\240\071\144\174\017\031\264\247\164\363\322\337"
	"\331\074\201\041\274"
#define      msg1_z	42
#define      msg1	((&data[48]))
	"\371\270\154\040\013\137\154\331\043\206\063\074\135\005\253\012"
	"\267\323\155\320\074\122\124\335\341\007\217\052\366\050\045\007"
	"\066\223\133\151\013\370\325\235\000\306\150\136\134\272\367"
#define      tst2_z	19
#define      tst2	((&data[97]))
	"\220\174\332\060\022\216\044\121\136\136\052\040\022\147\174\310"
	"\201\302\150\225\153\332\366\035"
#define      opts_z	1
#define      opts	((&data[117]))
	"\031"
#define      lsto_z	1
#define      lsto	((&data[118]))
	"\154"
#define      text_z	1067
#define      text	((&data[156]))
	"\360\011\306\161\052\202\216\135\333\207\025\067\102\015\040\030"
	"\131\261\225\063\341\262\346\006\222\121\073\312\030\137\371\011"
	"\151\277\173\224\102\363\047\356\154\170\115\011\020\276\254\111"
	"\153\065\314\176\227\246\016\311\211\003\361\251\075\322\030\200"
	"\342\213\166\067\307\313\153\372\255\047\025\216\251\100\372\107"
	"\061\010\110\322\354\321\215\230\000\104\315\200\020\144\223\335"
	"\174\373\256\367\035\137\244\133\113\247\205\302\226\240\100\367"
	"\224\367\276\305\047\330\177\206\070\324\321\233\125\327\223\003"
	"\323\251\152\335\103\043\014\201\260\120\042\207\170\146\235\227"
	"\027\011\046\202\201\050\022\113\263\170\152\013\132\217\074\346"
	"\062\252\067\362\046\316\141\053\052\175\173\171\241\346\140\230"
	"\270\343\205\246\234\350\116\247\036\073\221\217\247\331\352\024"
	"\034\363\357\043\014\010\046\171\337\127\171\037\155\220\112\366"
	"\114\363\304\250\241\347\170\375\324\214\355\123\375\146\342\214"
	"\051\140\051\146\030\373\260\132\234\173\066\144\056\037\077\345"
	"\341\267\177\037\107\153\343\232\323\021\315\346\010\130\121\016"
	"\276\332\342\000\262\141\140\212\322\156\230\267\252\114\172\347"
	"\171\023\025\110\161\123\223\205\046\246\376\143\002\137\022\153"
	"\107\012\061\327\016\160\120\105\357\262\225\035\062\033\366\334"
	"\173\175\152\154\324\345\117\166\160\212\272\000\256\365\315\110"
	"\366\227\336\162\201\064\074\264\330\276\031\365\165\150\203\305"
	"\162\352\352\145\205\370\015\177\157\035\253\245\136\362\131\231"
	"\006\104\012\214\027\123\315\072\143\152\033\054\021\115\227\115"
	"\207\134\007\077\371\143\067\347\244\140\111\056\367\310\154\352"
	"\336\263\325\132\114\366\005\302\222\164\062\140\007\013\104\056"
	"\333\125\031\217\317\000\272\254\133\076\072\260\160\025\215\213"
	"\274\070\031\353\264\372\101\356\104\231\237\174\034\167\077\261"
	"\341\027\347\010\015\001\377\165\310\026\360\217\324\223\063\301"
	"\253\076\220\145\005\141\370\246\211\347\072\063\307\361\231\350"
	"\333\052\057\261\072\172\115\224\374\261\076\070\243\070\333\216"
	"\152\312\301\377\307\271\242\175\200\034\026\120\173\055\117\312"
	"\075\134\233\252\142\162\104\220\007\337\144\136\150\057\112\232"
	"\047\214\367\101\235\202\203\046\044\103\130\327\061\361\364\270"
	"\014\155\165\004\036\312\323\031\341\265\047\215\212\051\050\160"
	"\170\334\120\105\065\204\100\044\221\372\345\104\006\041\274\153"
	"\377\120\330\146\115\263\067\036\332\337\026\230\203\306\043\206"
	"\244\001\342\040\042\262\203\014\166\245\211\102\032\110\326\016"
	"\315\133\354\372\025\077\000\256\214\366\174\260\262\372\126\150"
	"\126\050\001\015\177\126\130\232\205\013\276\052\264\025\112\355"
	"\062\257\076\355\043\356\113\034\307\144\372\065\000\205\357\213"
	"\327\322\135\256\337\377\152\110\326\306\004\101\320\212\010\373"
	"\355\027\170\236\034\011\062\165\111\322\226\070\250\120\043\023"
	"\106\135\207\163\023\062\311\351\153\277\037\171\117\255\105\054"
	"\105\115\036\126\210\160\164\217\101\334\320\310\146\263\007\240"
	"\204\322\326\370\245\020\004\104\163\057\042\352\222\017\127\042"
	"\050\064\130\163\270\316\116\125\210\313\343\265\313\331\241\276"
	"\303\176\257\247\101\241\307\246\114\227\020\205\262\115\053\376"
	"\133\272\073\243\167\167\211\326\375\124\302\046\074\167\221\171"
	"\162\363\173\246\122\342\141\265\053\327\145\102\016\102\201\135"
	"\343\055\001\160\243\267\045\047\110\143\174\053\234\141\052\231"
	"\245\127\206\210\260\357\306\342\030\114\134\273\237\040\034\302"
	"\137\100\212\247\211\031\043\267\100\035\253\312\121\203\215\012"
	"\031\166\317\003\303\320\177\373\327\077\263\046\270\116\001\074"
	"\375\157\325\207\361\167\321\377\034\132\347\307\102\100\244\044"
	"\122\366\024\106\242\263\013\026\303\136\162\137\273\006\142\362"
	"\216\373\217\155\155\153\221\204\332\031\334\373\302\020\126\107"
	"\005\075\226\020\114\355\054\170\043\332\052\242\052\056\052\133"
	"\350\121\247\012\361\106\101\362\300\306\146\102\250\022\134\376"
	"\300\260\361\055\233\321\235\023\266\342\305\130\310\343\362\366"
	"\343\115\127\123\365\060\152\051\051\054\307\172\115\064\303\350"
	"\030\234\027\360\155\244\303\377\005\352\253\047\124\141\241\137"
	"\034\351\006\143\057\053\163\062\006\322\225\074\134\202\041\246"
	"\350\034\047\335\023\247\032\005\102\134\064\214\211\275\273\377"
	"\227\064\206\067\317\216\155\030\324\105\076\137\317\264\337\320"
	"\316\065\062\062\041\071\221\112\212\271\323\064\133\250\012\076"
	"\352\312\152\144\073\360\204\165\267\303\334\153\120\102\255\114"
	"\352\364\054\226\273\200\077\370\324\126\246\206\004\371\172\064"
	"\012\226\212\366\305\030\126\224\377\332\072\004\363\116\133\031"
	"\234\016\326\224\075\052\210\021\263\322\111\043\164\307\264\214"
	"\012\361\036\222\007\125\325\024\166\355\155\047\203\241\011\066"
	"\210\020\310\332\114\222\363\253\214\374\024\114\170\250\217\203"
	"\232\255\025\241\002\352\266\171\330\044\241\133\306\253\221\116"
	"\273"
#define      tst1_z	22
#define      tst1	((&data[1272]))
	"\313\154\276\277\107\176\057\272\202\214\257\243\115\060\056\031"
	"\211\057\151\027\345\325"
#define      chk2_z	19
#define      chk2	((&data[1294]))
	"\210\050\164\026\346\277\166\235\127\020\156\262\303\013\202\260"
	"\374\124\147\172\031\307"
#define      pswd_z	256
#define      pswd	((&data[1353]))
	"\125\025\013\003\052\255\006\025\143\177\355\210\040\110\116\313"
	"\332\235\207\065\306\216\042\342\101\234\374\010\143\216\171\271"
	"\243\204\274\315\061\230\351\265\203\070\067\144\052\246\116\204"
	"\367\043\060\152\311\056\051\013\206\103\361\241\115\006\202\227"
	"\115\341\271\134\171\243\021\374\333\111\141\006\357\257\212\346"
	"\322\273\121\234\351\172\247\160\276\230\021\014\237\223\244\355"
	"\165\135\112\356\000\133\353\334\245\115\342\225\374\155\173\317"
	"\051\315\154\023\107\023\203\006\254\224\023\113\050\267\071\235"
	"\025\203\214\026\336\170\362\204\305\325\031\302\103\225\222\154"
	"\142\376\177\252\022\003\261\276\227\304\011\300\173\102\136\220"
	"\305\352\247\244\143\231\051\051\157\102\354\263\327\177\037\072"
	"\176\237\344\220\242\225\116\072\131\130\372\325\232\130\145\140"
	"\103\015\005\247\246\056\320\026\161\275\311\111\074\351\203\272"
	"\211\147\112\053\374\230\146\126\360\140\053\213\271\221\354\375"
	"\236\362\244\105\041\164\133\222\061\045\333\156\016\136\050\227"
	"\305\163\303\302\013\051\030\374\212\104\210\103\325\165\100\164"
	"\147\345\271\210\131\025\033\213\072\367\371\110\125\042\340\033"
	"\225\243\336\240\315\367\235\127\073\046\233\021\233\334\205\003"
	"\301\077\214\033\124\302\342\225\102\320\035\143\031\154\057\363"
	"\011\266\050\320\104\113\263\205\347\257\216\113\075\010\005\340"
	"\215"
#define      date_z	1
#define      date	((&data[1637]))
	"\031"
#define      chk1_z	22
#define      chk1	((&data[1641]))
	"\307\141\162\344\357\231\174\122\233\345\155\014\261\173\177\051"
	"\003\265\002\051\314\065\030\026\254\052"
#define      shll_z	10
#define      shll	((&data[1666]))
	"\156\350\064\140\337\110\277\365\215\154\322\106\017"
#define      inlo_z	3
#define      inlo	((&data[1677]))
	"\223\324\346"/* End of data[] */;
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
