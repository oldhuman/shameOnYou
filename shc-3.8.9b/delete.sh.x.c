#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f delete.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[0]))
	"\357\054\053\061\125\264\007\345\341\071\045\173\352\072\013\227"
	"\025\035\361\233"
#define      tst1_z	22
#define      tst1	((&data[25]))
	"\336\341\071\030\034\261\340\044\176\157\342\316\104\300\163\265"
	"\256\363\244\140\362\257\317\220\345\041\035\100\026\106\247\232"
#define      tst2_z	19
#define      tst2	((&data[56]))
	"\227\136\112\037\272\243\366\274\356\155\362\341\334\155\266\325"
	"\056\170\305\166\064\164\033\372"
#define      msg2_z	19
#define      msg2	((&data[77]))
	"\115\317\270\150\063\003\036\154\362\074\232\126\027\033\232\211"
	"\250\273\373\155\006"
#define      rlax_z	1
#define      rlax	((&data[97]))
	"\335"
#define      pswd_z	256
#define      pswd	((&data[153]))
	"\001\317\217\342\010\247\377\110\275\105\360\130\064\354\222\314"
	"\112\335\353\105\175\040\244\313\047\120\013\130\121\347\012\122"
	"\267\231\065\277\101\064\010\376\172\370\126\257\345\351\173\057"
	"\306\146\164\104\207\031\017\122\155\070\231\045\376\337\372\316"
	"\077\272\367\373\307\163\054\201\024\236\150\101\137\163\120\062"
	"\156\115\244\302\101\361\024\256\052\256\324\051\216\316\367\315"
	"\211\357\311\120\142\365\321\167\224\071\270\364\255\011\046\033"
	"\127\313\336\230\274\363\107\347\241\033\020\060\352\010\376\163"
	"\367\307\303\132\274\225\321\121\317\212\105\174\224\153\230\353"
	"\066\167\204\363\153\313\333\015\347\354\075\321\364\073\105\354"
	"\003\011\106\300\236\027\021\156\242\126\353\066\301\204\042\370"
	"\373\247\353\146\163\306\163\132\263\261\054\247\355\162\223\360"
	"\173\331\260\032\361\301\210\224\030\164\313\332\370\356\322\364"
	"\225\275\133\010\204\317\143\067\200\220\337\156\002\163\136\175"
	"\115\016\230\076\320\041\323\350\225\236\302\216\214\225\203\042"
	"\123\336\052\327\256\216\017\056\037\357\234\041\142\373\237\257"
	"\012\070\356\332\131\301\303\357\137\206\175\354\033\000\016\157"
	"\337\071\106\215\310\126\274\347\106\131\011\250\124\251\127\136"
	"\341\105\071\073\007\375\052\147\204\247\123\240\250\142\017\210"
	"\234\126\025\144\255\321\114\257\151\033\010\273\002\022\016\271"
	"\253\103\171\354\170\201\353\362\172\102\241\137\054\034\217\362"
	"\203\004\067\013\035\106\272\207\141\302\102\144\324\121\036\200"
	"\224\227\154"
#define      msg1_z	42
#define      msg1	((&data[454]))
	"\377\164\103\157\020\326\244\064\322\162\345\171\141\142\133\074"
	"\311\116\340\312\252\343\043\331\204\012\112\131\052\012\273\231"
	"\012\123\167\241\267\013\204\123\116\256\011\224\232\241"
#define      date_z	1
#define      date	((&data[499]))
	"\044"
#define      chk1_z	22
#define      chk1	((&data[504]))
	"\207\360\115\245\223\024\220\007\104\346\176\140\371\260\164\210"
	"\337\050\126\250\320\036\113\144\320\155\067"
#define      shll_z	10
#define      shll	((&data[527]))
	"\035\116\101\255\150\310\212\151\113\105\312"
#define      lsto_z	1
#define      lsto	((&data[538]))
	"\110"
#define      opts_z	1
#define      opts	((&data[539]))
	"\304"
#define      xecc_z	15
#define      xecc	((&data[542]))
	"\143\316\305\161\037\106\353\012\066\157\166\112\121\342\023\230"
	"\270\344\143"
#define      text_z	801
#define      text	((&data[658]))
	"\126\105\303\331\377\005\141\360\122\007\047\133\064\301\045\244"
	"\277\305\145\333\344\274\220\161\037\136\125\203\300\324\210\026"
	"\031\113\360\030\120\121\010\243\130\060\376\215\361\044\062\260"
	"\351\227\214\316\124\035\077\163\173\225\366\073\151\176\122\203"
	"\312\102\234\032\223\245\276\354\325\275\171\307\341\254\170\313"
	"\103\005\232\230\042\331\013\235\156\002\331\330\201\053\133\113"
	"\156\367\146\333\267\153\063\327\147\063\350\372\331\027\264\352"
	"\166\322\004\150\112\311\203\351\073\312\326\221\211\001\265\050"
	"\232\053\140\247\066\010\140\002\073\346\263\326\173\343\237\114"
	"\213\377\006\045\360\036\026\000\144\150\062\162\133\307\162\120"
	"\006\257\243\041\047\213\366\363\312\260\366\117\221\374\271\015"
	"\142\355\041\274\362\050\302\107\377\174\164\042\077\042\036\302"
	"\267\355\270\264\302\213\271\054\027\125\033\200\076\363\274\201"
	"\104\302\377\312\154\232\105\334\205\200\330\255\217\244\340\317"
	"\360\161\324\144\377\250\166\127\306\375\314\354\334\236\151\036"
	"\304\010\334\351\322\151\211\211\363\263\134\331\237\345\044\014"
	"\020\312\047\025\042\107\364\201\145\142\045\033\274\124\040\141"
	"\105\272\024\202\322\312\003\107\034\371\010\372\110\326\310\256"
	"\263\217\202\267\232\303\113\341\176\332\065\200\113\054\120\165"
	"\272\071\242\213\070\050\235\244\143\227\320\272\235\143\234\251"
	"\332\344\054\271\026\112\250\213\110\221\313\114\114\005\001\130"
	"\371\103\050\157\240\331\077\205\003\252\062\147\360\101\110\105"
	"\250\127\122\054\002\360\224\262\200\164\247\323\177\173\255\100"
	"\027\077\103\105\365\134\204\172\321\026\223\372\121\156\043\133"
	"\225\343\072\210\244\002\251\136\071\147\030\276\272\345\265\021"
	"\002\050\364\264\223\321\005\216\026\124\331\323\273\315\113\361"
	"\131\334\102\122\272\023\234\242\062\343\226\163\165\270\341\114"
	"\107\046\112\106\161\220\111\065\131\353\356\216\017\334\270\246"
	"\322\162\157\302\166\075\321\142\316\337\066\037\034\002\167\240"
	"\363\337\134\345\175\245\011\170\020\110\177\040\202\270\275\106"
	"\254\061\265\223\100\355\366\241\373\013\174\356\337\375\215\176"
	"\247\203\034\302\147\341\373\130\132\100\057\013\010\145\067\231"
	"\312\131\126\256\315\245\232\213\123\340\073\050\356\361\345\204"
	"\351\134\150\232\207\223\003\155\110\343\144\157\106\371\044\140"
	"\327\254\156\141\065\063\250\375\040\240\064\244\060\333\226\040"
	"\132\232\166\021\133\367\326\022\317\007\144\127\226\371\000\357"
	"\204\116\167\142\352\277\355\236\354\150\116\074\163\131\326\015"
	"\370\171\167\033\262\060\027\373\350\147\166\164\120\032\313\061"
	"\136\301\305\151\014\057\020\045\154\221\137\170\061\106\114\274"
	"\306\315\251\145\217\345\030\077\167\231\132\150\124\042\060\046"
	"\246\312\144\375\376\233\112\133\116\073\157\031\073\310\310\070"
	"\335\300\334\312\240\375\367\140\164\046\315\304\236\364\240\100"
	"\045\210\261\124\255\110\030\342\047\032\316\213\036\243\025\201"
	"\337\364\357\011\374\242\025\127\053\322\201\226\171\030\143\063"
	"\262\015\046\371\103\373\245\276\335\035\306\263\324\021\374\172"
	"\170\012\250\301\151\262\344\231\111\142\117\053\350\036\071\213"
	"\165\130\111\032\321\256\274\060\061\354\161\233\146\142\365\107"
	"\347\266\374\270\127\260\051\006\206\021\314\033\210\054\044\275"
	"\105\226\214\212\120\065\225\162\124\137\055\245\044\331\360\072"
	"\234\067\073\136\022\346\166\117\076\260\353\341\320\350\050\254"
	"\306\136\201\340\257\057\172\346\355\177\147\137\034\217\265\041"
	"\235\113\221\370\065\166\372\174\066\114\213\165\161\373\177\106"
	"\370\302\340\375\231\143\166\044\202\027\337\016\004\346\270\123"
	"\136\356\307\364\371\375\016\244\305\116\124\342\167\374\245\372"
	"\207\214\112\101\020\022\364\347\013\316\123\261\271\274\353\323"
	"\037\231\150\175\220\035\114\100\146\357\315\156\141\330\326\363"
	"\245\257\300\276\001\234\045"
#define      inlo_z	3
#define      inlo	((&data[1462]))
	"\256\227\017"/* End of data[] */;
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
